# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 07:52:31 by baalbade          #+#    #+#              #
#    Updated: 2022/12/13 12:13:29 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
IFLAGS			=	-I$(INC_PATH)

AR				=	ar
ARFLAGS			=	rc

RM				=	rm -rf

INC_PATH		=	./
INC_NAME		=	libftprintf.h

LIB_PATH		=	libft/
LIB				=	$(LIB_PATH)/libft.h

SRCS_CH_DIR		=	characters/
SRCS_CH_FILES	=	ft_print_char.c \
					ft_print_str.c
SRCS_CH			=	$(addprefix $(SRCS_CH_DIR), $(SRCS_CH_FILES))

SRCS_NB_DIR		=	numbers/
SRCS_NB_FILES	=	ft_print_hexa.c \
					ft_print_nb.c \
					ft_print_ptr.c \
					ft_print_unsigned.c
SRCS_NB			=	$(addprefix $(SRCS_NB_DIR), $(SRCS_NB_FILES))

SRCS_FL_DIR		=	flags/
SRCS_FL_FILES	=	ft_hashtag.c \
					ft_space.c \
					ft_plus.c
SRCS_FL			=	$(addprefix $(SRCS_FL_DIR), $(SRCS_FL_FILES))

SRCS_PATH		=	srcs/
SRCS_NAME		=	$(SRCS_CH) \
					$(SRCS_FL) \
					$(SRCS_NB)

SRCS			=	$(addprefix $(SRCS_PATH), $(SRCS_NAME))

.SUFFIXES:			.c .o .h

OBJS			=	$(SRCS:.c=.o)

all:				$(NAME)

$(NAME):			$(LIB) $(OBJS)
						cp $(LIB) $(LIBFT)
						$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(LIB):
						$(MAKE)

%.o:				%.c
						$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
						$(RM) $(OBJS)

fclean:				clean
						$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re