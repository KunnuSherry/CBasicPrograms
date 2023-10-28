#include <stdio.h>
int main(){
	int num;
	printf("Write The Number \n");
	scanf("%d", &num);
	printf("1= Is divisible, 0= Is not divisible \n");
	printf("Answer is : ");
	printf("%d", num%2==0);
	
}
