#include <stdio.h>
#include <string.h>
int main()
{
    char src[100];
    char dest[100];
    char *resultat;
    printf("une chaîne de caractères principale : ");
    fgets(src,100,stdin);
    printf("une sous-chaîne : ");
    scanf(" %s",dest);
    resultat = strstr(src,dest);

    if (resultat != NULL) 
    {
    printf("Substring found at: %s", resultat); 
    }
    else
        printf("Substring not found.\n");
}