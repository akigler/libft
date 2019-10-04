/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:13:23 by akigler           #+#    #+#             */
/*   Updated: 2019/10/03 03:52:28 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			i;
	char		*s2;

	i = ft_strlen(s1);
	if (!(s2 = (char *)malloc((i + 1) * sizeof(char))))
		return (NULL);
	if (s1 == NULL)
		return (NULL);
	ft_strcpy(s2, (char *)s1);
	return (s2);
}
