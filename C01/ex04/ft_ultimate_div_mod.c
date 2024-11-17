/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:16:08 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/06 20:44:59 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 3;
	printf("Avant : a=%d, b=%d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Apres : a=%d, b=%d", a, b);
	return (0);
}*/
