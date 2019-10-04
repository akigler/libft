/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 12:30:34 by akigler           #+#    #+#             */
/*   Updated: 2019/10/03 03:35:11 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(ptr = (char *)malloc((ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		ptr[i] = (f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
