/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiflema <mkiflema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:21:17 by mkiflema          #+#    #+#             */
/*   Updated: 2023/07/19 20:24:40 by mkiflema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	push_command(t_node **from_stack, t_node **to_stack)
{
	t_node	*from_head;
	t_node	*to_head;

	if ((ft_lstsize(*from_stack) == 0))
		return (-1);
	from_head = *from_stack;
	to_head = *to_stack;
	*from_stack = from_head->next;
	from_head->next = NULL;
	ft_lstadd_front(to_stack, from_head);
	return (0);
}

int	pa(t_node **stack_b, t_node **stack_a)
{
	if (push_command(stack_b, stack_a) == -1 || !stack_a || !stack_b)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_node **stack_a, t_node **stack_b)
{
	if (push_command(stack_a, stack_b) == -1 || !stack_a || !stack_b)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}