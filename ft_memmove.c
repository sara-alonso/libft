/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 22:24:14 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 22:31:01 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
		copy_forwards(d, s, n);
	else
		copy_backwards(d, s, n);
	return (dest);
}

void	copy_forwards(char *d, const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

void	copy_backwards(char *d, const char *s, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		d[i - 1] = s[i - 1];
		i--;
	}
}
