/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcacoilo <mcacoilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:23:38 by mcacoilo          #+#    #+#             */
/*   Updated: 2022/03/07 10:46:54 by mcacoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char *str);

int	ft_atoi(const char *str)
{
	int	m;
	int	n;
	int	c;

	m = ft_isspace((char *)str);
	n = 1;
	c = 0;
	if (str[m] == '-')
		n = -1;
	if (str[m] == '+' || str[m] == '-')
		m++;
	while (str[m] >= '0' && str[m] <= '9')
	{
		c = (str[m] - '0') + (c * 10);
		m++;
	}
	return (c * n);
}

static int	ft_isspace(char *str)
{
	int	m;

	m = 0;
	while (str[m] == '\t' || str[m] == '\r' || str[m] == ' '
		|| str[m] == '\n' || str[m] == '\v' || str[m] == '\f')
		m++;
	return (m);
}
