/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 20:47:35 by salonso-          #+#    #+#             */
/*   Updated: 2026/05/28 21:38:23 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* function allocates memory for an array of  nmemb  elements
	of  size bytes each and returns a pointer to the allocated memory.  The
	memory is set to zero.  If nmemb or size is 0,  then  calloc()  returns
	either  NULL,  or a unique pointer value that can later be successfully
	passed to free().  If the multiplication of nmemb and size would result
	in  integer  overflow, then calloc() returns an error.  By contrast, an
	integer overflow would not be detected in the following  call  to  mal‐
	loc(),  with the result that an incorrectly sized block of memory would
	be allocated:

	malloc(nmemb * size);
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	if (size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (p);
	ft_bzero(p, nmemb * size);
	return (p);
}

int	main(void)
{
}
