/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 20:52:38 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 22:16:59 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*#include <ctype.h>
#include <stdio.h>

void	try_null(void)
{
	printf("ft_isalnum(0) \n");
	printf("%d", ft_isalnum(0));
	printf("\n");
	printf("isalnum(0) \n");
	printf("%d", isalnum(0));
	printf("\n");
}

void	try_normal(void)
{
	printf("ft_isalnum(3) \n");
	printf("%d", ft_isalnum(3));
	printf("\n");
	printf("isalnum(3) \n");
	printf("%d", isalnum(3));
	printf("\n");
	printf("ft_isalnum(56) \n");
	printf("%d", isalnum(56));
	printf("\n");
	printf("isalnum(56) \n");
	printf("%d", isalnum(56));
	printf("\n");
}

int	main(void)
{
	try_normal();
	try_null();
	return (0);
}
*/