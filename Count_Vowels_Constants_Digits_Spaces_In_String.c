#include <stdio.h>

int main()
{

    char str[100];
    printf("Enter a String: ");
    fgets(str, 100, stdin);

    int v, c, d, s;
    v = c = d = s = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {

        // Check Number of Vowels
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            v++;
        }

        // Check Number of Constants
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            c++;
        }

        // Check Number of Digits
        else if(str[i] >= '0' && str[i] <= '9')
        {
            d++;
        }

        // Check Number of White Spaces
        else if(str[i] == ' '){
            s++;
        }
    }

    printf("Vowels are: %d\n", v);
    printf("Constants are: %d\n", c);
    printf("Digits are: %d\n", d);
    printf("White Spaces are: %d\n", s);
    return 0;
}