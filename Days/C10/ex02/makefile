.PHONY = main

all: exec

main: ft_tail.c
	gcc $< -o ft_tail

exec: main ft_tail
	./ft_tail -c 5 txt

clean:
	rm *.o

fclean:
	rm -f *.out ft_tail
