#include <stdio.h>

int main() {
    int n;
    while(1){
        printf("Write The Number: ");
        scanf("%d", &n);
        if(n%2!=0){
            break;
        }
    }
    printf("You Entered An Odd Number");
    return 0;
}
