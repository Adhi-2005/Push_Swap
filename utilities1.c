/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 02:03:32 by adshafee          #+#    #+#             */
/*   Updated: 2024/07/05 02:41:41 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_error_zero(int input, char *str)
{
	int	i;

	i = 0;
	if (input == 0)
	{
		while (str[i])
		{
			if ((str[i] == '-' || str[i] == '+')
				&& (str[i + 1] >= '0' && str[i + 1] <= '9'))
				i++;
			while (str[i] == ' ')
				i++;
			if (str[i])
				return (1);
		}
		return (0);
	}
	return (0);
}

int	is_dup(int input, t_list *head)
{
	t_list	*match_check;

	match_check = head;
	while (match_check)
	{
		if (match_check->value == input)
			return (1);
		match_check = match_check->next;
	}
	return (0);
}

void	free_list(t_list *head)
{
	t_list	*save;

	while (head)
	{
		save = head->next;
		free(head);
		head = save;
	}
}

void	exit_program(t_list *head, char **split)
{
	free_splits(split);
	free_list(head);
	ft_putstr("ERROR\n");
	exit(1);
}

int	get_list_stack(char **args, t_list **head)
{
	t_list	*node;
	char	**tmp_split;
	int		input;
	int		i;
	int		j;

	*head = NULL;
	i = 0;
	while (args[++i])
	{
		tmp_split = ft_split(args[i], ' ');
		if (!tmp_split)
			return (0);
		j = -1;
		while (tmp_split[++j])
		{
			input = ft_atoi(tmp_split[j]);
			if (is_error_zero(input, tmp_split[j]) || is_dup(input, *head))
				exit_program(*head, tmp_split);
			node = ft_lstnew(input);
			ft_lstadd_back(head, node);
		}
		free_splits(tmp_split);
	}
	return (1);
}
