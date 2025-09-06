#include <stdio.h>
struct person
{
    char nom[100];
    char prenom[100];
    int age;
};

int main()
{
    int nb;
    struct person config[100];
    printf("how many persons you want to add : ");
    scanf("%d",&nb);
    for (int i = 0; i < nb; i++)
    {
        printf("%d - Nom: ", i + 1);
        scanf("%s", config[i].nom);

        printf("%d - Prenom: ", i + 1);
        scanf("%s", config[i].prenom);

        printf("%d - Age: ", i + 1);
        scanf("%d", &config[i].age);
    }

    printf("\n--- List of persons ---\n");
    for (int i = 0; i < nb; i++)
    {
        printf("%d - Nom: %s\n", i + 1, config[i].nom);
        printf("%d - Prenom: %s\n", i + 1, config[i].prenom);
        printf("%d - Age: %d\n", i + 1, config[i].age);
    }
    
}