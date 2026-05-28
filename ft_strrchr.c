/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 23:45:06 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/28 19:55:44 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*searches for the last occurrence of the character c (an unsigned char)
in the string pointed to, by the argument str.*/

char	*strrchr(const char *s, int c)
{
	char	*str_end;

	str_end = (char *)s + ft_strlen(s);
	while (str_end > s)
	{
		if (*str_end == (char)c)
			return (str_end);
		str_end--;
	}
	return (NULL);
}
