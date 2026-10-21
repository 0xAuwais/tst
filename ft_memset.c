/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:08:45 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/19 17:00:03 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			f;
	unsigned char	*ff;

	f = n;
	ff = (unsigned char *)s;
	while (f--)
	{
		*ff = c;
		ff++;
	}
	return (s);
}
