# Nombre del ejecutable
NAME = push_swap

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directorios
SRCDIR = .
LIBFTDIR = libft
INCDIR = .
OBJDIR = obj

# Archivos fuente y objetos
SRC = parse.c push.c push_swap.c reverse_rotate.c rotate.c swap.c
OBJ = $(patsubst %.c, $(OBJDIR)/%.o, $(SRC))
LIBFT = $(LIBFTDIR)/libft.a

# Colores (opcional)
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

# Regla principal
all: $(LIBFT) $(NAME)

# Regla para compilar el ejecutable
$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L$(LIBFTDIR) -lft
	@echo "$(GREEN)Compilación completa: $(NAME)$(RESET)"

# Regla para compilar los archivos objeto
$(OBJDIR)/%.o: %.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -I$(INCDIR) -I$(LIBFTDIR) -c $< -o $@
	@echo "$(GREEN)Compilado: $<$(RESET)"

# Regla para compilar la libft
$(LIBFT):
	@$(MAKE) -C $(LIBFTDIR)
	@echo "$(GREEN)Libft compilada correctamente$(RESET)"

# Limpiar objetos
clean:
	@rm -rf $(OBJDIR)
	@$(MAKE) clean -C $(LIBFTDIR)
	@echo "$(RED)Objetos eliminados$(RESET)"

# Limpiar todo
fclean: clean
	@rm -f $(NAME)
	@$(MAKE) fclean -C $(LIBFTDIR)
	@echo "$(RED)Ejecutable y libft eliminados$(RESET)"

# Recompilar desde cero
re: fclean all

# No tratar estas reglas como archivos
.PHONY: all clean fclean re
