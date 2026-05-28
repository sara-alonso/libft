/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 00:32:13 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/28 20:27:12 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	int				diff;
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	diff = s1[i] - s2[i];
	return (diff);
}

/*#include <stdio.h>

int	main(void)
{
	int	i;

	i = ft_strncmp("Hola", "Hop", 3);
	printf("%d\n", i);
	return (0);
}
*/