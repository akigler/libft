/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:02:29 by akigler           #+#    #+#             */
/*   Updated: 2019/09/24 13:17:42 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, char *src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[j])
		j++;
	while (src[i])
	{
		dst[j + i] = src[i];
		i++;
	}
	if (dst[j + i] != '\0')
		dst[j + i] = '\0';
	return (dst);
}
