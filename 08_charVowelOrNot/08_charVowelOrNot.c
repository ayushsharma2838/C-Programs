#include<stdio.h>

int main()
{
    char alpha;
    printf("Enter The Character: ");
    scanf("%c",&alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
        printf("%c is vowel",alpha);
    }
    else
    {
        printf("%c is not vowel",alpha);
    }

    return 0;
}