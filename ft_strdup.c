/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:10:15 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/21 19:10:15 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t f = ft_strlen(s);
    char *ff = malloc(f+1);
    if (ff == NULL)
        return NULL;
    ft_strlcpy(ff, s, f+1);
    return ff;
}