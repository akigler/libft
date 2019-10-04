/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:40:38 by akigler           #+#    #+#             */
/*   Updated: 2019/09/24 12:55:43 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
		return (char *)haystack;
	while (*haystack)
	{
		h = (char *)haystack;
		n = (char *)needle;
		while (*n && *n == *h)
		{
			n++;
			h++;
		}
		if (*n == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
