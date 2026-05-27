/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 20:47:35 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 21:56:25 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == 0)
		return (p);
	ft_bzero(p, nmemb * size);
	return (p);
}
