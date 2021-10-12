/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasad <fasad@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:47:18 by fasad             #+#    #+#             */
/*   Updated: 2021/10/09 15:35:26 by fasad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{	
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)str + i) = (unsigned char)c;
		i++;
	}
	return (str);
}
