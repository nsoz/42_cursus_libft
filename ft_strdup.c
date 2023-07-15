/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:00:18 by muoz              #+#    #+#             */
/*   Updated: 2023/07/10 13:23:34 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*new_ar;
	int		ctr;

	slen = ft_strlen(s);
	new_ar = (char *)malloc((slen + 1) * sizeof(char));
	if (!new_ar)
		return (NULL);
	ctr = 0;
	while (s[ctr])
	{
		new_ar[ctr] = s[ctr];
		ctr++;
	}
	new_ar[ctr] = '\0';
	return (new_ar);
}
