# Nombre del archivo de la biblioteca (.a)
NAME = libft.a

# Compilador y banderas de compilación
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y archivos objeto
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd ft_putnbr_fd

OBJ = $(SRC:.c=.o) #cambiar los archivos fuente a archivos objeto

# Archivo de encabezado
INCLUDE = libft.h

# Crear bibliotecas y eliminar archivos 
AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re # indica al Makefile que todo lo que se escriba aquí son COMANDOS

#objetivo: dependencias
#	comandos

# regla por defecto que lo compila todo
all: $(NAME)

# regla para crear la biblioteca @-destino ^-dependencias
$(NAME): $(OBJ)
	$(AR) $@ $^

# Regla para pasar archivos .c a .o
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

# Regla para eliminar los archivos .o creados
clean:
	$(RM) $(OBJ)

# Regla para eliminar archivos .o y .a
fclean:
	$(RM) $(NAME)
	
#Regla para recompilar todo desde cero
re: fclean all