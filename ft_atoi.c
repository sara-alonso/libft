/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 00:34:25 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 00:34:27 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		num *= 10;
		num += *str - '0';
		str++;
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