/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:00:58 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/21 20:25:11 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdup(const char *s, int c)
{
	char    *copy;
    size_t  i;

    i = 0;
    while (s[i] != (char)c && s[i] != '\0')
        i++;
    if (!(copy = malloc(sizeof(char) * i + 1)))
        return (NULL);
    copy[i] = '\0';
    while (i-- > 0)
        copy[i] = s[i];
    return (copy);  
}