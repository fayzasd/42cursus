/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fasad <fasad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:26:11 by fasad             #+#    #+#             */
/*   Updated: 2021/10/09 14:41:47 by fasad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(int n, int i)
{
	int	t;

	t = n;
	while (t > 0)
	{
		t /= 10;
		i++;
	}
	return (i);
}

static char	*nbr_check(int n)
{
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	else
		return (NULL);
}

static char	*str_assign(char *str, int n, int i)
{	
	int	t;

	t = i;
	while (n > 0)
	{
		str[--i] = (n % 10) + 48;
		n /= 10;
	}
	str[t] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		flag;
	int		i;

	i = 0;
	flag = 0;
	if (nbr_check(n) != NULL)
		return (ft_strdup(nbr_check(n)));
	if (n < 0)
	{
		n = n * -1;
		flag++;
		i++;
	}
	i = nbr_len(n, i);
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	if (flag == 1)
		str[0] = '-';
	str = str_assign(str, n, i);
	return (str);
}
