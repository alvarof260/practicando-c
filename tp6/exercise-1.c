#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 15

// arr[] es la dirección del puntero
void fillArray(int arr[], int n, int min, int max);
void printArray(int arr[], int n);
float averageOfOddIndex(int arr[], int n);
void changeNumber(int arr[], int n, int max);
void incrementOfOdd(int arr[], int n, int step);


int main()
{
    srand(time(NULL));
    int arr[MAX];
    fillArray(arr, MAX, 10, 350);
    changeNumber(arr, MAX, 300);
    printArray(arr, MAX);
    printf("el promedio es: %.2f", averageOfOddIndex(arr, MAX));
}


void fillArray(int arr[], int n, int min, int max)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % max + min;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

float averageOfOddIndex(int arr[], int n)
{
    int sum = 0, count = 0;
    float average = 0;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 != 0){
            sum += arr[i];
            count++;
        }
    }
    average = (float) sum / count;
    return average;
}

void changeNumber(int arr[], int n, int max)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            printf("change number of arr[%d]= %d\n", i, arr[i]);
            scanf("%d", &arr[i]);
        }
    }
}

void incrementOfOdd(int arr[], int n, int step)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
            arr[i] = arr[i];
    }
}