.PHONY = main

OBJ = includes.h ft_hex.c ft_hexdump.c

all: main exec

new:
	./ft_hexdump -C *

main: $(OBJ)
	gcc $^ -o ft_hexdump
exec: txt
	./ft_hexdump -C txt

clean: %.c
	rm *.o

fclean:
	rm -f *.out ft_hexdump
