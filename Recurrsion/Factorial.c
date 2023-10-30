#include <stdio.h>
int fac(int num){
    if(num==0){
        return 1;
    }
    int fac1 = fac(num-1);
    int fac2 = fac1*num;
    return fac2;
}

int main() {
    int n;
    printf("Write the number: ");
    scanf("%d", &n);
    printf("Factorial is: %d", fac(n));
    return 0;
}
