#include<stdio.h>

int main()
{
    int count=0;

    for (int rows = 1; rows <=5; rows++)
    {
        for (int cols=1;cols<=5; cols++)
        {
            count++;
            printf("%d ",count);
        }
        printf("\n");
    }
    
    return 0;
}