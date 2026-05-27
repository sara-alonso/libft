/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 20:48:54 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 22:45:04 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*#include <ctype.h>
#include <stdio.h>

void	try_null(void)
{
	printf("ft_isdigit(0) \n");
	printf("%d", ft_isdigit(0));
	printf("\n");
	printf("isdigit(0) \n");
	printf("%d", isdigit(0));
	printf("\n");
}

void	try_normal(void)
{
	printf("ft_isdigit(50) \n");
	printf("%d", ft_isdigit(50));
	printf("\n");
	printf("isdigit(50) \n");
	printf("%d", isdigit(50));
	printf("\n");
	printf("ft_isdigit(100) \n");
	printf("%d", isdigit(100));
	printf("\n");
	printf("isdigit(100) \n");
	printf("%d", isdigit(100));
	printf("\n");
}

int	main(void)
{
	try_normal();
	try_null();
	return (0);
}
*/