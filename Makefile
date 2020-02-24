##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## C Pool FinalStumper
##

SRC			=	rush3.c	\
				main.c

OBJ			=	$(SRC:.c=.o)

NAME		=	rush3

TESTNAME	=	unit_tests

LIB			=	lib/my

MAKE		=	make -C $(LIB)

RM			=	rm -rf

CFLAGS		=	-Wall -Wextra -Iinclude

LDFLAGS		=	-L$(LIB) -lmy

all:		$(NAME)
	gcc rush1_1.c -o rush1-1 $(CFLAGS) $(LDFLAGS)
	gcc rush1_2.c -o rush1-2 $(CFLAGS) $(LDFLAGS)
	gcc rush1_3.c -o rush1-3 $(CFLAGS) $(LDFLAGS)
	gcc rush1_4.c -o rush1-4 $(CFLAGS) $(LDFLAGS)
	gcc rush1_5.c -o rush1-5 $(CFLAGS) $(LDFLAGS)

$(NAME):	$(OBJ)
	$(MAKE)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) *~
	$(RM) rush1-*

fclean:		clean
	$(MAKE)
	$(RM) $(NAME)

re:			fclean all
