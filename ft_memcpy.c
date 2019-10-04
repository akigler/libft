/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 21:00:32 by akigler           #+#    #+#             */
/*   Updated: 2019/10/03 16:13:26 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	if (!n || src == dst)
		return (dst);
	d = dst;
	s = src;
	i = 0;
	while (i < n)
	{
		*d = *s;
		i++;
		s++;
		d++;
	}
	return (dst);
}
