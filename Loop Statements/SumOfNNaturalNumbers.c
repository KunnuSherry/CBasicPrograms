#include <stdio.h>
int main(){
	int n;
	int i;
	int sum = 0;
	printf("Write the value of n: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		sum+=i;
	}
	printf("\nThe sum of first %d natural numbers is: ", n);
	printf("%d",sum);
}
