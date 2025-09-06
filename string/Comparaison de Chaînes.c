#include <stdio.h>
#include <string.h>
int main()
{
    char dest[100];
    char src[100];
    printf("give first string : ");
    scanf("%s",dest);
    printf("give second string : ");
    scanf("%s",src);
    int n = strcmp(dest,src);
    if (n == 0)
        printf("strings are equal");
    else if(n < 0)
        printf("first string is smaller");
    else if(n > 0)
        printf("first string is greater");
}