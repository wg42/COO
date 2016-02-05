.PHONY: all $(NAME) $(OBJ) clean fclean re

NAME = ppm

FILE =  main.cpp \
		$(SRCS)/ppm.cpp \
		$(SRCS)/Point.cpp \
		$(SRCS)/Cercle.cpp \
		$(SRCS)/Facette.cpp \
		$(SRCS)/Segment.cpp \
		$(SRCS)/Cube.cpp \

FLAGS = -Wall -Wextra -Werror

SRCS = sources
HEADERS = headers

all: $(NAME)

$(NAME): $(OBJ)
	@g++ $(FLAGS)

clean:
	@rm -Rf obj
	@echo "O File Deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "Executable File Deleted"

re: fclean all