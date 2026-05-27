/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 20:42:24 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 22:52:32 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>

void	try_null(void)
{
	printf("ft_isalpha(0) \n");
	printf("%d", ft_isalpha(0));
	printf("\n");
	printf("isalpha(0) \n");
	printf("%d", isalpha(0));
	printf("\n");
}

void	try_normal(void)
{
	printf("ft_isalpha(3) \n");
	printf("%d", ft_isalpha(3));
	printf("\n");
	printf("isalpha(3) \n");
	printf("%d", isalpha(3));
	printf("\n");
	printf("ft_isalpha(100) \n");
	printf("%d", isalpha(100));
	printf("\n");
	printf("isalpha(100) \n");
	printf("%d", isalpha(100));
	printf("\n");
}

int	main(void)
{
	try_normal();
	try_null();
	return (0);
}
*/