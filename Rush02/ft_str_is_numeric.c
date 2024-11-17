/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:01:08 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/09 10:16:14 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;
	unsigned int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			flag = 0;
		}
		i = i + 1;
	}
	return (flag);
}

/*int	main(void)
{
	char	src[20];

	src[0] = '\0';
	printf("src = %s, numeric? = %d", src, ft_str_is_numeric(&src[0]));
	return (0);
}*/
