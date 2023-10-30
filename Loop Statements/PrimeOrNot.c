#include <stdio.h>

int main() {
    int n;
    int i;
    int prime = 1;
    printf("Write the number: ");
    scanf("%d", &n);
    for(i=2; i<=n/2; i++){
        if(n%i==0){
            prime = 0;
            break;
        }
    }
    if(prime==0){
        printf("%d is a composite number. \n", n);
    }
    else if(prime==1){
        printf("%d is a prime number. \n", n);
    }
    return 0;
}
