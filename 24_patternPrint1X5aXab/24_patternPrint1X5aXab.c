#include<stdio.h>

int main()
{
    int alpha ='a';

    for (int rows = 1; rows <=5; rows++)
    {
        for (int cols=1;cols<=rows; cols++)
        {
            printf("%c ",alpha);
        }
        printf("\n");
        alpha++;
    }
    
    return 0;
}