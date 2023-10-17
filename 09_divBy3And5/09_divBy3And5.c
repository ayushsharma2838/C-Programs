#include<stdio.h>

int main()
{
    int  num;
    printf("Enter The Number: ");
    scanf("%d",&num);

    if (num%3==0 && num%5==0)
    {
        printf("It is prefect");
    }
    else
    {
        printf("It is not prefect");
    }

    return 0;
}