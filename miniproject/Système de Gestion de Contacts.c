#include <stdio.h>
#include <string.h>
struct contact
{
    char names[100];
    int phonenumber;
    char email[200];
};
int main()
{
    int exit = 1;
    int choix;
    int contacts = 0;
    int modify_int;
    int supprimer_index;
    int check;
    char recherch_contact[100];
    struct contact config[100];
    while(exit == 1)
    {
        printf("\n1. Ajouter un Contact\n");
        printf("2. Modifier un Contact\n");
        printf("3. Supprimer un Contact\n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contact\n");
        printf("6-exit\n");
        printf("choix : ");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
            printf("\n%d_contact : ", contacts + 1);
            scanf("%s", config[contacts].names);
            printf("%d_number : ", contacts + 1);
            scanf("%d", &config[contacts].phonenumber);
            printf("%d_email : ", contacts + 1);
            scanf("%s", config[contacts].email);
            contacts++;
            break;
        case 2:
            printf("\nmodifier les informations d'un contact existant : ");
            for(int i = 0;i < contacts;i++)
            {
                printf("%d-contact : %s \n",i,config[i].names);
            }
            printf("modifier les informations d'un contact existant : ");
            scanf("%d",&modify_int);
            printf("new phonenumber : ");
            scanf("%d",&config[modify_int].phonenumber);
            printf("new email : ");
            scanf("%s", config[modify_int].email);
            break;
case 3:
    printf("\nContact à supprimer :\n");

    if (contacts == 1)
    {
        printf("there is only 1 contact you cant delete it.\n");
        break;
    }
    for (int i = 0; i < contacts; i++)
    {
        printf("%d - Contact : %s\n", i, config[i].names);
    }

    printf("Index du contact à supprimer : ");
    scanf("%d", &supprimer_index);


    for (int i = supprimer_index; i < contacts - 1; i++)
    {
        strcpy(config[i].names, config[i + 1].names);
        config[i].phonenumber = config[i + 1].phonenumber;
        strcpy(config[i].email, config[i + 1].email);
    }

    contacts--;
    break;

        case 4:
            printf("\n------contacts----- \n");
            for(int i = 0 ; i < contacts ; i++)
            printf("%d - name : %s , phonenumber : %d , email : %s\n",i+1,config[i].names,config[i].phonenumber,config[i].email);
            break;
        case 5:
            printf("\nenter contact you want to search for : ");
            scanf("%s",recherch_contact);
            for(int i = 0 ; i < contacts ; i++)
            {
                check = strcmp(config[i].names, recherch_contact);
                if (check == 0)
                {
                    printf("%d - name : %s , phonenumber : %d , email : %s\n",i+1,config[i].names,config[i].phonenumber,config[i].email);
                }

                check = 1;
            }  
            if(check == 1)
                printf("not found ");
            break;
            case 6:
                exit = 0;

        
        default:
            break;
        }

    }
}