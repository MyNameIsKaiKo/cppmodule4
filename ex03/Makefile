NAME		= InterfaceAndRecap
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -g
RM			= rm -f

OBJ_DIR		= obj

VPATH		= src

SRCS 		=	main.cpp \
				AMateria.cpp \
				Character.cpp \
				Cure.cpp \
				Ice.cpp \
				MateriaSource.cpp

OBJS		= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

INCLUDES	= -Iinclude 

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) -o $(NAME)
	@echo "InterfaceAndRecap OK\n"

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean: 
	@$(RM) -r $(OBJ_DIR)
	@echo "Objects removed\n"

fclean: clean
	@$(RM) -r $(NAME)

re: fclean all

.PHONY : all clean fclean re
