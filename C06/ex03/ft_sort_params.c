/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:25:56 by lgerard           #+#    #+#             */
/*   Updated: 2024/09/14 13:50:04 by lgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i = i + 1;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_params(char *argv[])
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0')
	{
		write (1, &argv[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
}
void	ft_sort_params(int argc, char *argv[])
{
	int	i;
	int	j;
	int	k;
	char	flag[argc];
			
	i = 0;
	j = 2;
	k = 0;
	while (i < argc)
		flag[i++] = '0';
	//flag[argc] = '\0';
	i = 1;
	while (i < argc)
	{
		while (j < argc)
		{
			if (i != j)
			{
				printf("%s, %s, %s\n", argv[i], argv[j], flag);
				if (argv[j][k] == '\0')
				{
				flag[j-1] += 1;
				j++;
				k = 0;
				}
				else 
				{	
					if(argv[i][k] == '\0')
					{
					flag[i-1] += 1;
						j++;
						k = 0;
					}
					else
					{			
						if(argv[i][k] < argv[j][k])
						{	
							flag[i-1] += 1;
							j++;
							k = 0;
						}
						else
						{ 
							if(argv[i][k] > argv[j][k])
							{	
								flag[j-1] += 1;
								j++;
								k = 0;
							}
							else
							k++;
						}
					}
				}
			}
			else
				j++;
		}
		j = i+1;
		k = 0;		
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		return (0);
	ft_sort_params(argc, &argv[0]);
	return (0);
}
