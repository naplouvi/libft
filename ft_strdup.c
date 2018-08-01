/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nathan <nathan@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/01 15:37:33 by nathan       #+#   ##    ##    #+#       */
/*   Updated: 2018/08/01 15:41:16 by nathan      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    const char  *s2;

    if (!(s2 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
        return (NULL);
    s2 = ft_strcpy(s2, s1);
    return (s2);
}
