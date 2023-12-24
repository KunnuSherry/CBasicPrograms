#include <stdio.h>

int main() {
    FILE* fptr;
    fptr = fopen("Newfile.txt", "r");
    int i;
    int j;
    for(j =0; j<5; j++){
        fscanf("Newfile.txt", "%d", &i);
        printf("%d", i);
    }
    printf("\n");
    fclose(fptr);
}
