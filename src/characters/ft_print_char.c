/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:44:39 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/11 14:48:15 by baalbade         ###   ########.fr       */
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
	int	i;

	i = 0;
	while (str[i])
		++i;
	write(1, str, i);
	tot_len += i;
}