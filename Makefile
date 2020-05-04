CC=clang
CFLAGS= -Wall -Wextra

ft_memmove: ft_memmove.o ft_memcpy.o
	$(CC) -o ft_memmove ft_memmove.o ft_memcpy.o



