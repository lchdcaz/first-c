#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(sizeof(int));

    int *q = p;

    free(p);

    p = NULL;

    printf("%p\n",*q);

    printf("%d\n",*p);
}