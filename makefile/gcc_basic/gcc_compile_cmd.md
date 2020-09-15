# method-1

1.  .c to .o

```
gcc -c -o file.o file.c
gcc -c -o file2.o file2.c
```

2.  .o to exe

```
gcc -o file file.o file2.o
```

# method-2

```
gcc -c -g -Wall -Werror hello.c -o hello.o
gcc -o hello hello.o
```

