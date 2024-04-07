#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define X 'x'
#define O 'o'

void fillMap(char m[][N], int n, int x, int y);
void printMap(char m[][N], int n);
void hiddenMap(char m[][N], int n);
void updateMap(char m[][N], char c[][N], int x, int y, int n);
int isWin(char m[][N], int n);

int main()
{
    srand(time(NULL));
    char map[N][N], copy[N][N];
    int xTreasure, yTreasure;
    int found = 0, try = 3;
    int xUser, yUser;
    xTreasure = rand() % 3;
    yTreasure = rand() % 3;

    fillMap(map, N, xTreasure, yTreasure);
    hiddenMap(copy, N);
    printMap(copy, N);

    while (try > 0 && !found)
    {
        printf("You have a %d tries\n", try);
        printf("enter a position: ");
        scanf("%d", &xUser);
        scanf("%d", &yUser);
        updateMap(map, copy, xUser, yUser, N);
        if (isWin(copy, N))
        {
            found = 1;
            printf("You win, congratulations!!");
        }
        else
        {
            try--;
        }
    }
    if(!found)
    {
        printf("You lose, the treasure was in %d %d\n", xTreasure, yTreasure);
        printMap(map, N);
    }
    return 0;
}

void fillMap(char m[][N], int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == y && j == x)
                m[i][j] = X;
            else
                m[i][j] = O;
        }
    }
}

void printMap(char m[][N], int n)
{
    printf("+");
    for (int i = 0; i < n; i++)
    {
        printf("---+");
    }
    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("|");
        for (int j = 0; j < n; j++)
        {
            printf(" %c |", m[i][j]);
        }
        printf("\n+");
        for (int j = 0; j < n; j++) {
            printf("---+");
        }
        printf("\n");
    }
}

void hiddenMap(char m[][N], int n)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            m[i][j] = '-';
        }
    }
}

void updateMap(char m[][N], char c[][N], int x, int y, int n)
{
    c[y][x] = m[y][x];
    printMap(c, n);
}

int isWin(char m[][N], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (m[i][j] == X)
                return 1;
        }
    }
    return 0;
}