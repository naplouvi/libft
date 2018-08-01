/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/01 15:43:22 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/02 00:19:03 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t n)
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