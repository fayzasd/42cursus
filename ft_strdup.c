/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasad <fasad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:30:42 by fasad             #+#    #+#             */
/*   Updated: 2021/10/09 14:45:08 by fasad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s1;
	char	*s2;
	int		j;
	int		k;

	s1 = (char *)str;
	j = 0;
	k = 0;
	s2 = (char *)malloc((ft_strlen((char *)str)) * sizeof(char) + 1);
	if (s2 == NULL)
		return (NULL);
	while (s1[k] != '\0')
	{
		s2[j] = s1[k];
		j++;
		k++;
	}
	s2[k] = '\0';
	return (s2);
}
