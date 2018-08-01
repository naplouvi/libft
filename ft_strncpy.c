/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nathan <nathan@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/01 15:43:22 by nathan       #+#   ##    ##    #+#       */
/*   Updated: 2018/08/01 19:18:53 by nathan      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dest, char *src, size_t n)
{
    size_t  len;
    size_t  i;

    i = 0;
    if (!dest || !src)
        return (NULL);
    len = ft_strlen((char*)src);
    while (i < n)
    {
        dest[i] = i > len ? '\0' : src[i];
        i++;
    }
    return (dest);
}