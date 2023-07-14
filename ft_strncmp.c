/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:53:59 by muoz              #+#    #+#             */
/*   Updated: 2023/07/09 13:42:11 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			ctr;
	unsigned char	*cstr1;
	unsigned char	*cstr2;

	cstr1 = (unsigned char *)str1;
	cstr2 = (unsigned char *)str2;
	if (n <= 0)
		return (0);
	ctr = 0;
	while (cstr1[ctr] && cstr2[ctr] && ctr < n - 1 && cstr1[ctr] == cstr2[ctr])
		ctr++;
	return ((unsigned char)cstr1[ctr] - (unsigned char)cstr2[ctr]);
}
