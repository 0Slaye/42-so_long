NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c
OBJ = $(SRC:.c=.o)
BONUS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c
OBJB = $(BONUS:.c=.o)

#Extra variables
RESET = \033[1;39m
BOLD= \033[1m
GREEN= \033[1;32m
BLUE= \033[1;34m

all : $(NAME)

$(NAME) : $(OBJ)
	@ar cr $(NAME) $(OBJ)
	@echo "$(BOLD)[$(NAME)] Makefile : $(GREEN)Library created successfully!$(RESET)"

%.o : %.c
	@$(CC) $(CFLAGS) -o $@ -c $<
	@echo "$(BOLD)[$(NAME)] Makefile : $(BLUE)Scripts compiled.$(RESET)"

clean :
	@rm -f $(OBJ) $(OBJB)
	@echo "$(BOLD)[$(NAME)] Makefile : $(BLUE)Objects files removed.$(RESET)"

fclean : clean
	@rm -f $(NAME)
	@echo "$(BOLD)[$(NAME)] Makefile : $(BLUE)Executable removed.$(RESET)"

re : fclean all

bonus : $(OBJ) $(OBJB)
	@ar cr $(NAME) $(OBJ) $(OBJB)
	@echo "$(BOLD)[$(NAME)] Makefile : $(GREEN)Library created successfully with bonus!$(RESET)"

.PHONY : all clean fclean re bonus