/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 23:45:06 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 00:30:25 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	s_len;
	int	i;

	s_len = ft_strlen(s);
	i = s_len;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
	}
	return (0);
}
