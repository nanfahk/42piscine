# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jajaensc <jajaensc@student.42adel.org      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/12 20:40:42 by jajaensc          #+#    #+#              #
#    Updated: 2025/02/12 20:44:01 by jajaensc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files
SRC = main.c dynamic.c m_allocation.c map_reader.c max_square.c utils.c
OBJ = $(SRC:.c=.o)

# Header file
HEADER = bsq.h

# Executable name
NAME = bsq

# Default rule
all: $(NAME)

# Compile object files
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Link the executable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# Clean object files
clean:
	rm -f $(OBJ)

# Clean object files and executable
fclean: clean
	rm -f $(NAME)

# Recompile everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re

