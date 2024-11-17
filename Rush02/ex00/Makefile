TARGET = rush-02

CC = cc

CFLAGS = -Wall -Wextra -Werror

INC = include

SRC = src/functions1 \
      src/functions2 \
      src/cas_par_cas \
      src/main_loic

OBJ = $(addsuffix .o, $(SRC))



all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC) 



clean: 
	rm -rf *.o

fclean: clean
	rm -rf $(TARGET)

re: fclean all

.PHONY: all clean fclean re

