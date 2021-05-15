.PHONY: main rien clean all # Ne crée pas de fichier
.DEFAULT_GOAL = libft.a #commence par la commande em

all: main libft.a rm

libft.a: 
	gcc -Wall -Wextra -Werror -I ./includes -c ./srcs/*.c
	ar rcs libft.a *.o
	mv ./*.o ./srcs

clean:
	rm -f ./srcs/*.o

fclean: 
	rm -f libft.a

re: all clean
