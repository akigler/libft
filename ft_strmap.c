/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 00:32:04 by akigler           #+#    #+#             */
/*   Updated: 2019/10/03 03:40:22 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ptr;

	i = 0;
	if (!f || !s)
		return (NULL);
	if (!(ptr = ft_memalloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[i])
	{
		ptr[i] = (f)(s[i]);
		i++;
	}
	return (ptr);
}
