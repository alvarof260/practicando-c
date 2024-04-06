#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 8

int validation(char pass[], int n);

int main()
{
    char password[MAX], password2[MAX];
    printf("enter the password: ");
    scanf("%s", password);
    validation(password, strlen(password))
        ? printf("re-enter the password: ")
        : printf("password invalid");
    scanf("%s", password2);
    strncmp(password, password2, MAX)
        ? printf("error")
        : printf("success");
    return 0;
}

int validation(char pass[], int n)
{
    int notNumber = 0, notUpper = 0, notLower = 0;
    for (int i = 0; i < n; i++)
    {
        if(islower(pass[i]))
            notLower = 1;
        else if(isupper(pass[i]))
            notUpper = 1;
        else if(isdigit(pass[i]))
            notNumber = 1;

    }
    return notNumber && notUpper && notLower;
}