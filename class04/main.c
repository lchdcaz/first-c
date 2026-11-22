#include <stdio.h>

int main()
{
    char c = 'A';

    int a = 10;

    long b = 100;

    float f = 3.14f;

    double d = 3.14;

    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(long));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
}