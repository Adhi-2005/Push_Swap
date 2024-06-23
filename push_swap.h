#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft.h"
# include <stdlib.h>
# include <stdio.h>

// utilities1.c

int	is_error_zero(int input, char *str);
int	is_dup(int	input, t_list *head);
int	get_list_stack(char **args, t_list **head);

void	free_list(t_list *head);
void	exit_program(t_list *head, char **split);

// rotations1.c

void	sa_or_sb(t_list **head_node, char stack_name);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);

// rotations2.c

void	sa_or_sb(t_list **head_node, char stack_name);
void	rr(t_list **a, t_list **b);
void	rra_or_rrb(t_list **head, char stack_name);

// Test Functions

void	print_lst(t_list *head);

#endif