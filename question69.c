// question 69

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    printf("Enter your name: ");
    gets(str);

    int i = 0, l = strlen(str);

    for (; i <= l; i++)
    {
        printf("%c = %d, ", str[i], str[i]);
    }
}

// using pointers
int main()
{
    char *str = "Bhavya";
    // printf("Enter your name: ");
    // gets(str);

    int i = 0, l = strlen(str);

    for (; i <= l; i++)
    {
        printf("%c = %d, ", str[i], str[i]);
    }
}
