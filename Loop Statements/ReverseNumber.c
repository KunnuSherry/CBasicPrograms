#include <stdio.h>
#include <math.h>
int main(){
	int num;
	int i;
	int rev=0;
	int rem;
	printf("Write the number: ");
	scanf("%d", &num);
	for(i=1; i<=3; i++){
		rem = num%10;
		rev+= rem*(pow(10,3-i));
		num/=10;
	}
	printf("\nThe reversed number is: ");
	printf("%d", rev);
}
