/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasad <fasad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:03:23 by fasad             #+#    #+#             */
/*   Updated: 2021/10/10 13:09:21 by fasad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	s_len;
	size_t	d_len;
	size_t	j;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	j = d_len;
	if (siz == 0)
		d_len = s_len;
	if (siz > d_len)
		d_len += s_len;
	else
		d_len = siz + s_len;
	while (*dst)
		dst++;
	while (*src && (j + 1 < siz))
	{
		*dst = *src;
		j++;
		dst++;
		src++;
	}
	*dst = '\0';
	return (d_len);
}
