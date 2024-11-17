/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:16:29 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/08 20:46:38 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
		dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "rien ;-)";
	char	src[20] = "Bonjour ca marche";
	 
	printf("Avant : src=%s, dest=%s \n", src, dest);
	ft_strcpy(&dest[0], &src[0]);
	printf("Apres : src=%s, dest=%s", src, dest);
	return (0);
}*/