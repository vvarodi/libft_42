/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:16:57 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/22 12:42:36 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strcmp(const char *s1, const char *s2)
{
    while (*s1 || *s2)
    {
        if (*s1 != *s2)
            return ((unsigned char)*s1 - (unsigned char)*s2);
        s1++;
        s2++;
    }
    return (0);
}

/*
int     ft_strcmp(const char *s1, const char *s2)
{
    while (*s1 || *s2)
        if (*s1++ != *s2++)
            return ((unsigned char)(*--s1) - (unsigned char)(*--s2));
    return (0);
}
*/