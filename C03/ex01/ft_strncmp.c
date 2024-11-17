/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:04:45 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/17 19:17:52 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
	{
		return (0);
	}
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (n == i)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	unsigned int	n = 0;
	char			s1[40] = "4645";
	char			s2[40] = "4645";

	printf("Chaine 1 : %s ... Chaine 2 : %s ... n = %d\n", s1, s2, n);
	printf("resultat 1 = %d\n", strncmp(&s1[0], &s2[0], n));
	printf("resultat 2 = %d", ft_strncmp(&s1[0], &s2[0], n));
	return (0);
} */