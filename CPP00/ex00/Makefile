NAME 	= megaphone

SRC 	= megaphone.cpp

OBJ 	= $(patsubst %.cpp,%.o,$(SRC))

CFLAGS	= -Wall -Wextra -Werror

CSTD	= -std=c++98


all: $(NAME)

$(NAME): $(OBJ)
	g++ $(CFLAGS) $(CSTD) $(OBJ) -o $@

%.o: %.cpp
	g++ $(CFLAGS) $(CSTD) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)