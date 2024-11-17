/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:37:30 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/09 11:59:44 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;
	unsigned int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
			{
				flag = 0;
			}
		}
		i = i + 1;
	}
	return (flag);
}

/*int	main(void)
{
	char	src[20] = "bonJour0cAamarche";

	printf("src = %s, alpha? = %d", src, ft_str_is_alpha(&src[0]));
	return (0);
}*/