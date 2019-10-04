/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 01:52:43 by akigler           #+#    #+#             */
/*   Updated: 2019/10/03 03:35:41 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	letter;

	s = (unsigned char *)b;
	letter = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		s[i] = letter;
		i++;
	}
	return (s);
}
