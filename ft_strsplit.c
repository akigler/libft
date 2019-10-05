/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:13:04 by akigler           #+#    #+#             */
/*   Updated: 2019/10/04 17:13:17 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	**ft_strsplit(char const *s, char c)
// {
// 	int		i;
// 	int		j;
// 	int		w_count;
// 	char	**words;

// 	i = 0;
// 	j = 0;
// 	w_count = w_counter(s, c);
// 	IF_NULL(!s || !(words = (char **)malloc(sizeof(*words) * (w_count + 1))));
// 	while (*s)
// 	{
// 		while (*s == c && *s)
// 			s++;
// 		if (*s != c && *s)
// 		{
// 			if (!(words[i] = (char *)malloc(sizeof(char) * (w_lens(s, c) + 1))))
// 				return (NULL);
// 			while (*s && *s != c)
// 				words[i][j++] = (char)*s++;
// 			words[i++][j] = '\0';
// 			j = 0;
// 		}
// 	}
// 	words[i] = NULL;
// 	return (words);
// }
char	**ft_strsplit(char const *s, char c)
{
	char	*charset;

	if (!s || !c)
		return (NULL);
	if (!(charset = ft_strnew(2)))
		return (NULL);
	charset[0] = c;
	return (ft_strsplitchrset((char*)s, charset));
}