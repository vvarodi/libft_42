/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 23:16:46 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/22 00:04:14 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    const char *str;

    str = s;
    while (*s)
        s++;
    while (s >= str)
        if (*s-- == (char)c)
            return ((char *)s + 1);
    return (NULL);         
} 