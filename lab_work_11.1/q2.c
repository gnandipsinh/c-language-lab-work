#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;

    printf("Enter value of x: ");
    scanf("%d", &a);

    printf("Enter value of y: ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("x = %d\n", a);
    printf("y = %d\n", b);

    swap(&a, &b);

    printf("\nAfter swapping:\n");
    printf("x = %d\n", a);
    printf("y = %d\n", b);

    return 0;
}