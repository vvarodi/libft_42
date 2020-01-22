/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 10:55:18 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/21 13:01:00 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (!dst && !src)
        return (dst);
    while (n--)
        *d++ = *s++;
    return (dst);
}
