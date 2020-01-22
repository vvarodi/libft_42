/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 12:36:27 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/21 13:10:17 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;
    
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (!dst && !src)
        return (dst);
    if (src < dst)
        while (len--)
            d[len] = s[len];
    else 
        while (len--)
            *d++ = *s++;
    return (dst);
}