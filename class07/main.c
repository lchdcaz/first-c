#include <stdio.h>
#include <stdlib.h>

int *foo()
{
    int a = 100;
    return &a;
}

int main()
{
    int *p = foo();
    printf("%d\n",*p);
    printf("%d\n",p);
    return 0;
}