
SRCS =
	
SRCSB =

NAME = libft.a

OBJS = $(SRCS:.c=.o)

OBJSB = $(SRCSB:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJSB)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus: $(OBJSB)
	ar -rc $(NAME) $(OBJSB)
