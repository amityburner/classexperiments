// question 73

#include <stdio.h>
#include "interest.h"

int main()
{
    int p = 300, r = 3, time = 4;
    int amount = simpleInterest(p, r, time);
    printf("%d", amount);
}
