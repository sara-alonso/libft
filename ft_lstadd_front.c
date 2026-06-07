/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salonso- <salonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:28:30 by salonso-          #+#    #+#             */
/*   Updated: 2026/06/04 20:48:43 by salonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	char *str = malloc(sizeof(char) * 12);
	strcpy(str, "Hello World");
	t_list *list = ft_lstnew(str);
	char *str1 = malloc(sizeof(char) * 14);
	strcpy(str1, "To All Cursus");
	ft_lstadd_front(&list, ft_lstnew(str1));
	return (0);
}