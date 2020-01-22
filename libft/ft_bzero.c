/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvarodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 01:36:36 by vvarodi           #+#    #+#             */
/*   Updated: 2020/01/21 20:44:42 by vvarodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
  unsigned char *str;

  str = (unsigned char*)s;
  while (n--)
      *str++ = '\0';
}

/*
int main() {
  const char a[] = "hola";
  ft_bzero(a,2);
}
  //a = /0/0la/0
*/