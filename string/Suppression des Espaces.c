#include <stdio.h>
#include <string.h>
void delete_spaces(char *str , int size)
{
    int i = 0;
    int j;
    int new_size = 0;
    int count_spaces = 0;
    while(str[i])
    {
        if(str[i] == ' ')
        {
            j = i;
            while(j < size)
            {
                str[j] = str[j+1];
                j++;
            }
            count_spaces++;
        }
        i++;
    }
    i = size - count_spaces - 1;
    printf("your str after deleting spaces is : ");
    while(new_size != i)
    {
        printf("%c",str[new_size]);
        new_size++;
    }
    printf("\n");
}
int main()
{
    char str [100];
    printf("give the string : ");
    fgets(str,100,stdin);
    int a = strlen(str);

    delete_spaces(str , strlen(str));
}