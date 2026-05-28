/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 00:34:25 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/28 22:13:40 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	while (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr <= '9' && *nptr >= '0')
	{
		num *= 10;
		num += *nptr - '0';
		nptr++;
	}
	num = sign * num;
	return (num);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s;

	s = "-------------";
	printf("%d\n", ft_atoi(s));
	return (0);
}
*/