# CC = gcc
# CFLAGS = -Wall -O2

# all: compiler

# compiler: parser.tab.o lex.yy.o ir.o codegen.o
# 	$(CC) -o $@ $^ -lm

# parser.tab.c parser.tab.h: parser.y
# 	bison -d parser.y

# lex.yy.c: lexer.l parser.tab.h
# 	flex lexer.l

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $<

# clean:
# 	rm -f compiler *.o parser.tab.c parser.tab.h lex.yy.c

CC = gcc
CFLAGS = -Wall -O2
TARGET = compiler
SRC = main.c ir.c codegen.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^ -lm

clean:
	rm -f $(TARGET)