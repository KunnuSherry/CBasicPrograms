#include <stdio.h>

int main() {
    FILE* fptr;
    fptr = fopen("Newfile.txt", "r");
    if(fptr==NULL){
        printf("The file does not exists");
    }
    else{
        printf("The File Exists");
    }

    return 0;
}
