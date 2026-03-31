CXX=c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98
NAME = animal
SRC_DIR = ./
SRCS = $(SRC_DIR)main.cpp \
	   $(SRC_DIR)Animal.cpp \
	   $(SRC_DIR)Dog.cpp \
	   $(SRC_DIR)Cat.cpp \
	   $(SRC_DIR)Brain.cpp

OBJ_DIR = .build/
OBJS = $(SRCS:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $< -c -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all fclean clean re
