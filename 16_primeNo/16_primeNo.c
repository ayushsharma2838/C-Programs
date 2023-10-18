#include<stdio.h>

int main()
{
    int num,count=0;
    printf("Enter The Number: ");
    scanf("%d",&num);

    if (num==0)
    {
        printf("Enter The Valid Number: ");
    }
        
    else
    {
    for (int i = 1; i < num; i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    }
    if(count<=1)
    {
        printf("%d is prime no.",num);
    }
    else
    {
        printf("%d is not prime no.",num);
    }

    return 0;
}