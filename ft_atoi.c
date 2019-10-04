/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:39:13 by akigler           #+#    #+#             */
/*   Updated: 2019/09/24 12:50:13 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	num;
	long	neg;
	long	count;

	num = 0;
	neg = 1;
	count = 0;
	while (str[count] == ' ' || str[count] == '\n' || str[count] == '\t' ||
		str[count] == '\v' || str[count] == '\f' || str[count] == '\r')
	{
		count++;
	}
	if (str[count] == '-')
		neg = -1;
	if (str[count] == '-' || str[count] == '+')
		count++;
	while (ft_isdigit(str[count]))
	{
		num = (num * 10) + (str[count] - '0');
		count++;
	}
	return ((num * neg));
}
