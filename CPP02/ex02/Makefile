NAME 	= Fixed

SRC 	=  main.cpp \
		   Fixed.cpp \

OBJ 	= $(patsubst %.cpp,%.o,$(SRC))

CFLAGS	= -Wall -Wextra -Werror

CPP = c++

CSTD	= -std=c++98


all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(CSTD) $(OBJ) -o $@

%.o: %.cpp
	$(CPP) $(CFLAGS) $(CSTD) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)