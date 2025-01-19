/* ************************************************************************** */
/*                                                     ..,,;;;,'..            */
/*                                                 .'cx0XNNWWWNXKOdl;.        */
/*   ft_printf.h                                 .;xXWNKOkkOKNMMMMMMW0l.      */
/*                                              ,xNMXd,.   .cONMMMMMMMK;      */
/*   Par: polaime <pthibaud>                   .:0WMX:      :XMMNNMMMMM0,     */
/*                                             :KMMMk.      .lxdckMMMMWd.     */
/*   Cree: 2025/01/19 13:50:28                ,OMMMMK,          ,0MMMWO'      */
/*   Ameliore: 2025/01/19 14:42:13           .oWMMMMW0c.      .c0WMMWk,       */
/*                                           'OMMWXNWMWKkddodkKWMMWKo.        */
/*                                           'OMWk,,lx0XWWMMMMMWXOo'.         */
/*   https://github.com/polaime              .oKx'    .';:clllc;'.            */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# define HEXA_MIN "0123456789abcdef"
# define HEXA_MAJ "0123456789ABCDEF"

int		ft_putnbr(long int nb);
int		ft_putptr(unsigned long long nb);
int		ft_putstr(char *s, int i);
int		ft_putx2(unsigned int nb);
int		ft_putx(unsigned int nb);
int		ft_printf(const char *str, ...);
int		ft_putunbr(unsigned int nb);
int		ft_putchar(char c);
int		ft_printx(void);
#endif