#include<stdio.h>

int findsum(int a[],int num){

    int sum = 0;

    for(int i = 0; i < num; i++){

        sum += a[i];
    }

    return sum;

}

int main(){

    int num;

    printf("Enter array size:");
    scanf("%d",&num);

    int array[num];

    for(int i = 0; i < num; i++){

        printf("array[%d] =",i);
        scanf("%d",&array[i]);
    }

    int totalsum = findsum(array,num);

    printf("The sum of array: %d\n",totalsum);


    return 0;
}