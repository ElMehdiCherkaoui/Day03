#include <stdio.h>
int counting_character_to_str(char c , char *dest)
{
    int counter = 0;
    int i = 0;
    while(dest[i])
    {
        if(dest[i] == c)
        {
            counter++;
        }
        i++;
    }
    return counter;
}
int main()
{
    char dest[100];
    char c;
    printf("give a string : ");
    fgets(dest,100,stdin);
    printf("character man you want ot check how many times that character appears in the string : ");
    scanf(" %c",&c);
    printf("times that character appears in the string is : %d",counting_character_to_str(c,dest));
}