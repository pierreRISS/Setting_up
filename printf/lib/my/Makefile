##
## EPITECH PROJECT, 2024
## B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
## File description:
## Makefile
##

SRC	:=	$(wildcard *.c)

OBJ	:=	$(SRC:.c=.o)

NAME	:=	libmy.a

all:
	gcc -I. -c $(SRC)

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re: fclean all
