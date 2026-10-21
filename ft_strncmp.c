/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:07:48 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/21 19:49:44 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*f;
	const char	*ff;
	size_t		fofo;

	f = s1;
	ff = s2;
	fofo = n;
	while (fofo--)
	{
		if (!*f && !*ff)
			return (0);
		if (*f != *ff)
			return ((unsigned char)*f - (unsigned char)*ff);
		f++;
		ff++;
	}
	return (0);
}
