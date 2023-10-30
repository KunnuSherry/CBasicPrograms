#include <stdio.h>
// void insert(int arr[], int length, int x){
//     int number=0;
//     int i;
//     int j;
//     for(i=0; i<length; i++){
//         if(arr[i]==x){
//             number+=1;
//         }
//     }
//     printf("%d occurs %d number of times", x, number);
//     for(j=0; j<length; j++){
//         printf("%d  ", arr[j]);
//     }
// }
int main() {
    int x;
    int j;
    int i;
    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]); 
    printf("Write the number to be inserted at last: ");
    scanf("%d", &x);
    printf("Old Array Elements In Order: ");
    for(j=0; j<length; j++){
        printf("%d  ", arr[j]);
    }
    arr[length] = x;
    printf("New Array Elements In Order: ");
    for(i=0; i<=length; i++){
        printf("%d  ", arr[i]);
    }
    
}
