#include "push_swap.h"

void	sa_or_sb(t_list **head_node, char stack_name)
{
	int	tmp;
	if (!(*head_node) || ft_lstsize(*head_node) == 1)
		return ;
	tmp = (*head_node)->value;
	(*head_node)->value = (*head_node)->next->value;
	(*head_node)->next->value = tmp;
	if (stack_name == 'a')
		write (1, "sa\n", 3);
	else
		write (1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	int	tmp;

	if (!(*a) || ft_lstsize(*a) || !(*b) || ft_lstsize(*b))
		return ;
	tmp = (*a)->value;
	(*a)->value = (*a)->next->value;
	(*a)->next->value = tmp;
	tmp = (*b)->value;
	(*b)->value = (*b)->next->value;
	(*b)->next->value = tmp;
	write (1, "ss\n", 3);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*node;

	if (!(*b))
		return ;
	tmp = *b;
	node = ft_lstnew(tmp->value);
	*b = tmp->next;
	ft_lstadd_front(a, node);
	free(tmp);
	write (1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*node;

	if (!(*a))
		return ;
	tmp = *a;
	node = ft_lstnew(tmp->value);
	*a = tmp->next;
	ft_lstadd_front(b, node);
	free(tmp);
	write (1, "pb\n", 3);
}