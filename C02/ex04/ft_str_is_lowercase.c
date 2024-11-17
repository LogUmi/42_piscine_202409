/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:17:12 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/09 10:21:50 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;
	unsigned int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			flag = 0;
		}
		i = i + 1;
	}
	return (flag);
}

/*int	main(void)
{
	char	src[20] = "dskfQhskadjfhkzq";

	printf("src = %s, numeric? = %d", src, ft_str_is_lowercase(&src[0]));
	return (0);
}*/