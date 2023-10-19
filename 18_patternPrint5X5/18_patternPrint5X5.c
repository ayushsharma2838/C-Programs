#include<stdio.h>

int main()
{
    int rows,columns,num;
    printf("Enter The Number: ");
    scanf("%d",&num);
    printf("Enter The Rows & Columns: ");
    scanf("%d%d",&rows,&columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j=0;j<columns;j++)
        {
            printf("%d ",num);
        }
        printf("\n");
    }
    
    return 0;
}