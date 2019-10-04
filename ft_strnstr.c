/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:40:34 by akigler           #+#    #+#             */
/*   Updated: 2019/10/04 11:54:22 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return (char *)haystack;
	while (*haystack && len > 0)
	{
		h = (char *)haystack;
		n = (char *)needle;
		i = len;
		while (*n && *n == *h && i--)
		{
			n++;
			h++;
		}
		if (*n == '\0')
			return ((char *)haystack);
		haystack++;
		--len;
	}
	return (NULL);
}
