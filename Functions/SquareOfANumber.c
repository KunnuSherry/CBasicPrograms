#include <stdio.h>
#include <math.h>
void square(int num){
    int power = pow(num,2);
    printf("The square of %d is %d", num, power);
}

int main() {
    int n;
    printf("Write the number: ");
    scanf("%d", &n);
    square(n);
    return 0;
}
