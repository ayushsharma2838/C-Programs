#include<stdio.h>

int main()
{
    int total_rows;

    printf("Enter The Rows: ");
    scanf("%d",&total_rows);

    for (int rows = 1; rows <=total_rows; rows++)
    {
        for (int cols= 1; cols<=total_rows-rows; cols++)
        {
            printf(" ");
        }
        for (int cols=rows;cols>=1; cols--)
        {
            printf("%d",cols);
        }
        printf("\n");
    }
    
    return 0;
}