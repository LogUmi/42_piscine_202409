/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:36:22 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/07 18:14:26 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	rush_3(int i, int j, int x, int y)
{
	if (j == y)
	{
		if (i == 1 || i == x)
		{
			return ('C');
		}
		else
		{
			return ('B');
		}
	}
	return ('\0');
}

char	rush_2(int i, int j, int x, int y)
{
	if (j > 1 && j < y)
	{
		if (i == 1 || i == x)
		{
			return ('B');
		}
		else
		{
			return (' ');
		}
	}
	return ('\0');
}

char	rush_1(int i, int j, int x)
{
	if (j == 1)
	{
		if (i == 1 || i == x)
		{
			return ('A');
		}
		else
		{
			return ('B');
		}
	}
	return ('\0');
}

char	rush_0(int i, int j, int x, int y)
{
	char	c;

	c = rush_1(i, j, x);
	if (c == '\0')
	{
		c = rush_2(i, j, x, y);
		if (c == '\0')
		{
			c = rush_3(i, j, x, y);
		}
	}
	return (c);
}

void	rush(int x, int y)
{
	char	c;
	int		i;
	int		j;

	i = 1;
	j = 1;
	c = 'A';
	if (x > 0 && y > 0)
	{
		while (j <= y)
		{
			while (i <= x)
			{
				c = rush_0(i, j, x, y);
				ft_putchar(c);
				if (i == x)
				{
					write(1, "\n", 1);
				}
				i = i + 1;
			}
			j = j + 1;
			i = 1;
		}
	}
}

int	main(void)
{
	rush(10, 1);
	return (0);
}
