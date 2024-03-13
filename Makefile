TARGET = ./bin/libft
OBJ_DIR = ./obj
BIN_DIR = ./bin
INCDIR = ./inc
SRC_DIR = ./src

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

CFLAGS = -Wall -Wextra -Werror -I$(INCDIR)

$(TARGET): $(OBJS)
	mkdir -p $(BIN_DIR)
	gcc $(CFLAGS) $(OBJS) -o $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	gcc -c $(CFLAGS) $< -o $@

-include $(wildcard $(OBJ_DIR)/*.d)

.PHONY: fclean
fclean:
	@rm -rf $(OBJ_DIR) $(BIN_DIR)
