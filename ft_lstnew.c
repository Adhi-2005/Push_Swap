/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 02:01:54 by adshafee          #+#    #+#             */
/*   Updated: 2024/07/05 02:01:57 by adshafee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int value)
{
	t_list	*lptr;

	lptr = (t_list *)malloc(sizeof(t_list));
	if (!lptr)
		return (NULL);
	lptr->value = value;
	lptr->next = NULL;
	return (lptr);
}
