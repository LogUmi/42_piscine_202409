/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:05:33 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/16 15:42:53 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

/* int	main(void)
{
	char	s1[100] = "12";
	//char	s2[40] = "cette";
	//char 	s3[40] = "A012345\13";
	//char	s4[40] = "6789q";
	//int	nb = -8;
	//int pwr = -10;
	//unsigned int	nb1 = 5;
	//printf("Chaine 1 : %s ... Chaine 2 : %s \n", s1, s2);
	//printf("resultat 1 = %lu\n", putnbr(&s1[0]));
	printf("src = %s ... resultat = %s\n", s1, strdup(&s1[0]));
	printf("src = %s ... resultat = %s", s1, ft_strdup(&s1[0]));
	return (0);
} */