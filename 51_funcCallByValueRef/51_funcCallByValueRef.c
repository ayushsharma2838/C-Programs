#include<stdio.h>

void value(int y) // Call By Value
{
    y = 50;
}
void refrence(int* z) // Call By Refrence
{
    *z = 50;
}
int main()
{
    int a =10;
    value(a); // Call By Value.
    printf("Call By Value %d\n",a);
    refrence(&a); // Call By Refrence
    printf("Call By Refrence %d\n",a);

    return 0;
    
}