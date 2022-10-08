NAME 	= Bureaucrat

SRC 	=  main.cpp \
		   Bureaucrat.cpp \

OBJ 	= $(patsubst %.cpp,%.o,$(SRC))

CFLAGS	= -Wall -Wextra -Werror

CPP = c++

CSTD	= -std=c++98


all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(CSTD) $(OBJ) -o $@

%.o: %.cpp %.hpp
	$(CPP) $(CFLAGS) $(CSTD) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)