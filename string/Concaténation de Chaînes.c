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
    strcat(dest,src);
    printf("your strinf is : %s" ,dest);
}