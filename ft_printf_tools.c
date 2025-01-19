/* ************************************************************************** */
/*                                                     ..,,;;;,'..            */
/*                                                 .'cx0XNNWWWNXKOdl;.        */
/*   ft_printf_tools.c                           .;xXWNKOkkOKNMMMMMMW0l.      */
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


#include "ft_printf.h"

// int	ft_putunbr(unsigned int nb)
// {
// 	static int		i;
// 	char			nbc;

// 	if (nb >= 10)
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putnbr(nb % 10);
// 	}
// 	else
// 	{
// 		nbc = nb + '0';
// 		i++;
// 		write(1, &nbc, 1);
// 	}
// 	return (i);
// }

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

int	ft_printx(void)
{
	return (write(1, "%", 1));
}
