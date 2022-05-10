/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcacoilo <mcacoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 04:20:41 by mcacoilo          #+#    #+#             */
/*   Updated: 2022/03/10 07:13:29 by mcacoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (b < i)
		{
			(*f)(b, s);
			s++;
			b++;
		}
	}
}
