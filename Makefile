#Program variables
NAME = so_long
CC = cc
CFLAGS = -Wall -Werror -Wextra
#Files variables
LIBFT = sources/libft
SRCS_FILES =	sources/main.c \
				sources/get_next_line/get_next_line.c \
				sources/get_next_line/get_next_line_utils.c \
				sources/map/map.c \
				sources/map/map_checks.c \
				sources/map/map_checks_utils.c \
				sources/common.c
SRCS = $(SRCS_FILES)
OBJS = $(SRCS:.c=.o)
INCLS = includes/

#Extra variables
RESET = \033[1;39m
BOLD= \033[1m
GREEN= \033[1;32m
BLUE= \033[1;34m

#Commands
all : $(NAME)

$(NAME) : $(OBJS)
	@make -C $(LIBFT) --no-print-directory
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBFT)/libft.a
	@echo "$(BOLD)Makefile : $(GREEN)Executable created successfully!$(RESET)"
%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I$(INCLS)
	@echo "$(BOLD)Makefile : $(BLUE)Scripts compiled.$(RESET)"

clean :
	@rm -f $(OBJS)
	@echo "$(BOLD)Makefile : $(BLUE)Objects files removed.$(RESET)"

fclean : clean
	@rm -f $(NAME)
	@echo "$(BOLD)Makefile : $(BLUE)Executable removed.$(RESET)"

re : fclean all

.PHONY : all clean fclean re