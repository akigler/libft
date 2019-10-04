/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:39:53 by akigler           #+#    #+#             */
/*   Updated: 2019/10/04 11:37:19 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long			i;
	const unsigned char		*p1;
	const unsigned char		*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && p1[i] && p2[i])
	{
		if (!(p1[i] == p2[i]))
			return (p1[i] - p2[i]);
		i++;
	}
	return (p1[i] - p2[i]);
}
