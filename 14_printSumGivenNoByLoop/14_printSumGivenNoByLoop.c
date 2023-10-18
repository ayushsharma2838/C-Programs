#include<stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter The Number: ");
    scanf("%d",&num);

    for (int i = 1; i <=num; i++)
    {
        sum = sum+i;
    }
    printf("Sum Of given Numbers: %d",sum);
    
    return 0;
}