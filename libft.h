/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nathan <nathan@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/01 15:40:35 by nathan       #+#   ##    ##    #+#       */
/*   Updated: 2018/08/01 19:16:36 by nathan      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>


int		ft_strcmp(char *s1, char *s2);
int     ft_strlen(char *str);
int     ft_atoi(char *str);
void	ft_putnbr(int nb);
void    ft_putchar(char c);
char	*ft_strstr(char *str, char *to_find);
char    *ft_strdup(char *s1);
char    *ft_strcpy(char *dst, char *src);
char    *ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strcat(char *dest, char *src);


#endif