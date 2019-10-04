/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akigler <akigler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 19:45:46 by akigler           #+#    #+#             */
/*   Updated: 2019/10/04 16:48:55 by akigler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_itoa(int nbr)
// {
// 	long		n;
// 	size_t		len;
// 	char		*str;

// 	n = nbr;
// 	len = (n > 0) ? 0 : 1;
// 	n = (n > 0) ? n : -n;
// 	while (nbr)
// 		nbr = len++ ? nbr / 10 : nbr / 10;
// 	if (!(str = (char *)malloc(sizeof(str) * (len + 1))))
// 		return (NULL);
// 	*(str + len--) = '\0';
// 	while (n > 0)
// 	{
// 		*(str + len--) = n % 10 + '0';
// 		n /= 10;
// 	}
// 	if (len == 0 && str[1] == '\0')
// 		*(str + len) = '0';
// 	if (len == 0 && str[1] != '\0')
// 		*(str + len) = '-';
// 	return (str);
// }
static int		get_nb_size(unsigned int nb)
{
	unsigned int	size;

	size = 0;
	while (nb >= 10)
	{
		nb /= 10;
		++size;
	}
	return (size + 1);
}

char			*ft_itoa(int nbr)
{
	char			*str;
	unsigned int	nb;
	unsigned int	index;
	unsigned int	size;

	if (nbr < 0)
		nb = (unsigned int)(nbr * -1);
	else
		nb = (unsigned int)nbr;
	size = (unsigned int)get_nb_size(nb);
	index = 0;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1 + (nbr < 0 ? 1 : 0)))))
		return (0);
	if (nbr < 0 && (str[index] = '-'))
		size++;
	index = size - 1;
	while (nb >= 10)
	{
		str[index--] = (char)(nb % 10 + 48);
		nb /= 10;
	}
	str[index] = (char)(nb % 10 + 48);
	str[size] = '\0';
	return (str);
}