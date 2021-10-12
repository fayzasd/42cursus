/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasad <fasad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:36:20 by fasad             #+#    #+#             */
/*   Updated: 2021/10/09 14:48:01 by fasad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = n;
	if (d == s || !n)
		return (d);
	if (d > s)
	{
		while (n > 0)
		{
			*((char *)d + n - 1) = *((char *)s + n - 1);
			n--;
		}
	}
	else
	{	
		while (i < j)
		{
			*((char *)d + i) = *((char *)s + i);
			i++;
		}
	}
	return (d);
}
