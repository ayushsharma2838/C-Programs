#include<stdio.h>

int main()
{
    int num;
    printf("Enter The Rows: ");
    scanf("%d",&num);

    for (int rows = 1; rows <=5; rows++)
    {
        for (int cols=1;cols<=5; cols++)
        {
            printf("%d ",5-cols+1);
        }
        printf("\n");
    }
    
    return 0;
}