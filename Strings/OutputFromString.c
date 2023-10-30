#include <stdio.h>
int main() {
    char name[] = "Kunal";
    char lname[] = "Sharma";
    int i;
    int j;
    for(i=0; name[i]!=0; i++){
        printf("%c ", name[i]);
    }
    for(j=0; lname[j]!=0; j++){
        printf("%c ", lname[j]);
    }
}
