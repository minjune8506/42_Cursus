/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjkim2 <minjkim2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 23:44:28 by minjkim2          #+#    #+#             */
/*   Updated: 2021/08/07 23:44:28 by minjkim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void
	check_valid(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]) && !(av[i][j] == ' ') \
			&& !(av[i][j] == '-') && !(av[i][j] == '+'))
				print_error();
			j++;
		}
		i++;
	}
}

static void
	range_util(char *str)
{
	if (ft_atoi_long(str) > 2147483647 || ft_atoi_long(str) < -2147483648)
		print_error();
	while (is_space(*str) && *str)
		str++;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
		str++;
	if (ft_strlen(str) >= 11)
		print_error();
}

void
	check_range(char **av)
{
	char	**temp;
	int		i;
	int		j;

	i = 1;
	while (av[i])
	{
		if (ft_strchr(av[i], ' '))
		{
			j = 0;
			temp = ft_split(av[i], ' ');
			while (temp[j])
			{
				range_util(temp[j]);
				j++;
			}
			split_free(temp);
		}
		else
			range_util(av[i]);
		i++;
	}
}

void
	check_overlap(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				print_error();
			j++;
		}
		i++;
	}
}
