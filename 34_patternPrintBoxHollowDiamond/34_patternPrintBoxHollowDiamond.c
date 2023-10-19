#include<stdio.h>

int main()
{
    int total_rows;

    printf("Enter The Rows: ");
    scanf("%d",&total_rows);

    for (int rows = 1; rows <=total_rows; rows++)
    {
        for (int cols=0;cols<=total_rows-rows; cols++)
        {
            printf("*");
        }
        for (int cols=1;cols<=2*rows-2; cols++)
        {
            printf(" ");
        }
        for (int cols=0;cols<=total_rows-rows; cols++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int rows = 1; rows <=total_rows; rows++)
    {
        for (int cols=1;cols<=rows; cols++)
        {
            printf("*");
        }
        for (int cols=1;cols<=2*total_rows-2*rows; cols++)
        {
            printf(" ");
        }
        for (int cols=1;cols<=rows; cols++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}