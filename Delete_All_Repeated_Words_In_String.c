#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter a String: \n");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                for (int k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
            }
        }
    }

    printf("After Removing the Duplicate Words from the String: \n");
    for(int i=0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }

    return 0;
}