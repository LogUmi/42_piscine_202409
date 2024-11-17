/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:37:35 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/19 18:33:05 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_nbchar(int size, char **strs)
{
	int	i;
	int	j;
	int	count;
	int	tot;

	i = 0;
	j = 0;
	count = 0;
	tot = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			count++;
			j++;
		}
		j = 0;
		i++;
	}
	return (count);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_nbchar(1, &av[i]);
		tab[i].str = av[i];
		tab[i].copy = av[i];
		i++;
	}
	tab[i].str = "\0";
	return (tab);
}

int	ft_putnbr(int nbr)
{
	char	c;

	if (nbr == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (0);
	}
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		c = (nbr % 2) + 48;
		write (1, &c, 1);
	}
	else
	{
		c = nbr + 48;
		write (1, &c, 1);
	}
	return (0);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (par[i].str[0] != '\0')
	{
		while (par[i].str[j] != '\0')
		{
			write(1, &par[i].str[j], 1);
			j++;
		}
		write (1, "\n", 1);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);
		j = 0;
		while (par[i].copy[j] != '\0')
		{
			write(1, &par[i].copy[j], 1);
			j++;
		}
		write (1, "\n", 1);
		j = 0;
		i++;
	}
}

int	main(void)
{
	char	*s[] = {
			"12",
			"cette",
			"A012345",
			"zXjjj0"
			};
	//char	sep[40] = "**";
	int	nb1 = 4;
	struct s_stock_str *tab;
	//int nb2 = 3;
	//int i = 0;
	//int j =0;
	//int *tab;
	//tab = malloc((nb2-nb1)*sizeof(int));
	
	//unsigned int	nb1 = 5;
	//printf("Chaine 1 : %s ... Chaine 2 : %s \n", s1, s2);
	//printf("resultat 1 = %lu\n", putnbr(&s1[0]));
	//printf("src = %s ... resultat = %s\n", s1, strdup(&s1[0]));
	printf("strs : %s ... %s ... %s ... %s ... size : %d\n", s[0], s[1], s[2], s[3],nb1);
	tab = ft_strs_to_tab(nb1, &s[0]);
	ft_show_tab(tab);	
	free(tab);
	return (0);
} 