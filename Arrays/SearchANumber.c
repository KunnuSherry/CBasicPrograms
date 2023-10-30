#include <stdio.h>
void findX(int arr[], int length, int x){
    int number=0;
    int i;
    int j;
    for(i=0; i<length; i++){
        if(arr[i]==x){
            number+=1;
        }
    }
    printf("%d occurs %d number of times", x, number);
    // for(j=0; j<length; j++){
    //     printf("%d  ", arr[j]);
    // }
}
int main() {
    int x;
    int arr[] = {1,2,3,4,5,6,1,4,2,3,3,4,2,2,};
    int length = sizeof(arr)/sizeof(arr[0]); 
    printf("Write the number to be searched: ");
    scanf("%d", &x);
    findX(arr, length, x);
}
