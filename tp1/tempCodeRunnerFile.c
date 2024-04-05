#include <math.h>
#define PI 3.141592 

int main()
{
    float h, r, bulk;
    printf("enter the height of the cylinder:");
    scanf("%f", &h);
    printf("enter the radius of the cylinder:");
    scanf("%f", &r);
    
    r = r * 10; // r *= 10;
    h = h * 100; // h = 100;
    bulk = PI * pow(r, 2) * h;
    printf("The bulk is: %.4f", bulk);
    return 0;
}