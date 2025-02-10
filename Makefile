##
## EPITECH PROJECT, 2024
## B-PSU-100-LYN-1-1-myls-pierre.riss
## File description:
## Makefile
##

SRC		:=	$(wildcard *.c)
OBJ		=	$(SRC:.c=.o)
NAME	=	printf.a

all:
	$(MAKE) -C printf/
	$(MAKE) -C lib/my
	$(MAKE) -C stack
	gcc -o setting_up *.c printf/printf.a stack/stack.a lib/my/libmy.a
clean:
		$(MAKE) -C printf clean
		$(MAKE) -C lib/my clean
		$(MAKE) -C stack clean
		find . -name "*.o" -delete
fclean:
		$(MAKE) -C printf fclean
		$(MAKE) -C lib/my fclean
		$(MAKE) -C stack fclean
		find . -name "*.o" -delete
re:
		$(MAKE) -C printf re
		$(MAKE) -C lib/my re
		$(MAKE) -C stack re
		make fclean