# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbaron <vincentbaron1996@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/27 13:17:26 by vbaron            #+#    #+#              #
#    Updated: 2020/04/27 13:17:30 by vbaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#################
##  VARIABLES  ##
#################

#	Sources

SRC			=	ft_atoi.c    			\
				ft_strlcat.c			\
				ft_strlcpy.c 			\
				ft_strncmp.c 			\
				ft_bzero.c   			\
				ft_calloc.c  			\
				ft_isalnum.c 			\
				ft_isalpha.c 			\
				ft_isascii.c 			\
				ft_isdigit.c 			\
				ft_isprint.c 			\
				ft_memset.c  			\
				ft_memcpy.c 			\
				ft_memchr.c 			\
				ft_memccpy.c			\
				ft_memmove.c			\
				ft_memcmp.c				\
				ft_strchr.c				\
				ft_strdup.c				\
				ft_strlen.c  			\
				ft_strncmp.c 			\
				ft_strrchr.c 			\
				ft_tolower.c 			\
				ft_toupper.c 			\
				ft_strnstr.c 			\
				ft_substr.c 			\
				ft_strjoin.c 			\
				ft_strtrim.c 			\
				ft_split.c			\
				ft_itoa.c			\
				ft_strmapi.c			\
				ft_putchar_fd.c			\
				ft_putstr_fd.c			\
				ft_putendl_fd.c			\
				ft_putnbr_fd.c			\


SRC_BONUS	=	ft_lstnew_bonus.c		\
				ft_lstsize_bonus.c		\
				ft_lstadd_front_bonus.c	\
				ft_lstadd_back_bonus.c	\
				ft_lstlast_bonus.c		\
				ft_lstdelone_bonus.c	\
				ft_lstclear_bonus.c		\
				ft_lstiter_bonus.c		\
				ft_lstmap_bonus.c		\


#	Includes
INCLUDES		=	libft.h		

#	Objects
OBJS		= 	${SRC:.c=.o}

OBJS_B		=	${SRC_BONUS:.c=.o}

#	Output
NAME			= 	libft.a

#	Compiler
CFLAGS		=	-Werror -Wall -Wextra



RM			= 	rm -rf

AR			= 	ar rcs

CC			= 	gcc

ATTRIBUT 	= 	-c

#	Rules

all:			${NAME} bonus

-c.o:			
				${CC} ${CFLAGS} ${ATTRIBUT} $< -o $(<:.c=.o) -I${INCLUDES}

${NAME}:		${OBJS}
				${AR} ${NAME} ${OBJS}

clean:			
				${RM} ${OBJS} ${OBJS_B}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

bonus:			${OBJS} ${OBJS_B}
				${AR} ${NAME} ${OBJS} ${OBJS_B}

.PHONY:			all clean fclean re bonus
