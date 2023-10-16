#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter The First Number: ");
    scanf("%d",&a);
    printf("Enter The Second Number: ");
    scanf("%d",&b);

    printf("Addition: %d\n",a+b);
    printf("Subtraction: %d\n",a-b);
    printf("Multiplication: %d\n",a*b);
    printf("Division: %d\n",a/b);
    printf("Module: %d\n",a%b);

    return 0;
}