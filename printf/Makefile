##
## EPITECH PROJECT, 2024
## B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
## File description:
## Makefile
##

SRC	:=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

SRC1	:=	$(wildcard lib/my/*.c)

OBJ1	=	$(SRC1:.c=.o)

NAME	=	printf.a

TEST_NAME	=	unit-tests

PATH_TEST	=	tests/test_my_print_f.c


all:
	$(MAKE) -C lib/my
	gcc -I. -c $(SRC)
	ar rc $(NAME) $(OBJ) $(OBJ1)

clean:
	$(MAKE) -C lib/my clean
	rm -f *.o
	rm -f *.gcda
	rm -f *.gcno
	rm -f $(TEST_NAME)

fclean:	clean
	$(MAKE) -C lib/my fclean
	rm -f *.a

project:
	gcc main.c -L. -lmy -Iinclude/
	./a.out

copy:
	cp lib/my/my.h include
	cp lib/my/mystruct.h include

tests_run:
	gcc -o $(TEST_NAME) $(PATH_TEST) $(TEST_SRC) --coverage -lcriterion
	./$(TEST_NAME)

lines:
	gcovr --exclude	tests/

branches:
	gcovr --exclude	tests/ --branches

re: fclean all
