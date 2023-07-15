/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 19:07:47 by muoz              #+#    #+#             */
/*   Updated: 2023/07/09 22:06:53 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	c_counter(const char *s, char c)
{
	size_t	counter;
	size_t	index;

	counter = 0;
	index = 0;
	while (s[index])
	{
		while (s[index] == c && s[index])
			index++;
		if (s[index] == '\0')
			return (counter);
		while (s[index] != c && s[index])
			index++;
		counter++;
	}
	return (counter);
}

void	ft_free(char **ret, size_t index)
{
	while (index--)
		free(ret[index]);
	free(ret);
}

char	**fill(char const *s, char c, size_t counter, char **ret)
{
	size_t	start;
	size_t	size;
	size_t	index;

	index = 0;
	start = 0;
	while (index < counter)
	{
		while (s[start] == c)
			start++;
		size = 0;
		while (s[start + size] && s[start + size] != c)
			size++;
		ret[index] = ft_substr(s, start, size);
		if (!ret[index])
		{
			ft_free(ret, index);
			return (NULL);
		}
		index++;
		start = start + size;
	}
	ret[index] = 0;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	counter;

	if (!s)
		return (NULL);
	counter = c_counter(s, c);
	ret = malloc(sizeof(char *) * (counter + 1));
	if (!ret)
		return (NULL);
	ret = fill(s, c, counter, ret);
	return (ret);
}
