#include <stdio.h>
#include <string.h>
#define MAX 20

void hiddenWord(char c[], int n);
void printWord(char w[], int n);

int main()
{
    char word[MAX], copy[MAX];
    int try = 3, found = 0;
    char letter;

    /* parte inicial del juego */
    printf("enter a word:");
    scanf("%s", word);
    hiddenWord(copy, strlen(word));
    printWord(copy, strlen(copy));

    while (try > 0 && !found)
    {
        found = 0;
        printf("you have a %d tries\n", try);
        printf("enter a letter: ");
        scanf(" %c", &letter);

        for (int i = 0; i < strlen(word); i++)
        {
            if (word[i] == letter)
            {
                copy[i] = letter;
                found = 1;
            }
        }

        printWord(copy, strlen(copy));

        if (strcmp(word, copy) == 0)
        {
            found = 1;
            printf("you win!, you found the word\n");
            break;
        }

        if (!found)
        {
            try--;
        }
    }

    if(!found)
        printWord(word, strlen(word));
    return 0;
}

void hiddenWord(char c[], int n)
{
    for (int i = 0; i < n; i++)
    {
        c[i] = '_';
    }
    c[n] = '\0';
}

void printWord(char w[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", w[i]);
    }
    printf("\n");
}
