/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:22:29 by muoz              #+#    #+#             */
/*   Updated: 2023/07/09 14:19:31 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	size_t	ctr;
	char	*cdst;

	if (dst == NULL && src == NULL)
		return (NULL);
	csrc = (char *)src;
	cdst = (char *)dst;
	ctr = 0;
	if (csrc < cdst)
	{
		while (len--)
			*(cdst + len) = *(csrc + len);
	}
	else
	{
		while (ctr < len)
		{
			cdst[ctr] = csrc[ctr];
			ctr++;
		}
	}
	return (dst);
}
