#ifndef student_h
#define student_h

typedef struct
{
    char name[20];
    int age;
} Student;

int addStudent(Student);
void printStudent(void);

#endif 