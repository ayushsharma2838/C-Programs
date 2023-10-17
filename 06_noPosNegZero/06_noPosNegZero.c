#include<stdio.h>

int main()
{
    int num;
    printf("Enter The  Number: ");
    scanf("%d",&num);

    if (num>0)
    {
        printf("It Is Positive Number.");
    }
    else if (num<0)
    {
        printf("It Is Negative Number.");
    }
    
    else
    {
        printf("It Is Zero.");
    }
    
    return 0;
}