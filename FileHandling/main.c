#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("NewFile.txt", "w");
    
    fputs("I Love c programming\n", fptr);
    fputs("File handling session in city" , fptr);

    fclose(fptr);
    return 0;
}