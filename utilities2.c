/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 02:03:36 by adshafee          #+#    #+#             */
/*   Updated: 2024/07/05 02:41:52 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_check(t_list *head)
{
	t_list	*i;
	t_list	*j;

	i = head;
	while (i->next)
	{
		j = i->next;
		while (j)
		{
			if (i->value > j->value)
				return (0);
			j = j->next;
		}
		i = i->next;
	}
	return (1);
}

void	sort_numbers(t_list **head)
{
	t_list	*i;
	t_list	*j;
	int		tmp;

	i = *head;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (i->value > j->value)
			{
				tmp = i->value;
				i->value = j->value;
				j->value = tmp;
			}
			j = j->next;
		}
		i = i->next;
	}
}

void	assign_index_value(t_list *a, t_list *clone)
{
	t_list	*tmp;
	int		index;

	while (a)
	{
		index = 0;
		tmp = clone;
		while (tmp)
		{
			if (a->value == tmp->value)
			{
				a->value = index;
				break ;
			}
			index ++;
			tmp = tmp->next;
		}
		a = a->next;
	}
}

int	obtain_bits_value(t_list *head)
{
	t_list	*node;
	int		bits;
	int		max_value;

	bits = 0;
	node = head;
	max_value = node->value;
	while (node)
	{
		if (node->value > max_value)
			max_value = node->value;
		node = node->next;
	}
	while (max_value > 0)
	{
		bits++;
		max_value = max_value >> 1;
	}
	return (bits);
}
