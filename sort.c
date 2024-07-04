/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 02:03:25 by adshafee          #+#    #+#             */
/*   Updated: 2024/07/05 02:03:26 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_num_sort(t_list **a)
{
	int	v1;
	int	v2;
	int	v3;

	v1 = (*a)->value;
	v2 = (*a)->next->value;
	v3 = (*a)->next->next->value;
	if ((v1 < v2) && (v1 < v3))
	{
		rra_or_rrb(a, 'a');
		sa_or_sb(a, 'a');
	}
	else if ((v1 < v2) && (v1 > v3))
		rra_or_rrb(a, 'a');
	else if ((v1 > v2) && (v1 < v3))
		sa_or_sb(a, 'a');
	else if ((v1 > v2) && (v2 < v3))
		ra_or_rb(a, 'a');
	else
	{
		sa_or_sb(a, 'a');
		rra_or_rrb(a, 'a');
	}
}

void	four_num_sort(t_list **a, t_list **b)
{
	int	i;

	i = 4;
	while (i--)
	{
		if ((*a)->value == 0)
		{
			pb(a, b);
			break;
		}
		else
			ra_or_rb(a, 'a');
	}
	three_num_sort(a);
	pa(a, b);
}

void	five_num_sort(t_list **a, t_list **b)
{
	int	i;

	i = 5;
	while (i--)
	{
		if ((*a)->value == 0 || (*a)->value == 4)
			pb(a, b);
		else
			ra_or_rb(a, 'a');
	}
	three_num_sort(a);
	pa(a,b);
	pa(a,b);
	if ((*a)->value == 0)
	{
		sa_or_sb(a, 'a');
		ra_or_rb(a, 'a');
	}
	else
		ra_or_rb(a, 'a');
}

void	num_sort(t_list **a, t_list **b, int size)
{
	int	i;
	int	j;
	int	bits;
	int	num_shift;

	bits = obtain_bits_value(*a);
	i = 0;
	while (bits > i)
	{
		j = 0;
		while (size > j)
		{
			num_shift = ((*a)->value >> i) & 1;
			if (num_shift == 1)
				ra_or_rb(a, 'a');
			else
				pb(a, b);
			j++;
		}
		while (*b != NULL)
			pa(a, b);
		i++;
	}
}

void	sorting(t_list **a, t_list **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (size == 2)
		sa_or_sb(a, 'a');
	else if (size == 3)
		three_num_sort(a);
	else if (size == 4)
		four_num_sort(a, b);
	else if (size == 5)
		five_num_sort(a, b);
	else
		num_sort(a, b, size);
}
