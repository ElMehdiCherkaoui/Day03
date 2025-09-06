#include <stdio.h>
struct book
{
    char titre[100];
    char auteur[100];
    int année;
};
void make_call_the_book(int n)
{
    int nb;
    struct book config[100];
    printf("how many books you want to add : ");
    scanf("%d",&nb);
    if(nb > 0 && n <= nb )
    {
    for (int i = 0; i < nb; i++)
    {
        printf("%d - titre: ", i + 1);
        scanf("%s", config[i].titre);

        printf("%d - auteur: ", i + 1);
        scanf("%s", config[i].auteur);

        printf("%d - année: ", i + 1);
        scanf("%d", &config[i].année);
    }
    printf("%d-titre : %s\n%d-auteur : %s\n%d-année : %d",n,config[n].titre,n,config[n].auteur,n,config[n].année);
    }
    else
    printf("there are no book to show");
}
int main()
{
    make_call_the_book(1);
}
