/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:03:32 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/22 18:41:46 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *str)
{
    int num;
    int sign;

    num = 0;
    sign = 1;
    while (ft_isspace(*str))
        str++;
    if (*str == '-')
        sign = - 1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
        num = num * 10 + *str++ - '0';
    return (num * sign);
}