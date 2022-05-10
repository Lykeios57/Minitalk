/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcacoilo <mcacoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:59:22 by mcacoilo          #+#    #+#             */
/*   Updated: 2022/03/02 21:05:57 by mcacoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	m;
	size_t	c;

	m = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[m] != '\0')
	{
		c = 0;
		while (haystack[m + c] == needle[c] && (m + c) < len)
		{
			if (haystack[m + c] == '\0' && needle[c] == '\0')
				return ((char *)&haystack[m]);
				c++;
		}
		if (needle[c] == '\0')
			return ((char *)haystack + m);
		m++;
	}
	return (0);
}
