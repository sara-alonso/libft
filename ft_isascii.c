/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 20:58:06 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/27 22:32:25 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include <ctype.h>
#include <stdio.h>

void	try_null(void)
{
	printf("ft_isascii(0) \n");
	printf("%d", ft_isascii(0));
	printf("\n");
	printf("isascii(0) \n");
	printf("%d", isascii(0));
	printf("\n");
}

void	try_normal(void)
{
	printf("ft_isascii(130) \n");
	printf("%d", ft_isascii(130));
	printf("\n");
	printf("isascii(130) \n");
	printf("%d", isascii(130));
	printf("\n");
	printf("ft_isascii(100) \n");
	printf("%d", isascii(100));
	printf("\n");
	printf("isascii(100) \n");
	printf("%d", isascii(100));
	printf("\n");
}

int	main(void)
{
	try_normal();
	try_null();
	return (0);
}
*/
