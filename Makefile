NAME = PhoneBook

C = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): PhoneBook.cpp main.cpp
	$(C) $(CFLAGS) -o $(NAME) PhoneBook.cpp main.cpp

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all