
#include <stdio.h>

void incrementByValue(int x)
{
    x = x + 1;
    printf("Inside incrementByValue: %d\n", x);
}

void incrementByReference(int *x)
{
    *x = *x + 1;
    printf("Inside incrementByReference: %d\n", *x);
}

int main()
{
    int num = 10;

    incrementByValue(num);
    printf("After incrementByValue: %d\n", num);

    incrementByReference(&num);
    printf("After incrementByReference: %d\n", num);

    return 0;
}
