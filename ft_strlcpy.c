/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 22:07:37 by salonso-          #+#    #+#             */
/*   Updated: 2026/06/04 20:54:19 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
size_t ft_strlcpy(char *dst, const char *src, size_t size)
=======
size_t	ft_strlcpy(char *dest, char *src, size_t size)
>>>>>>> baca5c9 (adding missing files from list functions)
{
	unsigned int	i;

	i = 0;
	if (!src || !dst)
		return (0);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
