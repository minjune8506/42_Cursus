/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjkim2 <minjkim2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 23:45:09 by minjkim2          #+#    #+#             */
/*   Updated: 2021/08/07 23:45:10 by minjkim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include <stdlib.h>

void
	sa(t_stack **stack_a)
{
	int	temp;

	if ((*stack_a)->size == 1 || (*stack_a)->size == 0)
		return ;
	temp = (*stack_a)->top->data;
	(*stack_a)->top->data = (*stack_a)->top->next->data;
	(*stack_a)->top->next->data = temp;
	ft_putstr_fd("sa\n", 1);
}

void
	sb(t_stack **stack_b)
{
	int	temp;

	if ((*stack_b)->size == 1 || (*stack_b)->size == 0)
		return ;
	temp = (*stack_b)->top->data;
	(*stack_b)->top->data = (*stack_b)->top->next->data;
	(*stack_b)->top->next->data = temp;
	ft_putstr_fd("sb\n", 1);
}

void
	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_putstr_fd("ss\n", 1);
}

void
	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_node	*node;

	if ((*stack_b)->size == 0)
		return ;
	node = pop(*stack_b);
	push(*stack_a, node->data);
	free(node);
	ft_putstr_fd("pa\n", 1);
}

void
	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_node	*node;

	if ((*stack_a)->size == 0)
		return ;
	node = pop(*stack_a);
	push(*stack_b, node->data);
	free(node);
	ft_putstr_fd("pb\n", 1);
}
