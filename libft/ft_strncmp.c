/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:39:18 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/22 12:41:54 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while ((*s1 || *s2) && n--)
        if (*s1++ != *s2++)
            return ((unsigned char)*--s1 - (unsigned char)*--s2);
    return (0);
}