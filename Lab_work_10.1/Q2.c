#include <stdio.h>

void check(int n)
{

    if (n % 15 == 0)
    {
        printf("The given number is divisible by both 3 & 5.\n");
    }

    else
    {
        printf("The given number is not divisible by both 3 & 5.\n");
    }
}

int main()
{
    int num;

    printf("Enter any number");
    scanf("%d", &num);

    check(num);

    return 0;
}