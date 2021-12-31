/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiller <lseiller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:07:31 by lseiller          #+#    #+#             */
/*   Updated: 2021/12/16 17:42:44 by lseiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp_lst;

	if (!lst)
		return (NULL);
	while (lst)
	{
		tmp_lst = lst;
		lst = lst->next;
	}
	return (tmp_lst);
}
