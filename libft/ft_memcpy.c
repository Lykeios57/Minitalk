/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcacoilo <mcacoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:56:21 by mcacoilo          #+#    #+#             */
/*   Updated: 2022/03/02 22:11:26 by mcacoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	m;

	m = 0;
	if (!dest && !src)
		return (NULL);
	while (m < size)
	{
		((unsigned char *)dest)[m] = ((unsigned char *)src)[m];
		m++;
	}
	return (dest);
}
