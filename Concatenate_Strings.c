#include <stdio.h>
#define n 100

void Concatenate_Strings(char str1[], char str2[]);

int main()
{
    char str1[n], str2[n];

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    Concatenate_Strings(str1, str2);

    return 0;
}

void Concatenate_Strings(char str1[], char str2[])
{
    int i, len = 0;
    // Calculating First String Length...
    for (i = 0; str1[i] != '\0'; i++)
    {
        len++;
    }

    // Combine Second String with First...
    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[len + i] = str2[i];
    }
    // Add NULL Character in End of First String...
    str1[len + i] = '\0';

    // Print First String USing for Loop...
    printf("Strings After Concatenation: ");
    for (int j = 0; str1[j] != '\0'; j++)
    {
        printf("%c", str1[j]);
    }
    printf("\n");
}

