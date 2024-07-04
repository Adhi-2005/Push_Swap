/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 02:03:12 by adshafee          #+#    #+#             */
/*   Updated: 2024/07/05 02:38:39 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft.h"
# include <stdlib.h>
# include <stdio.h>

// sort.c

void	sorting(t_list **a, t_list **b);
void	num_sort(t_list **a, t_list **b, int size);
void	five_num_sort(t_list **a, t_list **b);
void	four_num_sort(t_list **a, t_list **b);
void	three_num_sort(t_list **a);

// utilities1.c

int		is_error_zero(int input, char *str);
int		is_dup(int input, t_list *head);
int		get_list_stack(char **args, t_list **head);

void	free_list(t_list *head);
void	exit_program(t_list *head, char **split);

// utilities2.c

int		sort_check(t_list *a);
int		obtain_bits_value(t_list *head);

void	sort_numbers(t_list **head);
void	assign_index_value(t_list *a, t_list *clone);

// rotations1.c

void	sa_or_sb(t_list **head_node, char stack_name);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);

// rotations2.c

void	ra_or_rb(t_list **head, char stack_name);
void	rr(t_list **a, t_list **b);
void	rra_or_rrb(t_list **head, char stack_name);

// Test Functions

void	print_lst(t_list *head);

#endif