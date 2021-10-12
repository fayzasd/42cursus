/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasad <fasad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:33:52 by fasad             #+#    #+#             */
/*   Updated: 2021/10/10 15:12:27 by fasad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (0);
}
