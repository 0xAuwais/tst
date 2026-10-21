/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:08:56 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/21 21:04:53 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*f = (unsigned char *)s;
	size_t				fofo;

	fofo = n;
	while (fofo--)
	{
		if (*f == (unsigned char)c)
			return ((void *)f);
		f++;
	}
	return (NULL);
}
