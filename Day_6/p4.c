#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct Student s[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter name, age, marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].age, &s[i].marks);
    }

    printf("\n--- Student Details ---\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s  %d  %.2f\n", s[i].name, s[i].age, s[i].marks);
    }

    return 0;
}
