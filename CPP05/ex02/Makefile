NAME 	= Bureaucrat

SRC 	=  main.cpp \
		   Bureaucrat.cpp \
		   Form.cpp \
		   PresidentialPardonForm.cpp \
		   RobotomyRequestForm.cpp \
		   ShrubberyCreationForm.cpp \

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
	rm -rf $(OBJ) *_shrubbery

fclean: clean
	rm -rf $(NAME)