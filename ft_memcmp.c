/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:33:44 by muoz              #+#    #+#             */
/*   Updated: 2023/07/09 11:26:36 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t				ctr;
	const unsigned char	*cptr1;
	const unsigned char	*cptr2;

	cptr1 = ptr1;
	cptr2 = ptr2;
	ctr = 0;
	if (num == 0)
		return (0);
	while (ctr < num - 1)
	{
		if (cptr1[ctr] != cptr2[ctr])
			return (cptr1[ctr] - cptr2[ctr]);
		ctr++;
	}
	return (cptr1[ctr] - cptr2[ctr]);
}
