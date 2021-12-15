#include <stdio.h>

int isOddOrEven(int n) {
    if (n % 2 == 0)
        printf("%d is even", n);
    else
        printf("%d is odd", n);
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    isOddOrEven(x);
}
