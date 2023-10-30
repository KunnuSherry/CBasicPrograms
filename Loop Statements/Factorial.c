#include <stdio.h>

int main() {
    int n;
    int i;
    int fac = 1;
    printf("Write the number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        fac*=i;
    }
    printf("%d ! = %d \n", n, fac);
    return 0;
}
