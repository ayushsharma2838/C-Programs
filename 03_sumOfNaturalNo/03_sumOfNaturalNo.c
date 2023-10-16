#include<stdio.h>

int main()
{
    int n;
    printf("Enter The n Natural Number: ");
    scanf("%d",&n);
    
    printf("Sum Of n Natural Numbers: %d\n",(n*(n+1))/2);

    return 0;
}