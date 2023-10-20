#include<stdio.h>

void factorial(int num)
{
    int fac =1;
    while (num>0)
    {
        fac*=num;
        num--;
    }
    printf("Factorial:\n%d",fac);
}

int main()
{
    int num;

    printf("Enter The Number: ");
    scanf("%d",&num);

    factorial(num);

    return 0;
}