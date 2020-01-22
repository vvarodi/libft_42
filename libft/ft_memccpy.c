/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 11:11:52 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/21 12:22:11 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    size_t         i;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    i = 0;
    if (!dst && !src)
        return (dst);
    while (n--)
    {
        d[i] = s[i];
        if (s[i] == (unsigned char)c)
            return (dst + i + 1);
        i++;
    }
    return (NULL);   
}