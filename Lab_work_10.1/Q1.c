#include <stdio.h>

int findCube(int num);

int main()
{
    
    int result, input;
    
    printf("Enter any number:");
    scanf("%d", &input);
    
    result = findCube(input);
    
    printf("Cube is : %d\n", result);
    
    return 0;
    
    
}

int findCube(int n)
    {
        return n * n * n;
    }
