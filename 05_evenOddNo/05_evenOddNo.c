#include<stdio.h>

int main()
{
    int num;
    printf("Enter The  Number: ");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("It Is Even Number.");
    }
    else
    {
        printf("It Is Odd Number.");
    }
    
    return 0;
}