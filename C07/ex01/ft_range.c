/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:42:42 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/16 15:39:56 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	*rng;
	int	i;
	int	j;

	i = max - min;
	j = 1;
	rng = NULL;
	if (min >= max)
		return (NULL);
	rng = malloc(i * sizeof(int));
	rng[0] = min;
	while (j < i)
	{
		rng[j] = rng[j - 1] + 1;
		j++;
	}
	return (rng);
}
/* 
int	main(void)
{
	//char	s1[100] = "12";
	//char	s2[40] = "cette";
	//char 	s3[40] = "A012345\13";
	//char	s4[40] = "6789q";
	int	nb1 = -52;
	int nb2 = -25;
	int i = 0;
	int *tab;
	tab = malloc((nb2-nb1)*4);
	tab = ft_range(nb1, nb2);
	//unsigned int	nb1 = 5;
	//printf("Chaine 1 : %s ... Chaine 2 : %s \n", s1, s2);
	//printf("resultat 1 = %lu\n", putnbr(&s1[0]));
	//printf("src = %s ... resultat = %s\n", s1, strdup(&s1[0]));
	printf("min = %d ... max = %d\n", nb1, nb2);
	while (i < (nb2 - nb1))
	{
		printf ("%d, ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
} */