/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcacoilo <mcacoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 03:53:45 by mcacoilo          #+#    #+#             */
/*   Updated: 2022/03/04 04:06:47 by mcacoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_steckeck(char c, const char *set)
{
	int	m;

	m = 0;
	while (set[m])
	{
		if (set[m++] == c)
		{
			return (1);
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		m;

	m = 0;
	start = 0;
	if (s1 == 0 || set == 0)
		return (0);
	end = (int)ft_strlen(s1);
	while (s1[start] && ft_steckeck(s1[start], set))
		start++;
	while (end > start && ft_steckeck(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (0);
	while (start < end)
	{
		str[m] = s1[start];
		m++;
		start++;
	}
	str[m] = '\0';
	return (str);
}
