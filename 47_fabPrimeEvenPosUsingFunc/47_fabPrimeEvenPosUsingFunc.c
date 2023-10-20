#include<stdio.h>

int fabonacci(int num)
{
    int n1 = 0, n2 = 1;
    printf(" Fabonacci Series: \n");
        for(int i = 1 ; i <=num;i++)
        {
            if(i==1)
            {
                printf("%d\n",n1);
            }
            else if (i==2)
            {
                printf("%d\n",n2);
            }
            else
            {
                int fab = n1+n2;
                printf("%d\n",fab);
                n1 = n2;
                n2 = fab;
            }
        }
    }

int primeNo(int num)
{
    int count=0;
    printf("Number is a prime or not: \n");
    for (int i = 1; i <=num; i++)
    {
        if (num%i==0)
        {
            count++;
        }
    }
    if (count<=2)
    {
        printf("%d is a prime number.\n",num);
    }
    else
    {
        printf("%d is not a prime number.\n",num);
    }
}

int evenOdd(int num)
{
    printf("Number is even or odd: \n");
    if (num%2==0)
    {
        printf("It is a even number.\n");
    }
    else
    {
        printf("It is a odd number.\n");
    }
}

int posNegNumber(int num)
{
    printf("Number Is Neagtive, Positive Or Zero: \n");
    if(num<0)
    {
        printf("It is negative number.\n");
    }
    else if (num>0)
    {
        printf("It is positive number.\n");
    }
    else
    {
        printf("It is zero.\n");
    }
    
}
    
int main()
{
    int num;
    printf("Enter The Number: ");
    scanf("%d",&num);
    fabonacci(num);
    primeNo(num);
    evenOdd(num);
    posNegNumber(num);

    return 0;
}