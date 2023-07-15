/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:13:05 by muoz              #+#    #+#             */
/*   Updated: 2023/07/14 16:42:33 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*position;

	if (lst == NULL)
		return (NULL);
	position = lst;
	while (position != NULL && position -> next != NULL)
	{
		position = position ->next;
	}
	return (position);
}
