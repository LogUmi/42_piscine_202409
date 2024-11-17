/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:56:14 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/14 16:53:25 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
		i = i * nb--;
	return (i);
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
	int	nb = 6;
	//unsigned int	nb1 = 5;
	//printf("Chaine 1 : %s ... Chaine 2 : %s \n", s1, s2);
	//printf("resultat 1 = %lu\n", putnbr(&s1[0]));
	printf("factorielle = %d ... Valeur = %d", nb,  ft_iterative_factorial(nb));
	return (0);
} */