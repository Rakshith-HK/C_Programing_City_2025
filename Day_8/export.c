#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    char branch[20];
    float marks;
};

int main()
{
    FILE *fp = fopen("students.dat", "rb");
    FILE *out = fopen("students.txt", "w");

    struct Student s;

    if (!fp)
    {
        fprintf(out, "No data found. students.dat not created.\n");
        fclose(out);
        return 0;
    }

    fprintf(out, "===== STUDENT DETAILS =====\n\n");

    while (fread(&s, sizeof(s), 1, fp))
    {
        fprintf(out,
                "Roll: %d\nName: %s\nBranch: %s\nMarks: %.2f\n-------------------------\n",
                s.roll, s.name, s.branch, s.marks);
    }

    fclose(fp);
    fclose(out);

    printf("Data exported to students.txt successfully!\n");
    return 0;
}
