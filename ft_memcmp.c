/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 00:47:07 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 01:07:43 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	register const unsigned char	*str1;
	register const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*str1++ != *str2++)
		{
			if (str1[-1] < str2[-1])
				return (-1);
			else
				return (1);
		}
	}
	return (0);
}
