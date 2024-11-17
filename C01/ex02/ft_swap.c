/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:53:23 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/06 10:18:58 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	a;
	int	b;
	char	c;
	char	d;

	a = 97;
	b = 98;
	c = '\0';
	d = '\0';
	c = c + a;
	d = d + b;
	write (1, "Avant : a = ", 12);
	write (1, &c, 1);
	write (1, " | b = ", 7);
	write (1, &d, 1);
	write (1, "\n", 1)
	ft_swap(&a, &b);
	c = a;
	d = b;
	write (1, "Apres : a = ", 12);
	write (1, &c, 1);
	write (1, " | b = ", 7);
	write (1, &d, 1);
	return (0);
}*/
