/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:28:09 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/10 16:18:14 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
	write (1, "\n", 1);
	write (1, &s2[i], 1);
	printf (" ... Chaine 2 : ");
	write (1, " ", 1);
	write (1, &s2[i-1], 1);
	write (1, "\n", 1);

int	main(void)
{
	char	s1[40] = "01A2345";
	char	s2[40] = "678q9";
	char 	s3[40] = "01A2345";
	char	s4[40] = "678q9";
	printf("Chaine 1 : %s ... Chaine 2 : %s\n", s1, s2);
	printf("resultat 1 = %s\n", strcat(s3, s4));
	printf("resultat 2 = %s", ft_strcat(s1, s2));
	return (0);
}*/