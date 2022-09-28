NAME 	= Violence

SRC 	=  main.cpp \
		   HumanA.cpp \
		   HumanB.cpp \
		   Weapon.cpp \

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
