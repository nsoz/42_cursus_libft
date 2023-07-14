/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:33:55 by muoz              #+#    #+#             */
/*   Updated: 2023/07/09 11:30:32 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	ctr;
	char	*dest;

	ctr = 0;
	dest = (char *)s;
	while (ctr < n)
	{
		dest[ctr] = (char)c;
		ctr++;
	}
	return (dest);
}
