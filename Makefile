# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/25 18:18:05 by bsiche            #+#    #+#              #
#    Updated: 2018/09/01 03:53:49 by bsiche           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAG = -Wall -Werror -Wextra

CC = gcc

#Directories

SRCDIR =	srcs
OBJDIR =	objs
INCDIR =	includes\

NAME = ft_select

SRC =	main.c \
		ft_strpad.c \
		col_size.c \
		print.c \
		get_key.c \
		term_setup.c \
		select_arg.c \
		signals.c \
		free_stuff.c \
		mode.c \
		color.c \
		portalprint.c \
		facts.c \
		facts2.c \
		facts3.c \
		stringsearch.c \
		return.c \
	
OBJ = $(SRC:.c=.o)

LIBFT =	-Llibft/

OBJP =		$(addprefix $(OBJDIR)/, $(SRC:.c=.o))
INCP =		$(foreach dir, $(INCDIR), -I$(dir))

all : complib $(NAME)

$(NAME): $(OBJP)
	@$(CC) $(CFLAGS) -o $@ $^ $(INCP) $(LIBFT)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) $(ADDFLAGS) -c -o $@ $^ $(INCP)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

complib :
		make -C libft/

clean :
			rm -rf $(OBJ)
			make clean -C $(LIB)

fclean :	clean
			rm -rf $(NAME)
			make fclean -C $(LIB)

re :		fclean all