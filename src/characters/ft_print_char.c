/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:44:39 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/11 14:50:28 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

void	ft_print_char(char c, int *tot_len)
{
	write(1, &c, 1);
	(*tot_len)++;
}

void	ft_print_str(char *str, int *tot_len)
{
	size_t	i;

	if (!str)
	{
		(*tot_len) = 0;
		return ;
	}
	i = 0;
	while (str[i])
	{
		ft_print_char(str[i], tot_len);
		++i;
	}
}