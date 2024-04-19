#include <stdio.h>
#include <ctype.h>

void analisisFrase(char *f, int* cant_m, int* cant_mi, int* cant_c);

int main()
{
    char frase[100];
    int contador_min, contador_may, contador_con;
    printf("ingrese una frase:");
    gets(frase);
    analisisFrase(frase, &contador_may, &contador_min, &contador_con);
    printf("/----------\\\n");
    printf("   Min: %d\n", contador_min);
    printf("   May: %d\n", contador_may);
    printf("   Con: %d\n", contador_con);
    printf("\\----------/");
    return 0;
}

void analisisFrase(char *f, int* cant_m, int* cant_mi, int* cant_c)
{
    while (*f != '\0')
    {
        if(isalpha(*f))
        {
            if(!strchr("AEIOUaeiou", *f))
            {
                (*cant_c)++;
                if(islower(*f))
                {
                    (*cant_mi)++;
                }
                else if(isupper(*f))
                {
                    (*cant_m)++;
                }
                
            }
        }
        f++;
    }
}