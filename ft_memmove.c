/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:32:17 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/21 01:15:06 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*tmp;
	size_t			f;
	size_t			i;

	temp = (unsigned char *)dest;
	tmp = (unsigned char *)src;
	f = n;
	if (!dest && !src)
		return (NULL);
	if (temp > tmp)
	{
		i = f - 1;
		while (f--)
		{
			temp[i] = tmp[i];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
