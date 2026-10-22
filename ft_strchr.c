/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:49:54 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/21 21:06:37 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*f;

	f = s;
	while (*f)
	{
		if (*f == (char)c)
			return ((char *)f);
		f++;
	}
	if (*f == (char *)c)
		return ((char *)f);
	return (NULL);
}
