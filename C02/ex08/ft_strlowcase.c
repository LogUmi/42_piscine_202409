/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:11:11 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/09 11:46:16 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i = i + 1;
	}
	return (str);
}

/*int	main(void)
{
	char	src[40] = "Bonjour89SalUt-";

	printf("Avant : src = %s\n", src);
	printf("Apres : src = %s", ft_strlowcase(&src[0]));
	return (0);
}*/