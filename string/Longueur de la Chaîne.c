#include <stdio.h>
int mystrlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char str[100];
    printf("enter the string you want his length : ");
    fgets(str,100,stdin);
    printf("length is : %d" , mystrlen(str));
}