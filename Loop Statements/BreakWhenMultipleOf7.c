
#include <stdio.h>

int main() {
    int n;
    while(1){
        printf("Write The Number: ");
        scanf("%d", &n);
        if(n%7==0){
            break;
        }
    }
    printf("You Entered A Multiple of 7");
    return 0;
}
