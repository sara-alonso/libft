/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 12:17:42 by marvin            #+#    #+#             */
/*   Updated: 2026/06/05 12:17:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_lstiter(t_list *lst, void (*f)(void *)){
    t_list *aux;
    
    aux = lst;
    while (aux)
    {
        f((aux->content);
        aux = aux->next;
    }
}
