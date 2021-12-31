/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiller <lseiller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:24:46 by lseiller          #+#    #+#             */
/*   Updated: 2021/12/17 15:48:16 by lseiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_list;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp_list = *lst;
		*lst = (*lst)->next;
		if (del)
			del(tmp_list->content);
		free(tmp_list);
	}
	*lst = NULL;
}
