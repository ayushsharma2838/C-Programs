#include<stdio.h>

int main()
{
    int first_num,second_num, third_num;
    printf("Enter The First Number: ");
    scanf("%d",&first_num);
    printf("Enter The Second Number: ");
    scanf("%d",&second_num);
    printf("Enter The Second Number: ");
    scanf("%d",&third_num);

    if (first_num>second_num && first_num>third_num)
    {
        printf("First Number Is Greater The Second And Third Number.");
    }
    else if (second_num>first_num && second_num>third_num)
    {
        printf("Second Number Is Greater Than First And Third Number.");
    }
    else
    {
        printf("Third Number Is Greater The Second And First Number.");
    }
    
    return 0;
}