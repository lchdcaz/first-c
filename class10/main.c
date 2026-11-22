#include <stdio.h>
#include "student.h"

int main()
{
    char p1[18] = "please entry name";

    char p2[9] = "your age";

    char p3[8] = "suceess";

    Student save;

    printf("%s\n",p1);

    scanf("%s",save.name);

    printf("%s\n",p2);

    scanf("%d",&save.age);

    int a = addStudent(save);

    if(a == 0){
        printf("%s\n",p3);
    }

    return 0;
}