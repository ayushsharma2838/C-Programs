#include<stdio.h>
int main()
{
    int num,bin=0,mul=1;
    printf("Enter The Binary Number: ");
    scanf("%d",&num);

    while (num>0)
    {
        int rem =num%10;
        num/=10;
        bin = bin+rem*mul;
        mul*=2;
    }
    printf("Decimal Is: %d",bin);
    
    return 0;
}