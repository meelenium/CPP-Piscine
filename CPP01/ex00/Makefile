NAME 	= Zombie

SRC 	=  Zombie.cpp \
		   main.cpp \
		   newZombie.cpp \
		   randomChump.cpp \

OBJ 	= $(patsubst %.cpp,%.o,$(SRC))

CFLAGS	= -Wall -Wextra -Werror

CSTD	= -std=c++98


all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(CSTD) $(OBJ) -o $@

%.o: %.cpp
	c++ $(CFLAGS) $(CSTD) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
