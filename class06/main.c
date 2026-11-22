#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(100);

    *p = 100;

    printf("%d\n",*p);

    return 0;
}