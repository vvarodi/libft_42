/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:44:59 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/22 17:00:51 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    int j;
    
    
    i = 0;
    j = 0;
    if (!*needle)
        return ((char *)haystack);
    while (haystack[i] != '\0')
    {
        if (haystack[i] == needle[0])
        {
            while (needle[j] != '\0' && haystack[i + j] == needle[j])
            {
                if (needle[j + 1] == '\0')
                    return ((char *)&haystack[i]);
                j++;
            }
        }
        i++;
    }
    return (NULL);
}