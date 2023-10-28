#include <stdio.h>
int main(){
	int marks;
	printf("Write the marks: ");
	scanf("%d", &marks);
	if(marks>30){
		printf("pass");
	}
	else{
		printf("fail");
	}
}
