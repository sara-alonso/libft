/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 01:01:24 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 01:03:16 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;
	int				j;

	j = 0;
	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (big[i] == little[j] && big[i] && i < len)
		{
			i++;
			j++;
		}
		if (!little[j])
			return ((char *)&big[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}
