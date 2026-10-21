/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:50:17 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/21 19:06:19 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*f;
	size_t		ff;

	f = s;
	ff = ft_strlen(s);
	f += ff;
	while (ff--)
	{
		if (*f == (char)c)
			return ((char *)f);
		f--;
	}
	if (*f == (char)c)
		return ((char *)f);
	return (NULL);
}
