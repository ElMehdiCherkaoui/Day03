#include <stdio.h>
struct student
{
    char name[100];
    char surname[100];
    int grades[100];
};
int main()
{
    struct student config[100];
    int nb_student;
    int how_many_grades;
    printf("how many persons you want to add : ");
    scanf("%d",&nb_student);
    for(int i = 0;i <nb_student;i++)
    {
        printf("%d - Nom: ", i + 1);
        scanf("%s", config[i].name);

        printf("%d - Prenom: ", i + 1);
        scanf("%s", config[i].surname);

        printf("how much grades you want to add to him ? :");
        scanf("%d", &how_many_grades);
        for(int j = 0 ; j < how_many_grades ; j++)
        {
            printf("%d - grade : ",j+1);
            scanf("%d" , &config[i].grades[j]);
        }
    }

    printf("\n--- List of students ---\n");
    for (int i = 0; i < nb_student; i++)
    {
        printf("\n%d - Nom: %s\n", i + 1, config[i].name);
        printf("%d - Prenom: %s\n", i + 1, config[i].surname);
        printf("\nson notes : \n");
        for(int j = 0 ; j < how_many_grades ; j++)
        {
        printf("%d - grades: %d\n", j + 1, config[i].grades[j]);
        }
    }
}
    

