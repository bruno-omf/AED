# Makefile para o projeto Binary Tree Menu

# Compiladores
CXX = g++
CC  = gcc

# Flags
CXXFLAGS = -Wall -Wextra -std=c++11 -Iinclude
CFLAGS   = -Wall -Wextra -std=c11   -Iinclude

# Fontes
CPP_SOURCES = main.cpp src/menu.cpp src/node.cpp src/operations.cpp
C_SOURCES   = src/utils.c

# Objetos
CPP_OBJS = $(CPP_SOURCES:.cpp=.o)
C_OBJS   = $(C_SOURCES:.c=.o)
OBJS     = $(CPP_OBJS) $(C_OBJS)

# Nome do executável
TARGET = bt_menu

# Regra principal
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regra para arquivos .cpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regra para arquivos .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para limpar os arquivos compilados
clean:
	rm -f $(OBJS) $(TARGET)
