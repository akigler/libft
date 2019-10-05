/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:08:03 by akigler           #+#    #+#             */
/*   Updated: 2019/10/04 17:09:33 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char		*s3;
// 	size_t		i;
// 	size_t		j;

// 	i = 0;
// 	j = 0;
// 	if (!s1 || !s2)
// 		return (NULL);
// 	if (!(s3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
// 		return (NULL);
// 	while (i < (ft_strlen(s1)))
// 	{
// 		s3[i] = s1[i];
// 		i++;
// 	}
// 	while (j < (ft_strlen(s2)))
// 	{
// 		s3[i + j] = s2[j];
// 		j++;
// 	}
// 	s3[i + j] = '\0';
// 	return (s3);
// }
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	size;

	if (s1 && s2)
		size = (size_t)(ft_strlen((char*)s1) + ft_strlen((char*)s2));
	else if (s1)
		size = (size_t)(ft_strlen((char*)s1));
	else if (s2)
		size = (size_t)(ft_strlen((char*)s2));
	else
		return (NULL);
	if (!(result = ft_memalloc(size)))
		return (NULL);
	if (s1)
		result = ft_strcpy(result, (char*)s1);
	else
		result = ft_strcpy(result, (char*)s2);
	if (s1 && s2)
		result = ft_strcat(result, (char*)s2);
	return (result);
}