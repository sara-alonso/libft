/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 20:19:48 by salonso-          #+#    #+#             */
/*   Updated: 2026/06/04 16:53:34 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*allocate(int len)
{
	char	*s;

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	s[0] = '0';
	return (s);
}

int	is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

int	get_len(int n)
{
	int	pow_ten;
	int	len;

	len = 1;
	pow_ten = 10;
	while (n / pow_ten > 0)
	{
		len++;
		pow_ten *= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*s;
	int		i;

	nb = n;
	len = get_len(nb);
	if (is_negative(nb))
	{
		nb = -nb;
		len++;
	}
	s = allocate(len);
	i = len - 1;
	while (nb != 0)
	{
		s[i] = ((nb % 10) + 48);
		nb = nb / 10;
		i--;
	}
	if (is_negative(n))
		s[0] = '-';
	s[len] = NULL;
	return (s);
}
