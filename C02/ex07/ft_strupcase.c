/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:45:44 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/09 11:09:34 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i = i + 1;
	}
	return (str);
}

/*int	main(void)
{
	char	src[40] = "Bonjour89salut-";

	printf("Avant : src = %s\n", src);
	printf("Apres : src = %s", ft_strupcase(&src[0]));
	return (0);
}*/