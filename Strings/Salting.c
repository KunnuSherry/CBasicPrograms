#include <stdio.h>
int main() {
    char password[200];
    char newpassword[200];
    printf("Enter the password: ");
    scanf("%s", password);
    char salt[] = "123";
    strcpy(newpassword, password);
    strcat(newpassword, salt);
    printf("The new password is: ");
    puts(newpassword);
}
