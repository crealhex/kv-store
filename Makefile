main: main.c
	gcc -Wall -Wextra -Werror -g -fsanitize=address,undefined -o main main.c
