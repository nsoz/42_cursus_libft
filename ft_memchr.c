/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:25:34 by muoz              #+#    #+#             */
/*   Updated: 2023/07/09 14:31:01 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	char	*cpy;
	size_t	ctr;
	size_t	len_ptr;

	cpy = (char *)ptr;
	ctr = 0;
	len_ptr = ft_strlen(ptr) - 1;
	while (ctr < num)
	{
		if (cpy[ctr] == (char)value)
			return ((char *)&cpy[ctr]);
		ctr++;
	}
	return (NULL);
}
