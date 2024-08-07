/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 02:03:00 by adshafee          #+#    #+#             */
/*   Updated: 2024/07/05 02:03:02 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_av(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		if (av[i][j] == '\0')
			return (0);
		while (av[i][j] && av[i][j] == ' ')
		{
			if (av[i][j + 1] == '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	exit_error(void)
{
	printf("ERROR\n");
	exit(1);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	t_list	*clone;

	b = NULL;
	if (ac == 1)
		return (0);
	if (av[1] == NULL || !is_valid_av(av))
		exit_error();
	if (!get_list_stack(av, &a))
		return (free_list(a), 1);
	if (!get_list_stack(av, &clone))
		return (free_list(a), free_list(clone), 1);
	if (!sort_check(a))
	{
		sort_numbers(&clone);
		assign_index_value(a, clone);
		sorting(&a, &b);
	}
	free_list(clone);
	free_list(a);
	return (0);
}
