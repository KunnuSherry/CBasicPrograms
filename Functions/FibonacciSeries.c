#include <stdio.h>
void fibo(int num){
    int a = 0;
    int b = 1;
    int c;
    int i;
    for(i=1; i<=num; i++){
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }
    
}

int main() {
    int n;
    printf("Write the number: ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}
