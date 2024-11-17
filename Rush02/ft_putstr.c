/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 20:54:10 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/08 13:58:43 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		write (1, &str[i], 1);
		i = i +1;
	}
}

/*int	main(void)
{
	char*	a;

	a = "Bonjour ca marche";
	printf("Avant : a=%d, b=%d", a, b);
	ft_put_str(&a[0]);
	printf("Apres : a=%d, b=%d", a, b);
	return (0);
}*/