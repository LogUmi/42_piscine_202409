/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_loic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:19:37 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/22 18:10:05 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int ft_write_number(long double num, char *param, int len, char *dico)
{
	int		i;
	char	*dest;
	
	i = 0;
	 dest = malloc( 40 * sizeof(char));
	 if (dest == NULL)
	 	return (0);
	if (num > 20000 && num < 100000)
	{
		ft_under_100000(dest, param, dico, i);
		num = num - ft_atoi_ld(dest);
		i++;
	}
	if (num >= 1000 && num <= 20000)
	{
		ft_under_10000(dest, param, dico, i);
		num = num - ft_atoi_ld(dest);
		i++;
	}
	else
	{
		if (i != 0)
			i++;
	}
	if (num >= 100 && num < 1000)
	{
		ft_under_1000(dest, param, dico, i);
		num = num - ft_atoi_ld(dest);
		i++;
	}
	else 
	{
		if (i !=0)
			i++;		
	}
	if (num < 100 && num > 20)
		ft_under_100(dest, param, dico, i);
	if (num <= 20)
		ft_under_20(dest, param, dico, i);
	write (1, "\n", 1);
	len++;
	free(dest);
	return (0);
} 

int	ft_size_file(char *file_name)
{
	int		fd;
	int		nb_read;
	int		count;
	char	*buf[1];

	fd = 0;
	nb_read = 1;
	count = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (nb_read != 0)
	{
		nb_read = read(fd, buf, 1);
		if (nb_read == -1)
			return (-1);
		count++;
	}
	close(fd);
	return (count);
}

int	ft_read_file(char *file_name, char *dico)
{
	int		fd;
	int		i;
	int		nb_read;
	char	buf[1];

	fd = 0;
	i = 0;
	nb_read = 1;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (nb_read != 0)
	{
		nb_read = read(fd, buf, 1);
		if (nb_read == -1)
			return (-1);
		if (buf[0] != 32)
			dico[i++] = buf[0];
	}
	dico[i] = '\0';
	close(fd);
	return (0);
}

void	main_dico(char *file_name, char *parameter, int len)
{
	int		fd;
	char	*dico;
	int		size;

	fd = 0;
	size = 0;
	dico = "\0";
	size = ft_size_file (file_name);
	if (size == -1)
		return ;
	dico = malloc((size) * sizeof(char));
	if (dico == NULL)
		return ;
	fd = ft_read_file(file_name, dico);
	if (fd == -1)
		return ;
	if (ft_write_number (ft_atoi_ld(parameter), parameter, len, dico) == -1)
		write (1, "Dict Error\n", 11);
	free(dico);
	return ;
}

int	main(int argc, char *argv[])
{
	char		*file_name;

	file_name = "";
	if (argc <= 1 || argc > 3)
		return (0);
	if (argc == 3)
		file_name = argv[1];
	else
		file_name = "numbers.dict";
	if (ft_atoi_ld(argv[argc -1]) < 0)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	if (ft_str_is_numeric(argv[argc -1]) == 0)
	{
		write (1, "error\n", 6);
		return (0);
	}
	main_dico (file_name, argv[argc - 1], ft_strlen(argv[argc -1]));
	return (0);
}
