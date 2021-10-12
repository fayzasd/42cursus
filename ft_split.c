/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasad <fasad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 12:51:42 by fasad             #+#    #+#             */
/*   Updated: 2021/10/11 12:40:44 by fasad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(char *s, char c)
{
	int	i;
	int	k;
	int	count;

	i = 0;
	k = 0;
	count = 0;
	while (k < (int)ft_strlen(s))
	{
		if (s[k] != c)
		{
			count++;
			while (s[k] != c && k < (int)ft_strlen(s))
				k++;
		}
		k++;
	}
	return (count);
}

static char	**ft_free(char **str, int j)
{
	while (str[j])
	{
		free(str[j]);
		j--;
	}
	return (str);
}

static char	**value_check(char **str, int j)
{
	if (str[j] == NULL)
		str = ft_free(str, j);
	return (str);
}

static int	split(char **str, char *s, char c, int i)
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			count++;
		if ((s[i] == c && s[i - 1] != c))
		{
			str[j++] = ft_substr(s, (i - count), count);
			str = value_check(str, j);
			count = 0;
		}
		if (i == ((int)ft_strlen((char *)s) - 1) && s[i] != c)
		{	
			str[j++] = ft_substr(s, ((i + 1) - count), count);
			str = value_check(str, j);
			count = 0;
		}
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s)
		return (ft_calloc(1, 1));
	str = malloc(sizeof(char *) * count_len((char *)s, c) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] == c && c)
		i++;
	j = split(str, (char *)s, c, i);
	str[j] = NULL;
	return (str);
}
