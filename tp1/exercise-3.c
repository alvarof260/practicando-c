#include <stdio.h>

int main()
{
    float literature, math, science, average;
    printf("Put the literature grade:");
    scanf("%f", &literature);
    printf("Put the math grade:");
    scanf("%f", &math);
    printf("Put the science grade:");
    scanf("%f", &science);
    average = (literature + math + science) / 3; 
    printf("the average of this student is: %.2f\n", average);
    return 0;
}