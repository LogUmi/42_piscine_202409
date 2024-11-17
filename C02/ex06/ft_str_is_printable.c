/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:29:42 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/09 10:41:57 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	unsigned int	i;
	unsigned int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			flag = 0;
		}
		i = i + 1;
	}
	return (flag);
}

/*int	main(void)
{
	char	src[20] = " AUdfsd-*[-Df8456GFZ";

	src[10] = '\10';
	printf("src = %s, test? = %d", src, ft_str_is_printable(&src[0]));
	return (0);
}*/