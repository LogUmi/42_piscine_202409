/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:09:17 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/11 13:13:41 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i = i + 1;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[40] = "145424545454543";
	char	s2[40] = "145424545454543";

	printf("Chaine 1 : %s ... Chaine 2 : %s\n", s1, s2);
	printf("resultat 1 = %d\n", strcmp(&s1[0], &s2[0]));
	printf("resultat 2 = %d", ft_strcmp(&s1[0], &s2[0]));
	return (0);
}*/