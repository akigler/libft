/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:39:29 by akigler           #+#    #+#             */
/*   Updated: 2019/09/24 12:45:03 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
