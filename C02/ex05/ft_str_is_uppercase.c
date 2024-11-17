/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:24:06 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/09 10:27:28 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;
	unsigned int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			flag = 0;
		}
		i = i + 1;
	}
	return (flag);
}

/*int	main(void)
{
	char	src[20] = "AUDNGFZ";

	printf("src = %s, test? = %d", src, ft_str_is_uppercase(&src[0]));
	return (0);
}*/