NAME	= fixed
SRCS	= main.cpp Fixed.cpp
OBJS	= $(SRCS:.cpp=.o)
CC		= c++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror -lstdc++ -lm
RM		= rm -f

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all