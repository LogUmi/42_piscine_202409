/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-brie <mle-brie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:07:02 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/22 17:04:02 by mle-brie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

long double	ft_atoi_ld(char *str);
void		ft_putstr(char *str);
int			ft_strlen(char *str);
char		*ft_strstr(char *str, char *to_find);
int			ft_str_is_numeric(char *str);
char		*ft_strcat(char *dest, char *src);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
void		ft_under_1000(char *dest, char *param, char *dico, int i);
void		ft_under_100(char *dest, char *param, char *dico, int i);
void		ft_under_20(char *dest, char *param, char *dico, int i);

#endif