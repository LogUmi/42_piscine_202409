/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:30:27 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/10 16:54:18 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
	/*printf("i = %d ... Chaine 1 : ", i);
	write (1, &s1[i], 1);
	printf (" ... Chaine 2 : ");
	write (1, " ", 1);
	write (1, &s1[i-1], 1);
	write (1, &s2[i], 1);
	printf (" ... Chaine 2 : ");
	write (1, " ", 1);
	write (1, &s2[i-1], 1);
	write (1, "\n", 1);

int	main(void)
{
	char	s1[40] = "A012345\13";
	char	s2[40] = "6789q";
	char 	s3[40] = "A012345\13";
	char	s4[40] = "6789q";
	unsigned int	nb = 5;
	unsigned int	nb1 = 5;
	printf("Chaine 1 : %s ... Chaine 2 : %s ... nb = %d\n", s1, s2, nb);
	printf("resultat 1 = %s\n", strncat(s3, s4, nb1));
	printf("resultat 2 = %s", ft_strncat(s1, s2, nb));
	return (0);
}*/