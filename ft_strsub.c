/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 13:01:09 by akigler           #+#    #+#             */
/*   Updated: 2019/10/03 18:49:27 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		start1;
	char		*s1;

	i = 0;
	start1 = (size_t)(start);
	if (!s)
		return (NULL);
	if (!(s1 = (char *)malloc(len + 1)))
		return (NULL);
	s1 = ft_strncpy(s1, (char*)s + start, len);
	s1[len] = '\0';
	return (s1);
}
