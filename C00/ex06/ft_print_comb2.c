/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:03:22 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/05 23:04:41 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2_2(char e, char f, char g, char h)
{
	if ((g == e) && (h == f))
	{
	}
	else
	{
		write (1, &f, 1);
		write (1, &e, 1);
		write (1, " ", 1);
		write (1, &h, 1);
		write (1, &g, 1);
		if (!((e == '8') && (f == '9') && (g == '9') && (h == '9')))
		{
			write (1, ", ", 2);
		}
	}
}

void	ft_print_comb2_1(char a, char b, char c, char d)
{
	while ((b < ':') && (a < ':'))
	{
		while (d < ':')
		{
			ft_print_comb2_2 (a, b, c, d);
			c = c +1;
			if (c == ':')
			{
				c = '0';
				d = d + 1;
			}
		}
		a = a + 1;
		if (a == ':')
		{
			a = '0';
			b = b + 1;
		}
		c = a;
		d = b;
	}
}

void	ft_print_comb2(void)
{
	ft_print_comb2_1 ('0', '0', '0', '0');
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
