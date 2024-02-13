CC = gcc
CFLAGS = -Wall

all: my_graph my_Knapsack

my_graph: my_graph.o my_mat.o
	$(CC) $(CFLAGS) -o $@ my_graph.o my_mat.o
	chmod a+x my_graph

my_Knapsack: my_Knapsack.o
	$(CC) $(CFLAGS) -o $@ my_Knapsack.o
	chmod a+x my_Knapsack

my_graph.c: my_mat.h
my_mat.c: my_mat.h

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean all

clean:
	rm -f *.o my_graph my_Knapsack
