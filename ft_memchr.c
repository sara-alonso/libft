/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 00:37:48 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 00:46:38 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src = (const char *)s;

	while (n-- > 0)
	{
		if (*src == c)
			return ((void *)src);
		src++;
	}
	return (NULL);
}
