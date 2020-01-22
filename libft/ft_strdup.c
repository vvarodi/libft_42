/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:41:30 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/21 18:25:14 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *copy;
    size_t  i;
    
    if (!(copy = malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    i = 0;
    while (s[i] != '\0')
    {
        copy[i] = s[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}