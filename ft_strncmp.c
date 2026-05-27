/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 00:32:13 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 22:33:29 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	unsigned int	i;

	i = 1;
	diff = 0;
	if (n == 0)
		return (0);
	while (*s1 && *s1 == *s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	diff = *s1 - *s2;
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