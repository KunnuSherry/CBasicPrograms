#include <stdio.h>
void reverse(int arr[], int length){
    int arr1[length];
    int i;
    int j;
    for(i=0; i<length; i++){
        arr1[i]=arr[length-i-1];
    }
    for(j=0; j<length; j++){
        printf("%d  ", arr1[j]);
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, len);
    return 0;
}
