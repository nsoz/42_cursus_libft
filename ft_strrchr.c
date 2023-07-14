/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:26:02 by muoz              #+#    #+#             */
/*   Updated: 2023/07/08 16:11:21 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			ctr;

	ctr = ft_strlen(str);
	while (ctr >= 0)
	{
		if (str[ctr] == (char)c)
			return ((char *)(str + ctr));
		ctr--;
	}
	return (0);
}
