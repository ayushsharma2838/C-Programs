#include<stdio.h>

int main()
{
    int total_rows;

    printf("ENter The Total ROws: ");
    scanf("%d",&total_rows);

    for (int rows = 1; rows <=total_rows; rows++)
    {
        for (int cols=1;cols<=total_rows-rows; cols++)
        {
            printf(" ");
        }
        for (int cols=1;cols<=rows; cols++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}