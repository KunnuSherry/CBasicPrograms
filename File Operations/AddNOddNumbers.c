#include<stdio.h>

int main() {
    int odd;
    int i;
    int n;
    FILE *fptr;
    fptr =fopen("text.txt", "w");
    printf("Write The Value of n: ");
    scanf("%d", n);
    for(i=0; i<=n; i++){
        if(i%2==0){
            odd = i;
            fprintf(fptr, "%d", odd);
        }
        printf("\n");
    }
    fclose(fptr);
}
