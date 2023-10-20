#include<stdio.h>

int main()
{
    int num,pre_num,i;
    printf("Enter The Number: ");
    scanf("%d",&num);

    for (i = 1; i<=num; i++)
    {
        pre_num =i*i;
        if(pre_num==num)
        {
            printf("%d is prefect square of %d",pre_num,i);
            break;
        }
    }
    if(i>num)
    {
        printf("It is not a prefect square.");
    }
    return 0;
}