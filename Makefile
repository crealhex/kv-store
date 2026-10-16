build/main: src/kv.c test/main.c
	mkdir -p build
	gcc -Wall -Wextra -Werror -g -fsanitize=address,undefined -Iinc -o build/main src/kv.c test/main.c
