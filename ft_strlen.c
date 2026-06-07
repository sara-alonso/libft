/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 03:58:25 by salonso-          #+#    #+#             */
/*   Updated: 2026/06/04 21:04:20 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD

size_t ft_strlen(const char *s)
=======
#include <stddef.h>

size_t	ft_strlen(const char *str)
>>>>>>> baca5c9 (adding missing files from list functions)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
