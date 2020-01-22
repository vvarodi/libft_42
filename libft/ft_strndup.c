/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 18:24:23 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/21 20:22:57 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strndup(const char *s, size_t n)
{
    char    *copy;
    size_t  i;

    if(!(copy = malloc(sizeof(char) * n + 1)))
        return (NULL);
    i = 0;
    while (i < n && s[i] != '\0')
    {
        copy[i] = s[i];
        i++;
    } 
    copy[i] = '\0'; 
    return (copy);
}