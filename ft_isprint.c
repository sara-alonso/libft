/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:01:46 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 22:53:08 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*#include <ctype.h>
#include <stdio.h>

void	try_null(void)
{
	printf("ft_isprint(0) \n");
	printf("%d", ft_isprint(0));
	printf("\n");
	printf("isprint(0) \n");
	printf("%d", isprint(0));
	printf("\n");
}

void	try_normal(void)
{
	printf("ft_isprint(50) \n");
	printf("%d", ft_isprint(50));
	printf("\n");
	printf("isprint(50) \n");
	printf("%d", isprint(50));
	printf("\n");
	printf("ft_isprint(100) \n");
	printf("%d", isprint(127));
	printf("\n");
	printf("isprint(100) \n");
	printf("%d", isprint(127));
	printf("\n");
}

int	main(void)
{
	try_normal();
	try_null();
	return (0);
}*/