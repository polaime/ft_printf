/* ************************************************************************** */
/*                                                     ..,,;;;,'..            */
/*                                                 .'cx0XNNWWWNXKOdl;.        */
/*   ft_printf_utils.c                           .;xXWNKOkkOKNMMMMMMW0l.      */
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

int	ft_putnbr(long int nb)
{
	static int	i;
	long		j;
	char		nbc;

	i = 0;
	j = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		j = 1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	nbc = (nb % 10) + '0';
	write(1, &nbc, 1);
	i++;
	if (j == 1)
		i++;
	return (i);
}

int	ft_putptr(unsigned long long nb)
{
	static int	i;
	char		nbc;

	if (nb == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	i = 0;
	if (nb >= 16)
		ft_putptr(nb / 16);
	nbc = HEXA_MIN[nb % 16];
	write(1, &nbc, 1);
	i++;
	return (i);
}

int	ft_putstr(char *s, int i)
{
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i] != '\0')
		++i;
	return (write(1, s, i));
}

int	ft_putx2(unsigned int nb)
{
	static int	i;
	char		nbc;

	i = 0;
	if (nb >= 16)
		ft_putx2(nb / 16);
	nbc = HEXA_MAJ[nb % 16];
	write(1, &nbc, 1);
	i++;
	return (i);
}

int	ft_putx(unsigned int nb)
{
	static int	i;
	char		nbc;

	i = 0;
	if (nb >= 16)
		ft_putx(nb / 16);
	nbc = HEXA_MIN[nb % 16];
	write(1, &nbc, 1);
	i++;
	return (i);
}
