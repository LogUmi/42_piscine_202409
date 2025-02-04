/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cas_par_cas.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-brie <mle-brie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:26:57 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/22 17:07:54 by mle-brie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_under_1000(char *dest, char *param, char *dico, int i)
{
	ft_strncpy(dest, &param[i], 1);
	ft_strcat(dest, ":");
	ft_strstr(dico, dest);
	write(1, dest, ft_strlen(dest));
	write(1, " ", 1);
	ft_strcpy(dest, "100");
	ft_strcat(dest, ":");
	ft_strstr(dico, dest);
	write(1, dest, ft_strlen(dest));
	write(1, " ", 1);
	ft_strncpy(dest, &param[i], 1);
	ft_strcat(dest, "00");
}

void	ft_under_100(char *dest, char *param, char *dico, int i)
{
	ft_strncpy(dest, &param[i], 1);
	ft_strcat(dest, "0:");
	ft_strstr(dico, dest);
	write(1, dest, ft_strlen (dest));
	write(1, " ", 1);
	ft_strcpy(dest, &param[i + 1]);
	ft_strcat(dest, ":");
	ft_strstr(dico, dest);
	write(1, dest, ft_strlen(dest));
}

void	ft_under_20(char *dest, char *param, char *dico, int i)
{
	ft_strcpy(dest, param);
	if (param[i] == '0')
		ft_strcpy(dest, &param[i + 1]);
	ft_strcat(dest, ":");
	ft_strstr(dico, dest);
	write(1, dest, ft_strlen(dest));
}
