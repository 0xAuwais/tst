/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalbahra <oalbahra@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:09:32 by oalbahra          #+#    #+#             */
/*   Updated: 2026/10/21 20:22:43 by oalbahra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *nptr)
{
	const char *f = nptr;
	int ans = 0;
	int ff = 1;
	while ((*f == ' '|| *f=='\t'||*f=='\n'||*f=='\v' ||*f=='\f' ||*f=='\r'))
		{f++;}

		if(*f == '-'){ff = -1;f++;}
		else if(*f == '+'){f++;}
		
	while(*f)
	{
		if(!ft_isdigit(*f)){
			return (ans);
		}
		ans = ((ans*10 )+ ((*f - '0'))*ff);
		f++;
	}
	return ans;
}