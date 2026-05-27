/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 23:29:01 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/26 23:37:37 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s;

	s = "ugutygu";
	printf("%p\n", strchr(s, 0));
	printf("%p\n", ft_strchr(s, 0));
	return (0);
}*/
