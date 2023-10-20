#include<stdio.h>

int main()
{
    int num,count=0;
    printf("Enter The Number: ");
    scanf("%d",&num);

    while(num>0)
    {
        count++;
        num/=10;
    }
    printf("%d Digits In This Number",count);

    return 0;
}