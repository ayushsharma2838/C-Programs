#include<stdio.h>

void average(int num1, int num2)
{
    int avg = (num1+num2)/2;
    
    printf("Average: %d",avg);
}

int main()
{
    int num1,num2;

    printf("Enter The Number 1: ");
    scanf("%d",&num1);

    printf("Enter The Number 2: ");
    scanf("%d",&num2);

    average(num1,num2);

    return 0;
}