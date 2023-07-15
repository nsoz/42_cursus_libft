/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:42:29 by muoz              #+#    #+#             */
/*   Updated: 2023/07/15 20:26:37 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*process(char *str, long ln, long check, long len)
{
	char	ln_mode;
	long	len_cover;

	len_cover = len;
	if (check == 1)
		str[0] = '-';
	while (ln)
	{
		ln_mode = (ln % 10 + '0');
		str[len] = ln_mode;
		len--;
		ln = ln / 10;
	}
	str[len_cover + 1] = '\0';
	return (str);
}

long	divisibility(long ln, long check)
{
	long	div;

	div = 0;
	if (ln == 0)
		return (1);
	if (check == 1)
		div++;
	while (ln > 0)
	{
		ln = ln / 10;
		div++;
	}
	return (div);
}

long	sign_check(long ln)
{
	if (ln < 0)
	{
		return (1);
	}
	return (0);
}

long	sign_change(long ln, int check)
{
	if (check == 1)
		ln *= -1;
	return (ln);
}

char	*ft_itoa(int n)
{
	long	ln;
	char	*istr;
	long	digit;
	long	check;

	ln = n;
	check = sign_check(ln);
	ln = sign_change(ln, check);
	digit = divisibility(ln, check);
	istr = malloc((digit + 1) * sizeof(char));
	if (!istr)
		return (NULL);
	if (ln == 0)
	{
		istr[0] = '0';
		istr[1] = '\0';
	}
	else
		process(istr, ln, check, (digit - 1));
	return (istr);
}
