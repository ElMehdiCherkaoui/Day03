#include <stdio.h>
#include <string.h>
int main()
{
    char dest[100];
    printf("give string you want to be reversed : ");
    scanf("%s",dest);
    int length = strlen(dest);
    while(length >= 0)
    {
        printf("%c",dest[length]);
        length--;
    }
}