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
	const char *f = s2;
	const char *temp = ft_strchr(s1, f[0]);
	size_t ff = len;
    size_t fofo = 0;
	while (*temp)
	{
        if (*temp != *f)
            {
                temp = ft_strchr(s1, f[0]);
                fofo = 0;
            }
        fofo++;
        temp++;
        f++;
	}
    if (fofo == len)
        return 
}