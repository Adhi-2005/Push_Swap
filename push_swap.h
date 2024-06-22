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

#endif