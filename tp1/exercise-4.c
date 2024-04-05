#include <stdio.h>

int main()
{
    int num1, num2, temp;
    printf("put a number:");
    scanf("%d", &num1);
    printf("put a number:");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("%d y %d", num1, num2);
    return 0;
}