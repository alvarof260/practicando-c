/* #include <stdio.h>
#include <string.h>
#define MAX 25

void fnConcat(char arr[], char arr2[], char concat[], int n);

int main()
{
    char name[MAX], last_name[MAX], concat[50];
    int cont = 0;
    scanf("%s", name);
    scanf("%s", last_name);
    fnConcat(name, last_name, concat, 50);
    printf("%s", concat);



    return 0;
}

void fnConcat(char arr[], char arr2[], char concat[], int n)
{
    int i, j;
    for(i = 0; arr[i] != '\0'; i++)
    {
        concat[i] = arr[i];
    }
    concat[i] = ',';
    i++;
    for(j = 0; arr2[j] != '\0';j++)
    {
        concat[i++] = arr2[j];
    }
} */

#include <stdio.h>
#define MAX 50

void concat(char arr[], char arrconc[]);

int main()
{
    char full_name[MAX], full_name_compact[MAX];
    gets(full_name);
    concat(full_name, full_name_compact);
    puts(full_name_compact);
}

void concat(char arr[], char arrconc[])
{
    int i, j;
    for (i = 0, j = 0; arr[j] != '\0'; j++)
    {
        if (arr[j] != ' ')
        {
            arrconc[i] = arr[j];
            i++;
        }
    }
    arrconc[i] = '.';      // Agregar un punto al final
    arrconc[i + 1] = '\0'; // Agregar el carácter nulo al final
}