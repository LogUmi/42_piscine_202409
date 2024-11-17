/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:55:30 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/11 13:16:11 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0' && str[0] == '\0')
		return (&to_find[0]);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
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
	write (1, "\n", 1);*/

/* int	main(void)
{
	char	s1[100] = "";
	char	s2[40] = "";
	//char 	s3[40] = "A012345\13";
	//char	s4[40] = "6789q";
	//unsigned int	nb = 5;
	//unsigned int	nb1 = 5;
	printf("Chaine 1 : %s ... Chaine 2 : %s \n", s1, s2);
	printf("resultat 1 = %s\n", strstr(s1, s2));
	printf("resultat 2 = %s", ft_strstr(s1, s2));
	return (0);
} */