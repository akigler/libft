/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 13:40:04 by akigler           #+#    #+#             */
/*   Updated: 2019/09/24 15:58:07 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (*src && i < len)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	while (i < len)
	{
		*dst = '\0';
		i++;
		dst++;
	}
	return (dst - i);
}
