#include<stdio.h>

int main()
{
    int table;
    printf("Enter The Number: ");
    scanf("%d",&table);

    for (int i = 0; i <=10; i++)
    {
        printf("%d * %d = %d\n",table, i, table*i );
    }
    
    return 0;
}