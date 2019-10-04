/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 20:46:40 by akigler           #+#    #+#             */
/*   Updated: 2019/10/03 16:29:28 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	len;
	char	*s2;

	len = ft_strlen(s1);
	len = (n > len) ? len : n;
	if (!(s2 = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (s1 == NULL)
		return (NULL);
	ft_strncpy(s2, (char *)s1, len);
	s2[len] = '\0';
	return (s2);
}
