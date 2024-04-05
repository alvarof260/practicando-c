#include <stdio.h>
#define IVA 0.21

int main(void)
{
    float monto, precio;                //Declaro variables
    precio=325.50;                      //Asignación de valor                            
    monto=precio+(IVA * precio);        //Calculo de monto a pagar
    printf("Monto a pagar=%f\n",monto); //Muestra en pantalla el monto
    return;
}