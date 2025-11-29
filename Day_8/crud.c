#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[20];
    char branch[20];
    float marks;
};

void addStudent();
void displayStudents();
void updateStudent();
void deleteStudent();

int main() {
    int choice;

    while (1) {
        printf("\n===== STUDENT CRUD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Update Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: updateStudent(); break;
            case 4: deleteStudent(); break;
            case 5: return 0;
            default: printf("Invalid choice!\n");
        }
    }
}

void addStudent() {
    FILE *fp = fopen("students.dat", "ab");
    struct Student s;

    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Branch: ");
    scanf("%s", s.branch);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);

    fclose(fp);
    printf("Student Added!\n");
}

void displayStudents() {
    FILE *fp = fopen("students.dat", "rb");
    struct Student s;

    if (!fp) {
        printf("No data found.\n");
        return;
    }

    printf("\n--- Student Records ---\n");

    while (fread(&s, sizeof(s), 1, fp)) {
        printf("Roll: %d  Name: %s Branch: %s Marks: %.2f\n",
               s.roll, s.name, s.branch, s.marks);
    }

    fclose(fp);
}

void updateStudent() {
    FILE *fp = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    struct Student s;
    int rno, found = 0;

    printf("Enter Roll to Update: ");
    scanf("%d", &rno);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == rno) {
            found = 1;
            printf("Enter new name: ");
            scanf("%s", s.name);

            printf("Enter new branch: ");
            scanf("%s", s.branch);

            printf("Enter new marks: ");
            scanf("%f", &s.marks);
        }
        fwrite(&s, sizeof(s), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found)
        printf("Record Updated!\n");
    else
         printf("Record not found!\n");
}

void deleteStudent() {
    FILE *fp = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    struct Student s;
    int rno, found = 0;

    printf("Enter Roll to Delete: ");
    scanf("%d", &rno);

    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == rno) {
            found = 1;
            continue; 
        }
        fwrite(&s, sizeof(s), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");

    if (found)
        printf("Record Deleted!\n");
    else
        printf("Record not found!\n");
}
