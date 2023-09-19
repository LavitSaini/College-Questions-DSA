#include <stdio.h>
#define n 100

char str[n];

void Reverse_Setence();

int main()
{
    printf("Enter a String: ");
    Reverse_Setence();
    return 0;
}

void Reverse_Setence()
{
    char ch;
    scanf("%c", &ch);
    if (ch != '\n')
    {
        Reverse_Setence();
        printf("%c", ch);
    }
}