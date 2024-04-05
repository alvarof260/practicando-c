#include <stdio.h>
#define TAX 0.15

int main()
{
    float discount, amount, amount_with_discount, amount_with_tax;
    printf("Put a amount:");
    scanf("%f", &amount);
    printf("Put a discount:");
    scanf("%f", &discount);

    amount_with_tax = amount + (amount * TAX);
    amount_with_discount = amount_with_tax - (amount * (discount / 100));

    printf("the amount initial %2.f \nThe amount with tax %2.f\n", 
    amount, amount_with_tax);
    printf("The amount with discount %2.f", amount_with_discount);
    return 0;
}