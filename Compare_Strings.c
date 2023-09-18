#include <stdio.h>
#define n 100

int Compare_Strings(char str1[], char str2[]);

int main()
{
    int value;

    char str1[n], str2[n];
    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    value = Compare_Strings(str1, str2);

    if (value == 0)
    {
        printf("Strings are Same...\n");
    }
    else
    {
        printf("Strings are not Same...\n");
    }
    return 0;
}

int Compare_Strings(char str1[], char str2[])
{
    int i, len1 = 0, len2 = 0, flag = 0;

    // Calculating First string Length
    for (i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }

    // Calculating Second string Length
    for (i = 0; str2[i] != '\0'; i++)
    {
        len2++;
    }
    
    // Compares the Length of Both Strings
    if (len1 != len2)
    {
        return 1;
    }

    // Compare Every Element of str1 with str2 
    // if one of the element in str1 does not match with element of str2 
    // then initilize flag variable value to 1 
    else
    {
        for (i = 0; i < len1; i++)
        {
            if (str1[i] != str2[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}