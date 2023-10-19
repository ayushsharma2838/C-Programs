#include<stdio.h>

int main()
{
    int total_rows;
    printf("Enter The Rows: ");
    scanf("%d",&total_rows);

    for (int rows = 1; rows<=total_rows; rows++)
    {
        for (int cols = 1; cols<=total_rows+1-rows;cols++)
        {
            printf(" ");
        }
        for (int cols = 1; cols<=rows;cols++)
        {
            printf("%d",cols);
        }
        if(rows>=2)
        {
        for (int cols = rows-1; cols>=1;cols--)
        {
            printf("%d",cols);
        }
        }
        printf("\n");
    }
    return 0;
}