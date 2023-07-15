/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:21:18 by muoz              #+#    #+#             */
/*   Updated: 2023/07/15 20:27:40 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		ctr;
	char		*cdest;
	const char	*csrc;

	ctr = 0;
	cdest = (char *)dest;
	csrc = (const char *)src;
	while (((csrc != NULL) || (cdest != NULL)) && (ctr < n))
	{
		cdest[ctr] = csrc[ctr];
		ctr++;
	}
	return (cdest);
}
