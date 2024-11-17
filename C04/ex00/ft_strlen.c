/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:40:45 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/11 10:25:00 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

	/*printf("i = %d ... Chaine 1 : ", i);
	printf("WH1 i = %d, j = %d, c = %d, size_str = %d, size_tofind = 
	%d, adr_found = %d \n",i ,j, count,size_str, size_tofind, adr_found);
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
	char	s1[100] = "coucou la voila";
	//char	s2[40] = "cette";
	//char 	s3[40] = "A012345\13";
	//char	s4[40] = "6789q";
	//unsigned int	nb = 5;
	//unsigned int	nb1 = 5;
	//printf("Chaine 1 : %s ... Chaine 2 : %s \n", s1, s2);
	printf("resultat 1 = %lu\n", strlen(&s1[0]));
	printf("resultat 2 = %d", ft_strlen(&s1[0]));
	return (0);
}*/