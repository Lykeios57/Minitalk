/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcacoilo <mcacoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:24:25 by mcacoilo          #+#    #+#             */
/*   Updated: 2022/03/07 10:33:55 by mcacoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	p;
	char			*m;

	if (!s)
		return (NULL);
	p = ft_strlen(s);
	if (p < start)
	{
		m = malloc(sizeof(char) * 1);
		if (!m)
			return (NULL);
		m[0] = '\0';
		return (m);
	}
	m = malloc(sizeof(char) * (len + 1));
	if (!m)
		return (NULL);
	i = 0;
	while (i < len)
		m[i++] = s[start++];
	m[i] = '\0';
	return (m);
}
