#include <stdio.h>
int main()
{
    char str[100];
    printf("put string you want : ");
    fgets(str,100,stdin);
    printf("%s\n",str);
}