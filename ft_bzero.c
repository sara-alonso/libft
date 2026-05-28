/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 21:20:49 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/28 22:40:15 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The  bzero()  function  erases  the  data  in the n bytes of the memory
 * starting at the location pointed to by s, by writing zeros (bytes  con‐
 * taining '\0') to that area.
 */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>
#include <string.h>

void	try_null(void)
{
	char	*str;

	str = NULL;
	printf("--- NULL pointer with size 0 ---\n");
	bzero(str, (0));
	printf("--- bzero(NULL, (0)); ---\n");
	ft_bzero(str, (0));
	printf("--- ft_bzero(NULL, (0)); ---\n");
	printf("--- NULL pointer with size 5 ---\n");
	ft_bzero(str, 5);
	printf("--- ft_bzero(NULL, 5); ---\n"); // Address boundary error
	ft_bzero(str, 5);
	printf("--- bzero(NULL, 5); ---\n"); // Address boundary error
}

void	try_normal(void)
{
	char	str1[10] = "123456789";
	char	str2[10] = "123456789";

	bzero(str1, 4);
	ft_bzero(str2, 4);
	printf("bzero: ");
	for (int i = 0; i < 6; i++)
	{
		printf("%c ", str1[i]);
	}
	printf("\n");
	printf("ft_bzero:    ");
	for (int i = 0; i < 6; i++)
	{
		printf("%c ", str2[i]);
	}
	printf("\n");
}

int	main(void)
{
	try_normal();
	try_null();
	return (0);
}
*/
