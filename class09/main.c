#include <stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};

    printf("%zu\n", sizeof(arr));
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr);

    return 0;
}