/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:41:37 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/14 22:27:00 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	cnt;

	i = nb;
	cnt = 0;
	if (nb <= 1)
		return (0);
	while (i > 1)
	{
		if (nb % i-- == 0)
			cnt += 1;
	}
	if (cnt == 1)
		return (1);
	return (0);
}

	/*printf("i = %d ... Chaine 1 : ", i);
	printf("WH1 i = %d, j = %d, c = %d, size_str = %d, size_tofind = 
	%d, adr_found = %d \n",i ,j, count,size_str, size_tofind, adr_found);
	printf("WH4 i = %d, j = %d, nb = %d\n", i, j, nb);
	write (1, &s1[i], 1);
	printf (" ... Chaine 2 : ");
	write (1, " ", 1);
	write (1, &s1[i-1], 1);
	write (1, &s2[i], 1);
	printf (" ... Chaine 2 : ");
	write (1, " ", 1);
	write (1, &s2[i-1], 1);
	write (1, "\n", 1);*/
/* 
int	main(void)
{
	//char	s1[100] = "   ---+--+1234ab567";
	//char	s2[40] = "cette";
	//char 	s3[40] = "A012345\13";
	//char	s4[40] = "6789q";
	int	nb = 113;
	//int pwr = -10;
	//unsigned int	nb1 = 5;
	//printf("Chaine 1 : %s ... Chaine 2 : %s \n", s1, s2);
	//printf("resultat 1 = %lu\n", putnbr(&s1[0]));
	printf("index = %d ... Valeur = %d", nb, ft_is_prime(nb));
	return (0);
} */