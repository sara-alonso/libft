/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 22:59:32 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 01:04:56 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>

size_t	strlcat(char *dst, const char *src, size_t size)
{
	int	d_len;
	int	s_len;
	int	offset;
	int	i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	offset = d_len;
	i = 0;
	while (src[i] != '\0')
	{
		dst[offset] = src[i];
		offset++;
		i++;
		if (offset == size - 1)
			break ;
	}
	dst[offset] = '\0';
	return (d_len + s_len);
}
