file = main.cpp Zombie.cpp zombieHorde.cpp

NAME = ZombiesHorde

cc = c++
flag = -Wall -Wextra -Werror -std=c++98 -g
all : $(NAME)

$(NAME) :
		$(cc) $(flag) $(file) -o $(NAME)

clean:
		@echo "nothing to clean"
fclean:
		rm -f $(NAME)
re: fclean all

.phony: all clean fclean re

