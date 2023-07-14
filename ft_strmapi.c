/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:41:36 by muoz              #+#    #+#             */
/*   Updated: 2023/07/12 15:05:18 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		sindex;
	int					len;
	char				*new_arr;

	len = ft_strlen(s);
	sindex = 0;
	new_arr = (char *)malloc((len + 1) * sizeof(char));
	if (!new_arr)
		return (NULL);
	while (s[sindex] != '\0')
	{
		new_arr[sindex] = f(sindex, s[sindex]); 
		sindex++;
	}
	new_arr[sindex] = '\0';
	return (new_arr);
}

// char abc(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (c - 32);
// 	else
// 		return (c);
// }
// int main()
// {
// 	char *asd = ft_strmapi("abcdefg", abc);
// 	printf("%s\n", asd);
// 	free(asd);
// 	printf("%s", asd);
// }