/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/20 20:03:35 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/20 20:12:02 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    const char  *source;
    char        *dest;

    source = src;
    dest = dst;
    while (n--)
    {
        *dest++ = *source;
        if (*source == c)
            return ((void*)dest);
        source++;
    }
    return (NULL);
}
