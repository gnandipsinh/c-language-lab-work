#include<stdio.h>

int findlength(char str[]){

     int count = 0;
 
    for (int  i = 0; str[i] != '\0'; i++)
    {
       count++;
    }
    
  return count;

}


int main(){

    char num[50];
   
  

    printf("Enter any string :");
    scanf("%s",num);

    int length = findlength(num);

    printf("Length is : %d\n",length);


    return 0;
}