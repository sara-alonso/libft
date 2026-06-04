/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:40:57 by marvin            #+#    #+#             */
/*   Updated: 2026/06/04 12:40:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	
char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *r;
    int len;

    len = ft_strlen(s);
    res = malloc((len + 1) * sizeof(char));
	if (!r)
        return (NULL);
	i = 0;
	while (i < len)
	{
	    res[i] = (*f)(i, s[i]);
	    i++;
	}
	res[i] = '\0';
	return (r);
}