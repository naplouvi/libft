/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/01 23:42:48 by naplouvi     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/01 23:54:18 by naplouvi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t		destlen;
	size_t		srclen;
	size_t		i;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen((char*)src);
	while ((destlen <= (destlen + srclen)) && (n > 0))
	{
		dest[destlen] = src[i];
		destlen++;
		srclen--;
		i++;
		n--;
	}
	dest[destlen] = '\0';
	return (dest);
}
