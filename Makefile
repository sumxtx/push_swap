# Target
NAME = push_swap

# Compiler and Flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEBUG = -g
LEAKS = -fsanitize=address -fsanitize=leak
DEP_FLAGS = -MMD


# Directories
INC_DIR = ./includes/
SRC_DIR = ./src/
OBJ_DIR = ./obj/
BIN_DIR = ./bin/
TST_DIR = ./tests/
LIB_DIR = ./Libft/

# Headers
HEADER = push_swap.h
LIBFTHEADER = libftall.h
LIB = libftall.a
INCLUDES = -I$(INC_DIR) \
		-I$(LIB_DIR)includes \
		-I$(LIB_DIR)ft_printf/includes \
		-I$(LIB_DIR)get_next_line/includes \

# Remove
RM = rm -rf

# Include Dependecies
-include $(DEPS)

# Include Source File list
-include $(INC_DIR)source_list

OBJS := $(foreach file,$(SRC_FILES),$(addsuffix .o,$(file)))
DEPS := $(foreach file,$(SRC_FILES),$(addsuffix .d,$(file)))
SRCS := $(foreach file,$(SRC_FILES),$(addprefix $(SRC_DIR), $(addsuffix .c,$(file))))

# Debug flags
ifdef DEBUG
	CFLAGS += $(DEBUG)
endif
ifdef LEAKS
	endif

all:
		$(CC) $(CFLAGS) $(INCLUDES) $(SRCS) $(LIB_DIR)$(LIB)
