/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/02 00:54:12 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/06 10:25:39 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (*s != '\0' && *s != (char)c)
    {
        s++;
    }
    if (*s != (char)c)
        return (NULL);
    else
        return ((char*)s);
}
