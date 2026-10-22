/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:09:32 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/21 20:22:43 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	auwais(char *s, int f, int i)
{
	if (ft_isdigit(*s))
	{
		f = (*s - '0');
		s++;
	}
	else
		return (0);
	while ((ft_isdigit(*s) && *s) || *s == ' ')
	{
		if (*s == ' ')
		{
			s++;
			continue ;
		}
		f *= 10;
		f += (*s - '0');
		s++;
	}
	f *= i;
	return (f);
}

static int	is(char *c, int i, int f, char *s)
{
	while (*c)
	{
		if ((*c) == '-')
		{
			i *= -1;
		}
		else if (*c == '+')
			i *= +1;
		else if (*c == ' ')
		{
			c++;
			continue ;
		}
		else
			break ;
		c++;
	}
	s = c;
	f = auwais(s, f, i);
	return (f);
}

int	ft_atoi(char *str)
{
	int		f;
	int		i;
	char	*c;
	char	*s;

	c = str;
	s = str;
	f = 0;
	i = 1;
	f = is(c, i, f, s);
	return (f);
}