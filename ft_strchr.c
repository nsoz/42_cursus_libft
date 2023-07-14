/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:25:44 by muoz              #+#    #+#             */
/*   Updated: 2023/07/10 15:44:01 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strchr(const char *str, int c)
{
	size_t	ctr;

	if ((unsigned char)c == '\0')
		return ((char *)(&str[ft_strlen(str)]));
	ctr = -1;
	while (str[++ctr])
		if (str[ctr] == (unsigned char)c)
			return ((char *)(str + ctr));
	return (0);
}
