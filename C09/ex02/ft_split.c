/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:32:57 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/25 22:59:03 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup_split(char **src, int i[])
{
	char	*dup;
	int		j;
	int		k;

	j = i[3];
	k = 0;
	dup = malloc((i[0] - i[3] + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (j < i[0])
	{
		dup[k] = src[0][j];
		j++;
		k++;
	}
	dup[k] = '\0';
	return (dup);
}

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

int	ft_split_test(char **strs, char *charset, int k)
{
	int	j;

	j = 0;
	while (charset[j] != '\0')
	{
		if (strs[0][k] == charset[j])
			return (1 + ft_split_test(strs, charset, k + 1));
		else
			j++;
	}
	return (0);
}

char	**ft_split_1(char **dest, char **strs, char *charset, int i[])
{
	while (strs[0][i[0]] != '\0')
	{
		i[1] = ft_split_test(strs, charset, i[0]);
		if (i[1] >= 1)
		{
			if (i[0] != 0)
			{
				dest[i[4]] = ft_strdup_split(strs, i);
				i[4] = i[4] + 1;
			}
			i[3] = i[0] + i[1];
			i[0] = i[0] + i[1];
		}
		else
		{
			i[0]++;
		}
	}
	if (i[3] != i[0])
	{
		dest[i[4]] = ft_strdup_split(strs, i);
		i[4] = i[4] + 1;
	}
	return (dest);
}

char	**ft_split(char **strs, char *charset)
{
	char	**dest;
	int		i[5];

	i[0] = 1;
	while (i[0] < 5)
	{
		i[i[0]] = 0;
		i[0] = i[0] + 1;
	}
	i[0] = 0;
	dest = malloc(ft_nbchar(1, strs) + ft_nbchar(1, &charset));
	if (!dest)
		return (NULL);
	dest = ft_split_1 (dest, strs, charset, i);
	dest[i[4]] = malloc(1 * sizeof(char));
	dest[i[4]] = 0;
	return (dest);
}
/* 
int	main(void)
{
	char	*s = "...12..,cette,A0123457//ABCDEF..,123456789.\';9874";
	char	*sep = ".,";
	char 	**dest;
	//int	nb1 = 3;
	//int nb2 = 3;
	int i = 0;
	//int j =0;gdb a.out
	
	//int *tab;
	//tab = malloc((nb2-nb1)*sizeof(int));
	
	//unsigned int	nb1 = 5;
	//printf("Chaine 1 : %s ... Chaine 2 : %s \n", s1, s2);
	//printf("resultat 1 = %lu\n", putnbr(&s1[0]));
	//printf("src = %s ... resultat = %s\n", s1, strdup(&s1[0]));
	printf("strs : %s ... sep : %s\n", s, sep);
	dest = ft_split(&s, sep);
	while (dest[i])
	{
		printf("%s\n", dest[i]);
		//free (dest[i]);
		i++;
	}
	free(dest);
	return (0);
} */