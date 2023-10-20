#include<stdio.h>

void printNo(int num)
{
    for (int i = 1; i <=num; i++)
    {
        printf("%d ",i);
    }
    
}

int main()
{
    int num;
    printf("Enter The Number: ");
    scanf("%d",&num);

    printNo(num);
}