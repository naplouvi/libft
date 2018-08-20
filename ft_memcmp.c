/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/20 20:24:06 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/20 20:30:23 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char  *str1;
    const char  *str2;

    str1 = s1;
    str2 = s2
    while (n--)
    {
        if (*str1++ != *str2++)
            return (*--str1 - *--str2);
    }
    return (0);
}
