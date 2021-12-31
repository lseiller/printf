/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiller <lseiller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 13:03:46 by lseiller          #+#    #+#             */
/*   Updated: 2021/12/29 20:41:47 by lseiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex_fd(unsigned long int v_to_p, const char f, int fd, int is_un)
{
	const char		base_l[] = "0123456789abcdef";
	const char		base_u[] = "0123456789ABCDEF";
	int				char_print;

	if (is_un == 0)
	{
		if (f == 'x')
			char_print = ft_putnbr_base_fd((long) v_to_p, (char *) base_l, fd);
		else
			char_print = ft_putnbr_base_fd((long) v_to_p, (char *) base_u, fd);
	}
	else
	{
		if (f == 'x')
			char_print = ft_putnbr_base_un_fd(v_to_p, (char *) base_l, fd);
		else
			char_print = ft_putnbr_base_un_fd(v_to_p, (char *) base_u, fd);
	}
	return (char_print);
}
