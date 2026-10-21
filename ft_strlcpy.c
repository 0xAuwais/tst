/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:57:23 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/21 18:48:29 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	f;
	size_t	ff;

	f = ft_strlen(src);
	ff = size;
	if (ff == 0)
		return (f);
	ff--;
	while (*src && ff--)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (f);
}
