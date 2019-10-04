/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 15:02:02 by akigler           #+#    #+#             */
/*   Updated: 2019/09/24 13:14:22 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, char *src, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[j])
		j++;
	while (src[i] && i < len)
	{
		dst[j + i] = src[i];
		i++;
	}
	if (dst[j + i] != '\0')
		dst[j + i] = '\0';
	return (dst);
}
