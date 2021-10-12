/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasad <fasad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:37:29 by fasad             #+#    #+#             */
/*   Updated: 2021/10/09 14:46:52 by fasad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_check(char const *s, unsigned int start, size_t len)
{
	size_t	count;

	count = 0;
	if (((int)ft_strlen(s) - (int)start) > (int)len)
		count = len;
	else if (start > ft_strlen(s))
		count = 0;
	else
		count = ft_strlen(s) - start;
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	count;

	i = 0;
	if (!s)
		return (NULL);
	count = count_check(s, start, len);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	if (start < ft_strlen(s))
	{	
		while (s[start] != '\0' && i < count)
		{
			str[i] = s[start];
			i++;
			start++;
		}
	}
	str[i] = '\0';
	return (str);
}
