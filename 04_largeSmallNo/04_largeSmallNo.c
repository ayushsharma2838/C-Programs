#include<stdio.h>

int main()
{
    int first_num,second_num;
    printf("Enter The First Number: ");
    scanf("%d",&first_num);
    printf("Enter The Second Number: ");
    scanf("%d",&second_num);

    if (first_num>second_num)
    {
        printf("First Number Is Greater The Second Number.");
    }
    else
    {
        printf("Second Number Is Greater The First Number.");
    }
    
    return 0;
}