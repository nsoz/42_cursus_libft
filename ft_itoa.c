/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muoz <muoz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:42:29 by muoz              #+#    #+#             */
/*   Updated: 2023/07/12 19:33:09 by muoz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sign_check(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

int	divisibility(int n)
{
	int		div;
	int		a;

	div = 1;
	if (n < 0)
		a = -n;
	else
		a = n;
	while (a >= 10)
	{
		a = a / 10;
		div++;
	}
	return (div);
}

char	*process(char *prolen, int check, int prolen_index, int n)
{
	char	dig_mod;

	if (check == 1)
	{
		prolen[0] = '-';
		while (prolen_index > 0)
		{
			dig_mod = (n % 10 + '0');
			prolen[prolen_index] = dig_mod;
			n = (n / 10);
			prolen_index--;
		}
	}
	else
	{
		while (prolen_index >= 0 && n >= 0)
		{
			dig_mod = (n % 10 + '0');
			prolen[prolen_index] = dig_mod;
			n = (n / 10);
			prolen_index--;
		}
	}
	return (prolen);
}

char	*preliminary(char *prolen, int check, int prolen_index, int n)
{
	if (n == -2147483648)
	{
		prolen[0] = '-';
		n = n * -1;
		check = 0;
		process(prolen, check, prolen_index -1, n);
	}
	process(prolen, check, prolen_index, n);
	prolen[prolen_index + 1] = '\0';
	return (prolen);
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*istr;
	int		check;
	int		cdigits;

	check = sign_check(n);
	digits = divisibility(n);
	if (check == 1)
	{
		n = n * -1;
		digits = digits + 1;
	}
	istr = (char *)malloc((digits + 1) * sizeof(char));
	if (!istr)
		return (NULL);
	cdigits = digits - 1;
	istr = preliminary(istr, check, cdigits, n);
	return (istr);
}
