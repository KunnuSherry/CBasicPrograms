#include <stdio.h>
int main(){
	int num;
	printf("Write The Number \n");
	scanf("%d", &num);
	printf("1= Number Is Even, 0= Number is odd \n");
	printf("Answer is : ");
	printf("%d", num%2==0);
	
}
