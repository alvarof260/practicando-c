#include <stdio.h>

int main()
{
    int increment, decrement;
    printf("please, write two numbers\n");
    scanf("%d", &increment);
    scanf("%d", &decrement);

    increment = increment + 1;  // increment += 1 || increment++
    decrement = decrement - 1;  // decrement -= 1 || decrement--

    printf("%d y %d", increment, decrement);
}