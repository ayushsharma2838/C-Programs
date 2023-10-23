#include<stdio.h>

// C language Doesn't Support Function Overloading:

int add(int num1, int num2, int num3)
{
    return num1+num2+num3;
}
int add(int num1, int num2)
{
    return num1+num2;
}

int main()
{
    int num1,num2,num3;
    int func1 =add(1,2,3);
    int func2 =add(1,2);

    return 0;
}