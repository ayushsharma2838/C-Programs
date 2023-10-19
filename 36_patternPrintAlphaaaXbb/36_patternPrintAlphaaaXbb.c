#include<stdio.h>

int main()
{
    int total_rows;

    printf("ENter The Total ROws: ");
    scanf("%d",&total_rows);

    for (int rows = 1; rows <=total_rows; rows++)
    {
        char name = 'a'+rows-1;
        for (int cols=1;cols<=rows; cols++)
        {
            printf("%c ",name);
        }
        printf("\n");
    }
    
    return 0;
}