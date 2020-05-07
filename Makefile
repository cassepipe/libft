CC=clang
CFLAGS= -Wall -Wextra

libft.a : *.o
	ar rc libft.h *.o

ft_memmove: ft_memmove.o ft_memcpy.o
	$(CC) -o ft_memmove ft_memmove.o ft_memcpy.o




