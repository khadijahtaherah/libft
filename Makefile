# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/10 20:38:46 by skhairul          #+#    #+#              #
#    Updated: 2024/08/10 20:38:51 by skhairul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	   = libft.a

# Regular files
files 	   = ft_isalpha \
			 ft_isdigit \
			 ft_isalnum \
			 ft_isascii \
			 ft_isprint \
			 ft_strlen \
			 ft_memset \
			 ft_bzero \
			 ft_memcpy \
			 ft_memmove \
			 ft_strlcpy \
			 ft_strlcat \
			 ft_toupper \
			 ft_tolower \
			 ft_strchr \
			 ft_strrchr \
			 ft_strncmp \
			 ft_memchr \
			 ft_memcmp \
			 ft_strnstr \
			 ft_atoi \
			 ft_calloc \
			 ft_strdup \
			 ft_substr \
			 ft_strjoin \
			 ft_strtrim \
			 ft_split \
			 ft_itoa \
			 ft_strmapi \
			 ft_striteri \
			 ft_putchar_fd \
			 ft_putstr_fd \
			 ft_putendl_fd \
			 ft_putnbr_fd \

# Bonus files
bonus_files = ft_lstnew

# Compiler flags
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror

# Convert file names to .c and .o files
CFILES  = $(files:%=%.c)
OFILES  = $(files:%=%.o)
B_CFILES = $(bonus_files:%=%.c)
B_OFILES = $(bonus_files:%=%.o)

# Build the library
$(NAME): $(OFILES)
	ar -rc $(NAME) $(OFILES)

# Compile all .c files (including bonus)
all: $(NAME)

# Compile bonus files and include them in the library
bonus: $(OFILES) $(B_OFILES)
	ar -rc $(NAME) $(OFILES) $(B_OFILES)

# Compile .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I./

# Clean up object files
clean:
	rm -f $(OFILES) $(B_OFILES)

# Clean everything
fclean: clean
	rm -f $(NAME)

# Rebuild everything from scratch
re: fclean all

# Declare rules that are not files
.PHONY: all clean fclean re bonus
