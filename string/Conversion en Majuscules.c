#include <stdio.h>
char *uppercase_str(char *str)
{
    int i;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return str;
}
int main()
{
    char str[100];
    printf("give string to conert it to uppercase : ");
    scanf(" %s",str);
    char *result = uppercase_str(str);
    printf("str is : %s \n" , result);
}