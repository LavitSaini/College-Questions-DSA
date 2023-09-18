#include <stdio.h>

int Length_Of_String(char str[]);

int main()
{
    char str[100];
    printf("Enter a String: ");
    gets(str);  // But this Function is Ricky to Use

    printf("Length of String is: %d", Length_Of_String(str));

    return 0;
}

int Length_Of_String(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}