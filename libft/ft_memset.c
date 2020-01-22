/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <vvarodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 00:53:15 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/21 02:04:20 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t len)
{
    unsigned char *str;
    
    str = (unsigned char *)s;
    while (len--)
        *str++ = (unsigned char)c;
    return (s);
}