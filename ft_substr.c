/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:34:02 by muoz              #+#    #+#             */
/*   Updated: 2023/07/10 15:45:02 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	index;
	size_t	slen;
	size_t	maxpro;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	maxpro = slen - start;
	if (maxpro >= len)
		maxpro = len;
	ret = malloc((maxpro + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	index = -1;
	while (s[++index + start] && index < maxpro)
		ret[index] = s[index + start];
	ret[index] = '\0';
	return (ret);
}
