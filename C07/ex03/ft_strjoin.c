/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:04:34 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/24 13:02:05 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_nbchar(int size, char **strs)
{
	int	i;
	int	j;
	int	count;
	int	tot;

	i = 0;
	j = 0;
	count = 0;
	tot = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			count++;
			j++;
		}
		j = 0;
		i++;
	}
	return (count);
}

char	*ft_strjoin_1(int size, char **strs, char *sep, char *rng)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (k < size)
	{
		while (strs[i][j] != '\0')
			rng[k++] = strs[i][j++];
		if (k != size)
		{
			j = 0;
			while (sep[j] != '\0')
				rng[k++] = sep[j++];
		}
		j = 0;
		i++;
	}
	rng[k] = '\0';
	return (rng);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rng;
	int		i;

	i = 0;
	rng = malloc((ft_nbchar(size, strs) + (i * (size -1))) * sizeof(char));
	if (rng == NULL)
		return (NULL);
	if (size <= 0)
	{
		rng = "";
		return (rng);
	}
	while (sep[i] != '\0')
		i++;
	size = ft_nbchar(size, strs) + (size -1) * i;
	return (ft_strjoin_1(size, strs, sep, rng));
}

int	main(void)
{
	char	*s[] = {
			"12",
			"cette",
			"A012345"
			};
	char	sep[40] = "****";
	int	nb1 = 3;
	//int nb2 = 3;
	//int i = 0;
	//int j =0;
	//int *tab;
	//tab = malloc((nb2-nb1)*sizeof(int));
	
	//unsigned int	nb1 = 5;
	//printf("Chaine 1 : %s ... Chaine 2 : %s \n", s1, s2);
	//printf("resultat 1 = %lu\n", putnbr(&s1[0]));
	//printf("src = %s ... resultat = %s\n", s1, strdup(&s1[0]));
	printf("strs : %s ... %s ... %s ... sep : %s ... size : %d\n", s[0], 
	s[1], s[2], sep, nb1);
	printf("retour : %s", ft_strjoin(nb1, &s[0], &sep[0]));
	
	return (0);
}