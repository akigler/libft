/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:39:44 by akigler           #+#    #+#             */
/*   Updated: 2019/09/24 12:53:17 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int						i;
	const unsigned char		*p1;
	const unsigned char		*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (p1[i] && p2[i])
	{
		if (!(p1[i] == p2[i]))
			return (p1[i] - p2[i]);
		i++;
	}
	return (p1[i] - p2[i]);
}
