/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 01:42:02 by akigler           #+#    #+#             */
/*   Updated: 2019/09/24 13:02:04 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*loc;

	loc = NULL;
	while (*s)
	{
		if ((int)*s == c)
			loc = (char *)s;
		s++;
	}
	if (c == '\0')
		loc = ((char *)s);
	return (loc);
}
