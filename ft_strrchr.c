/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/02 00:54:12 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/02 00:59:20 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    size_t  i;

    i = ft_strlen(str);
    if (c == '\0')
    {

        return ((char)str[i]);
    }
    while (i >= 0)
    {
        if (str[i] == c)
            return ((char)str[i]);
        i--;
    }
    return (NULL);
}
