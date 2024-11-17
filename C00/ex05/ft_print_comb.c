/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 10:16:45 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/05 23:04:57 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb_2(char d, char e, char f)
{
	write (1, &d, 1);
	write (1, &e, 1);
	write (1, &f, 1);
	if (!((d == '7') && (e == '8') && (f == '9')))
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb_1(char a, char b, char c)
{
	while (a < ':')
	{
		b = '0';
		while (b < ':')
		{
			c = '0';
			if (b > a)
			{
				while (c < ':')
				{
					if (c > b)
					{
						ft_print_comb_2 (a, b, c);
					}
					c = c + 1;
				}
			}
			b = b + 1;
		}
		a = a + 1;
	}
}

void	ft_print_comb(void)
{
	ft_print_comb_1('0', '0', '0');
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
