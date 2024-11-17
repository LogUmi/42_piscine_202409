/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 22:11:54 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/24 14:30:53 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		i = i +1;
	}
	return (i);
}

/*int	main(void)
{
	char*	a;
	
	a = "Bonjour ca marche";
	printf("%s: nbre : %d", a, ft_strlen(&a[0]));
	printf("Apres : a=%d, b=%d", a, b);
	return (0);
}*/
