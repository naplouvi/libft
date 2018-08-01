/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/02 00:43:09 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/02 00:53:45 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    size_t  i;

    if (c == '\0')
    {
        i = ft_strlen(str);
        return ((char)str[i]);
    }
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return ((char)str[i]);
        i++;
    }
    return (NULL);
}
