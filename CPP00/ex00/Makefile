NAME = megaphone

C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): megaphone.cpp
	$(C) $(CFLAGS) -o $(NAME) megaphone.cpp

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
