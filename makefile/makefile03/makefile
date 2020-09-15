CC := gcc
CFLAGS := -g -Wall -Werror
%.o: %.c
	$(CC) $(CFLAGS) -DAPP=2 -c $<
hello: hello.o
	$(CC) $(CFLAGS) $< -o $@
