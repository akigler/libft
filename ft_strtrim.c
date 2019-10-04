/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:24:49 by akigler           #+#    #+#             */
/*   Updated: 2019/10/04 14:23:41 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define L l-1

char	*ft_strtrim(char const *s)
{
	char	*s1;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	IF_NULL(!s);
	l = ft_strlen(s);
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (s[L] && (s[L] == ' ' || s[L] == '\n' || s[L] == '\t'))
		l--;
	IF_NULL(!(s1 = (char *)malloc((sizeof(char) * (l + 1)))));
	while (i < l)
	{
		s1[j] = s[i];
		i++;
		j++;
	}
	s1[j] = '\0';
	return (s1);
}
