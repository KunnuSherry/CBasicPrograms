#include <stdio.h>
float CTF(float num){
    float f = (num*1.8)+32 ;
    return f;
}

int main() {
    float n;
    printf("Write the temperature in celcius: ");
    scanf("%f", &n);
    printf("Temperature in Farhenheit is: %f", CTF(n));
    return 0;
}
