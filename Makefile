#Program variables
NAME = so_long
CC = cc
CFLAGS = -Wall -Werror -Wextra

#Files variables
SRCS_FILES = $(wildcard sources/*.c)
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
	@$(CC) $(CFLAGS) $(OBJS) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)
	@echo "$(BOLD)Makefile : $(GREEN)Executable created successfully!$(RESET)"
%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I$(INCLS) -I/usr/include -Imlx_linux -O3
	@echo "$(BOLD)Makefile : $(BLUE)Scripts compiled.$(RESET)"

clean :
	@rm -f $(OBJS)
	@echo "$(BOLD)Makefile : $(BLUE)Objects files removed.$(RESET)"

fclean : clean
	@rm -f $(NAME)
	@echo "$(BOLD)Makefile : $(BLUE)Executable removed.$(RESET)"

re : fclean all

.PHONY : all clean fclean re