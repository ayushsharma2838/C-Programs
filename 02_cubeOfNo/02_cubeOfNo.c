#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    printf("Enter The Number: ");
    scanf("%d",&a);
    
    printf("Cube Of No: %d\n",a*a*a);
    printf("Using Math Function: \n");
    printf("Cube Of No.: %d\n",pow(a,3));

    return 0;
}