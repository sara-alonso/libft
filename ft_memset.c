/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:07:59 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/26 22:09:47 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	byte_value;
	size_t			i;

	p = (unsigned char *)s;
	byte_value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		p[i] = byte_value;
		i++;
	}
	return (s);
}
