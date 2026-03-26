#include <stdio.h>

int main()
{

    int a[50], num;
    int *p;

    printf("enter array size :");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter element [%d]: ", i);
        scanf("%d", &a[i]);
    }

     p = a;

    printf("Square of elements:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", (*(p + i)) * (*(p + i)));
    }

    return 0;
}



