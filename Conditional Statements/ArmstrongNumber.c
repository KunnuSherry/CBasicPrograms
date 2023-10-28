#include <stdio.h>
#include <math.h>
int main(){
	int number;
	printf("Write The Number: ");
	scanf("%d", &number);
	int nod = 0;
	int number1=number;
	int n = 0;
	int result = 0;
	int remainder = 0;
	//for the number of digits
	while(number1!=0){
		number1=number1/10;
		n++	;
	}
	//for the armstrong number
	number1 = number;
	while(number1!=0){
		remainder = number1%10;
		result += pow(remainder,n);
		number1/=10;
	}
	printf("%d", result);
	if(result == number){
		printf("%d is an armstrong number", number);
	}
	else{
		printf("%d is not an armstrong number", number);
	}
}
