/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   w_counter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 02:29:34 by akigler           #+#    #+#             */
/*   Updated: 2019/10/04 14:33:18 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		w_counter(char const *s, char c)
{
	int		w_count;

	RET_IF(!s, -1);
	w_count = 0;
	if (*s != c && *s)
	{
		w_count++;
		s++;
	}
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != c && *s)
				w_count++;
		}
		s++;
	}
	return (w_count);
}
