/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:09:11 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/21 20:22:19 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
        const unsigned char     *f;
        const unsigned char     *ff;
        size_t                          fofo;

        f = s1;
        ff = s2;
        fofo = n;
        while (fofo--)
        {
                if (*f != *ff)
                        return (*f - *ff);
                f++;
                ff++;
        }
        return (0);
}
