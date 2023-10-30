#include <stdio.h>
void Fibonacci(int length){
    int arr[length];
    int a = 0;
    int b = 1;
    int c;
    int i;
    int j;
    for(i=0; i<length; i++){
        arr[i] = a;
        c = a+b;
        a=b;
        b=c;
    }
    for(j=0; j<length; j++){
        printf("%d  ", arr[j]);
    }
}
int main() {
    int length;
    printf("Write the length of Fibo. Series: ");
    scanf("%d", &length);
    Fibonacci(length);
}
