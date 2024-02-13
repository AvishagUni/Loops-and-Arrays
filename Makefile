CC = gcc
CFLAGS = -Wall
TARGET = my_graph
SRCS = my_graph.c my_mat.c
OBJS = $(SRCS:.c=.o)

all: my_graph my_Knapsack

my_graph: my_graph.o my_mat.o
	$(CC) $(CFLAGS) -o $@ my_graph.o my_mat.o

my_Knapsack: my_Knapsack.o
	$(CC) $(CFLAGS) -o $@ my_Knapsack.o

my_graph.c: my_mat.h
my_mat.c: my_mat.h

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean all

clean:
	rm -f $(TARGET) $(OBJS)


