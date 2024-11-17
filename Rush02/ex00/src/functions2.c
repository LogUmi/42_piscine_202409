/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-brie <mle-brie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:40:43 by mle-brie          #+#    #+#             */
/*   Updated: 2024/09/22 16:47:55 by mle-brie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long double	ft_atoi_ld(char *str)
{
	int			i;
	int			j;
	long double	nb;

	i = 0;
	j = 0;
	nb = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i] != '\0')
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nb *= 10;
		nb = nb + str[i] - 48;
		i++;
	}
	if ((j % 2) > 0)
		nb *= -1;
	return (nb);
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;
	unsigned int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			flag = 0;
		i = i + 1;
	}
	return (flag);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
