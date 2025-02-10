##
## EPITECH PROJECT, 2024
## B-CPE-100-LYN-1-1-cpoolday11-pierre.riss
## File description:
## Makefile
##

SRC		=		*.c

OBJ		=	${SRC:.c=.o}

all:		$(OBJ)
		gcc -c $(SRC)
		ar rcs libmy.a *.o
clean:
		find . -name "*.o" -delete
fclean:
		find . -name "*.o" -delete
		find . -name "*.a" -delete
re:
		make fclean
