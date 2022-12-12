# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 07:52:31 by baalbade          #+#    #+#              #
#    Updated: 2022/12/12 14:50:01 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror

AR				=	ar
ARFLAGS			=	rc

RM				=	rm -rf

SRCS_CH_DIR		=	srcs/characters/
SRCS_CH_FILES	=	$(SRCS_CH_DIR)ft_print_char.c \
					$(SRCS_CH_DIR)ft_print_str.c
SRCS_CH			=	$(addprefix$(SRCS_CH_DIR), $(SRCS_CH_FILES))

SRCS_NB_DIR		=	srcs/numbers/
SRCS_NB_FILES	=	$(SRCS_NB_DIR)ft_print_hexa.c \
					$(SRCS_NB_DIR)ft_print_nb.c \
					$(SRCS_NB_DIR)ft_print_ptr.c \
					$(SRCS_NB_DIR)ft_print_unsigned.c
SRCS_NB			=	$(addprefix$(SRCS_NB_DIR), $(SRCS_NB_FILES))

SRCS_FL_DIR		=	srcs/flags/
SRCS_FL_FILES	=	$(SRCS_FL_DIR)ft_hashtag.c \
					$(SRCS_FL_DIR)ft_space.c \
					$(SRCS_FL_DIR)ft_plus.c
SRCS_FL			=	$(addprefix$(SRCS_FL_DIR), $(SRCS_FL_FILES))

SRCS_PATH		=	srcs/
SRCS_NAME		=	$(addprefix ${SRCS_DIR}, ${SRCS_CH}) \
					$(addprefix ${SRCS_DIR}, ${SRCS_NB}) \
					$(addprefix ${SRCS_DIR}, ${SRCS_FL})

INC				=	$(addprefix ${INC_PATH}, ${INC_NAME})
SRCS			=	$(addprefix ${SRCS_PATH}, ${SRCS_NAME})

.SUFFIXES:			.c .o .h

OBJS			=	$(SRCS:.c=.o)

all:				$(NAME)

$(NAME):			$(OBJS)
						$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o:				%.c
						$(CC) $(CFLAGS) -c $< -o $@

clean:
						$(RM) $(OBJS)

fclean:				clean
						$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re