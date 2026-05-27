/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 20:59:48 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 21:06:47 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*r;

	len = ft_strlen(s);
	i = 0;
	r = malloc(len * sizeof(char));
	while (i < len)
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
