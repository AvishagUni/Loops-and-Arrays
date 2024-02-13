CC = gcc
CFLAGS = -Wall
TARGET = my_graph
SRCS = my_graph.c my_mat.c
OBJS = $(SRCS:.c=.o)

all: my_graph

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean all

clean:
	rm -f $(TARGET) $(OBJS)


