/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjkim2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 11:35:22 by minjkim2          #+#    #+#             */
/*   Updated: 2021/06/07 11:35:23 by minjkim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_flag(const char *str, t_format *format)
{
	if (str[format->index] == '-')
	{
		format->flag = 1;
		format->index++;
	}
	//else if (str[format->index] == '+')
	//	sign(str);
	//else if (str[format->index] == ' ')
	//	blank(str);
	// else if (str[format->index] == '#')
	// 	nontation(str);
	else if (str[format->index] == '0')
	{
		format->flag = 2;
		format->index++;
	}
}

void	align(t_format *format)
{
	int i;

	i = 1;
	while (i < format->width)
	{
		ft_putchar(' ');
		i++;
	}
	return ;
}
//void	fill_zero(const char *str)
//{

//}
