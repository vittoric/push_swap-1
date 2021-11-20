# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: potero <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 15:42:33 by potero            #+#    #+#              #
#    Updated: 2021/11/20 11:46:28 by potero           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c ps_lst.c ps_error.c ps_check_arg.c \
	   ps_print_column.c ps_repeat.c ps_atoi.c \
	   ps_swap.c ps_push.c ps_rotate.c ps_order.c \
	   ps_limits.c ps_position.c  ps_algorithm_bubble.c \
	   ps_free.c ps_algorithm_insertion.c ps_par.c 

LIBFT_PATH = libft/
FT_PRINTF_PATH = ft_printf/

OBJS = $(SRCS:.c=.o)

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

%.o:%.c
		$(CC) $(CFLAGS) -c  $< -o $(<:.c=.o)  -I$(LIBFT_PATH) -I$(FT_PRINTF_PATH) 

RM = rm -f

$(NAME): $(OBJS)
		@make -C $(LIBFT_PATH) --silent
		@make -C $(LIBFT_PATH) bonus --silent
		@make -C $(FT_PRINTF_PATH) --silent
		gcc -o $(NAME) $(OBJS) -I./libft -L./libft -lft -I./ft_printf -L./ft_printf -lftprintf

all: $(NAME)

clean:
			$(RM) $(OBJS)
			@make -C $(LIBFT_PATH) clean --silent
			@make -C $(FT_PRINTF_PATH) clean --silent

fclean: clean
			$(RM) $(NAME)
			@make -C $(LIBFT_PATH) fclean --silent
			@make -C $(FT_PRINTF_PATH) fclean --silent

re: fclean $(NAME)

.PHONY: all clean fclean re
