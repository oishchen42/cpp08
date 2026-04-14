NAME := mutant

CXX := c++
RM := rm -rf
FLAGS := -Wall -Wextra -Werror -std=c++17

HEADERS := MutantStack.hpp MutantStack.tpp

SRC := main.cpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re