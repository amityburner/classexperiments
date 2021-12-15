#include <stdio.h>

int add(int n1, int n2);
int subtract(int n1, int n2);
int multiply(int n1, int n2);
int divide(int n1, int n2);

int main()
{
    int num1, num2, choice;
    printf("Enter choice: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n=> ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (choice == 1)
        printf("Result: %d + %d = %d\n", num1, num2, add(num1, num2));
    else if (choice == 2)
        printf("Result: %d - %d = %d\n", num1, num2, subtract(num1, num2));
    else if (choice == 3)
        printf("Result: %d * %d = %d\n", num1, num2, multiply(num1, num2));
    else if (choice == 4)
        printf("Result: %d / %d = %d\n", num1, num2, divide(num1, num2));
    else
        printf("Please enter a number from 1-4.");
    return 0;
}
int add(int n1, int n2)
{
    int result;
    result = n1 + n2;
    return result;
}
int subtract(int n1, int n2)
{
    int result;
    result = n1 - n2;
    return result;
}
int multiply(int n1, int n2)
{
    int result;
    result = n1 * n2;
    return result;
}
int divide(int n1, int n2)
{
    int result;
    result = n1 / n2;
    return result;
}
