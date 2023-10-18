#include<stdio.h>

int main()
{
    int terms,n1=0,n2=1,temp=0;
    printf("Enter The Number Of Terms: ");
    scanf("%d",&terms);

    printf("Fabonacci Series: \n");
    if(terms==0)
    {
        printf("Enter Valid Number.");
    }
    else if (terms==1)
    {
        printf("%d",n1);
    }
    else if (terms==2)
    {
        printf("%d\n%d",n1,n2);
    }
    else
    {
        printf("%d\n%d\n",n1,n2);
        for (int i = 3; i <=terms; i++)
        {
            temp = n1+n2;
            n1=n2;
            n2=temp;
            printf("%d\n",temp);
        } 
    }
    
    return 0;
}