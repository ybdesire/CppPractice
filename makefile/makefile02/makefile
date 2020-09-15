CC := gcc
CFLAGS := -g -Wall -Werror
%.o: %.c
	$(CC) $(CFLAGS) -c $<
hello: hello.o
	$(CC) $(CFLAGS) $< -o $@
