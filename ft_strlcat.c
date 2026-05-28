/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 22:59:32 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/28 20:13:46 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	int	d_len;
	int	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size < d_len)
		return (s_len + size);
	else
	{
		dst = dst + d_len;
		ft_strlcpy(dst, src, size - d_len);
		return (d_len + s_len);
	}
}
