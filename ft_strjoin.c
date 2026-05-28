/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 19:03:58 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/28 22:11:51 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Reserva memoria (con malloc(3)) y devuelve una
nueva cadena de caracteres, formada por la
concatenación de ‘s1’ y ‘s2’*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_len;
	char	*joined;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(char) * (total_len + 1));
	i = 0;
	if (joined == NULL)
		return (NULL);
	while (*s1)
	{
		joined[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		joined[i] = *s2;
		i++;
		s2++;
	}
	joined[i] = '\0';
	return (joined);
}
