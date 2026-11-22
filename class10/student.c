#include <stdio.h>
#include "student.h"

static int num = 0;
static Student student[10];

int addStudent(Student s)
{
        student[num] = s;

        num = num + 1;

        return 0;
}
