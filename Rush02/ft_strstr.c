/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:55:30 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/22 15:03:47 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_split(char *str, char *to_find, int i)
{
		while (str[i] != '\n')
		{	
			to_find[i] = str[i];
			i++;
		}
		to_find[i] = '\0';
		return (to_find);
}
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
			return (ft_split(&str[i + j], to_find, 0));
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}
