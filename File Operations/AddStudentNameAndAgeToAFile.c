#include <stdio.h>

int main() {
    FILE* fptr;
    fptr = fopen("Newfile.txt", "w");
    char name[100];
    int age;
    printf("Write The name of the student: ");
    scanf("%s", &name);
    printf("Write The age of the student: ");
    scanf("%d", &age);
    fprintf("Newfile.txt", "%s\t", name);
    fprintf("Newfile.txt", "%d\t", age);
    fclose(fptr);
}
