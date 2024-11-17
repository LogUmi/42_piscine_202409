/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:55:07 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/18 16:00:59 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN ft_even
# define TRUE 1
# define FALSE 0
# define SUCCESS 0

typedef int	t_bool;

int	ft_even(int nbr)
{
	if (nbr % 2 == 0)
		return (1);
	else
		return (0);
}

#endif