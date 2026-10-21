/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:54:10 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/21 01:35:11 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				ff;
	const unsigned char	*f;
	unsigned char		*mdre;

	mdre = (unsigned char *)dest;
	f = (const unsigned char *)src;
	ff = n;
	if (dest == src)
		return (dest);
	while (ff-- && f)
	{
		*mdre = *f;
		f++;
		mdre++;
	}
	return (dest);
}
