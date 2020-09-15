#include<stdio.h>

int main()
{
#ifdef APP
        printf("hello %s\n", "emacs");
#endif
        printf("hello %s\n", "emacs2");
        return 0;
}
