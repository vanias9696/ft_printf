#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismus <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/24 16:01:42 by ismus             #+#    #+#              #
#    Updated: 2017/10/24 16:34:41 by ismus            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	libft.a

FUNC	=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c	\
			ft_strcmp.c ft_strdup.c ft_strlen.c ft_strncmp.c ft_strnstr.c		\
			ft_strstr.c ft_tolower.c ft_toupper.c ft_strcpy.c ft_strncpy.c		\
			ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c		\
			ft_memcmp.c ft_bzero.c ft_strcat.c ft_strncat.c ft_strchr.c			\
			ft_strrchr.c ft_atoi.c ft_strlcat.c ft_putchar.c ft_putstr.c		\
			ft_putendl.c ft_itoa.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c	\
			ft_putendl_fd.c ft_putnbr_fd.c ft_strnew.c ft_strdel.c ft_strclr.c	\
			ft_striter.c ft_strsplit.c ft_strjoin.c ft_strsub.c					\
			ft_strequ.c  ft_strmap.c ft_strtrim.c ft_strnequ.c ft_strmapi.c 	\
			ft_striteri.c ft_memdel.c ft_memalloc.c ft_lstnew.c ft_lstdelone.c	\
			ft_lstdel.c	ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_by_n.c			\
			ft_copy_unt.c ft_del_first_n.c ft_while_not_n.c ft_strcjoin.c		\
			ft_itoa_base.c ft_utoa_base.c

OBJDIR	=	obj

OBJ		=	$(addprefix $(OBJDIR)/, $(FUNC:.c=.o))

CC		=	gcc

CFLAGS	=	-Wextra -Wall -Werror

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ)
	@ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJDIR):
	@mkdir $(OBJDIR)

$(OBJ): $(OBJDIR)/%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.NOTPARALLEL: all $(NAME) re
