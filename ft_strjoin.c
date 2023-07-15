/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:11:58 by muoz              #+#    #+#             */
/*   Updated: 2023/07/09 16:54:46 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*new_str;
	size_t	index;
	size_t	new_index;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc((total_len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	index = -1;
	new_index = -1;
	while (s1[++index] != '\0')
		new_str[++new_index] = s1[index];
	index = -1;
	while (s2[++index] != '\0')
		new_str[++new_index] = s2[index];
	new_str[++new_index] = '\0';
	return (new_str);
}
