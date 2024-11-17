/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:37:35 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/23 18:16:14 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	dup = malloc((i + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (j < i)
	{
		dup[j] = src[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}

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
		tab[i].str = ft_strdup(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}

void	ft_putnbr(int nb)
{
	char	c;

	c = '0';
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			nb = nb % 10;
			c = '0' + nb;
			write (1, &c, 1);
		}
		else
		{
			c = '0' + nb;
			write (1, &c, 1);
		}
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	if (par == NULL || par == 0)
		return ;
	while (par[i].str)
	{
		write(1, par[i].str, par[i].size);
		write (1, "\n", 1);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);
		write(1, par[i].copy, ft_nbchar(1, &par[i].copy));
		write (1, "\n", 1);
		i++;
	}
}

/* int	main(void)
{
	char	*s[] = {
			"12",
			"cette",
			"A01552345",
			"zXjjj0"
			};
	int	nb1 = 4;
	int i = 0;
	struct s_stock_str *tab;
	printf("strs : %s ... %s ... %s ... %s ... size : %d\n"
	, s[0], s[1], s[2], s[3],nb1);
	tab = ft_strs_to_tab(nb1, &s[0]);
	ft_show_tab(tab);	
	
	while (tab[i].str)
	{
		free(tab[i].str);
		free(tab[i].copy);
		i++;
	}
	free(tab);
	
	ft_show_tab(tab);
	return (0);
}  */