/* ************************************************************************** */
/*                                                     ..,,;;;,'..            */
/*                                                 .'cx0XNNWWWNXKOdl;.        */
/*   Makefile                                    .;xXWNKOkkOKNMMMMMMW0l.      */
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


#################################
## ARGUMENTS

NAME		= libftprintf.a
CFLAGS		= -Wall -Werror -Wextra
CC			= cc

#################################
## SOURCES

SRC_FILES 	=	ft_printf_tools.c\
				ft_printf_utils.c\
				ft_printf.c\

OBJ_FILES	= $(SRC_FILES:.c=.o)

#################################
## RULES

all: ${NAME}

${NAME}: ${OBJ_FILES}
	ar rcs ${NAME} ${OBJ_FILES}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJ_FILES}
fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re

