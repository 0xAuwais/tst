/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:09:25 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/22 00:37:10 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	const char	*f;
	const char	*temp;
	const char	*mdre;
	if (!*s2)
		return ((char *)s1);
	f = s2;
	mdre = ft_strchr(s1, f[0]);
	temp = mdre;
	while (temp && *f && (size_t)(temp - s1) < len)
	{
		if (*temp != *f)
		{
			mdre = ft_strchr(mdre + 1, s2[0]);
			temp = mdre;
			f = s2;
		}
		else
		{
			temp++;
			f++;
		}
	}
	if (!*f)
		return ((char *)mdre);
	return (NULL);
}