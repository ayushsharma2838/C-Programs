#include<stdio.h>

int main()
{

    for (int rows = 1; rows <=5; rows++)
    {
        for (int cols=1;cols<=rows-1; cols++)
        {
            printf(" ");
        }
        for (int cols=rows;cols<=5; cols++)
        {
            printf("%d ",cols);
        }
        printf("\n");
    }
    
    return 0;
}