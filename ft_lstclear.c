/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 11:39:02 by marvin            #+#    #+#             */
/*   Updated: 2026/06/05 11:39:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*)){
    t_list* aux;

    
    while(*lst){
        aux = *lst->next;

        ft_lstdelone(*lst, del);
        *lst++;

        *lst = tmp;
    }
    free(*lst);
    *lst = NULL;
}