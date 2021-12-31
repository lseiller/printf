/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_un_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiller <lseiller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:33:59 by lseiller          #+#    #+#             */
/*   Updated: 2021/12/29 20:40:48 by lseiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base_un_fd(unsigned long int nbr, char *base, int fd)
{
	int	char_printed;

	char_printed = 0;
	if (nbr >= ft_strlen(base))
		char_printed += ft_putnbr_base_un_fd((nbr / ft_strlen(base)), base, fd);
	char_printed += ft_putchar_fd(base[nbr % ft_strlen(base)], fd);
	return (char_printed);
}
