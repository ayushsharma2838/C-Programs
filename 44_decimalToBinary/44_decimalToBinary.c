#include<stdio.h>

int main()
{
    int num,bin=0,mul=1;
    printf("Enter The Number: ");
    scanf("%d",&num);

    while(num>0)
    {
        int rem = num%2;
        num/=2;
        bin = bin+rem*mul;
        mul*=10;
    }
    printf("Binary Number Is: %d",bin);
    
    return 0;
}