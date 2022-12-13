/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:13:35 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/13 12:24:18 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(unsigned int u, int *tot_len)
{
	if (u >= 10)
		ft_print_hexa(u / 10, tot_len);
	ft_print_char(u % 10 + '0', tot_len);
}