#include <stdio.h>
int sum(int num){
    int i;
    int sum=0;
    for(i=1; i<=num; i++){
        sum+=i;
    }
    return sum;
}

int main() {
    int n;
    printf("Write the number: ");
    scanf("%d", &n);
    printf("sum is: %d", sum(n));
    return 0;
}
