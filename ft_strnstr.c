/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasad <fasad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:10:34 by fasad             #+#    #+#             */
/*   Updated: 2021/10/09 14:50:41 by fasad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	count;

	count = 0;
	j = 0;
	i = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && count < len)
	{
		j = 0;
		while (to_find[j] == str[i + j] && ((count + j) < len))
		{
			if (to_find[j + 1] == '\0')
				return ((char *)(str + i));
			j++;
		}
		i++;
		count++;
	}
	return (NULL);
}
