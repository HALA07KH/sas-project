#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{

    int Id;
    char nom[50];
    char prenom[50];
    int numeroMaillot;
    char poste[50];
    int age;
    int buts;

} joueur;

int conteur = 10;
joueur jr[200] = {
    {1, "Dybala", "Paulo", 7, "Attaquant", 39, 850},
    {2, "Hakimi", "Achraf", 2, "Defenseur", 26, 800},
    {3, "Noussair", "Mezraoui", 11, "Defenseur", 27, 400},
    {4, "Karim", "Benzima", 7, "Attaquant", 25, 200},
    {5, "Modric", "Luka", 10, "Milieu", 38, 100},
    {6, "Drogba", "Didier", 11, "Defenseur", 31, 250},
    {7, "De Bruyne", "Kevin", 17, "Milieu", 32, 150},
    {8, "Amrabet", "Soufiane", 4, "Milieu", 33, 50},
    {9, "Bounou", "Yassine", 1, "Gardien", 31, 0},
    {10, "Ziyech", "Hakim", 7, "Attaquant", 32, 80}};

void ajouter1joueur()
{
    getchar(); // pour consommer le caractere de nouvelle ligne restant dans le buffer
    printf("entrer un nom de joueur: ");
    scanf(" %s", jr[conteur].nom);
    printf("Name : %s\n", jr[conteur].nom);

    printf("entrer un prenom de joueur: ");
    getchar();
    scanf(" %s", jr[conteur].prenom);
    printf("Prenom : %s\n", jr[conteur].prenom);

    printf("entrer un numero de maillot : ");
    scanf("%d", &jr[conteur].numeroMaillot);
    printf("NmrMaillot: %d\n", jr[conteur].numeroMaillot);

    printf("entrer le poste du joueur : ");
    scanf(" %s", jr[conteur].poste);
    printf("Poste : %s\n", jr[conteur].poste);

    printf("entrer l'age du joueur: ");
    scanf("%d", &jr[conteur].age);
    printf("Age : %d\n", jr[conteur].age);

    printf("entrer le nombre de buts: ");
    scanf("%d", &jr[conteur].buts);
    printf("Buts : %d\n", jr[conteur].buts);

    jr[conteur].Id = rand() % 99999 + 10000;
    conteur++;
}

void plusieursjoueurs()
{

    int nbrefois;

    printf("nbrefois : ");
    scanf("%d", &nbrefois);

    for (int i = 0; i < nbrefois; i++)
    {

        printf("entrer un nom de joueur: ");
        scanf(" %s", jr[conteur].nom);
        printf("Name : %s\n", jr[conteur].nom);

        printf("entrer un prenom de joueur: ");
        scanf(" %s", jr[conteur].prenom);
        printf("Prenom : %s\n", jr[conteur].prenom);

        printf("entrer un numero de maillot : ");
        scanf("%d", &jr[conteur].numeroMaillot);
        printf("NmrMaillot: %d\n", jr[conteur].numeroMaillot);

        printf("entrer le poste du joueur : ");
        scanf(" %s", jr[conteur].poste);
        printf("Poste : %s\n", jr[conteur].poste);

        printf("entrer l'age du joueur: ");
        scanf("%d", &jr[conteur].age);
        printf("Age : %d\n", jr[conteur].age);

        printf("entrer le nombre de buts: ");
        scanf("%d", &jr[conteur].buts);
        printf("Buts : %d\n", jr[conteur].buts);

        jr[conteur].Id = rand() % 99999 + 10000;
        conteur++;
    }
}

void ajouterjoueur()
{
    int option;

    do
    {
        printf("11.ajouter1joueur\n12.plusieursjoueurs\n0.Quittter\nChoisir : ");
        scanf("%d", &option);

        switch (option)
        {
        case 11:
            ajouter1joueur();
            break;
        case 12:
            plusieursjoueurs();
            break;
        case 0:
            printf("Vous avez quitter\n");
            break;
        default:
            printf("option invalid\n");
            break;
        }
    } while (option != 0);
}

void afficherjoueur()
{
    int option;
    joueur temp;
    do
    {
        printf("13.Nom\n14.Age\n15.Post\n0.Quiter\nChoisir : ");
        scanf("%d", &option);
        for (int i = 0; i < conteur; i++)
        {
            for (int j = i + 1; j < conteur; j++)
            {

                switch (option)
                {
                case 13:
                    if (strcmp(jr[i].nom, jr[j].nom) > 0)
                    {
                        temp = jr[i];
                        jr[i] = jr[j];
                        jr[j] = temp;
                    }
                    break;

                case 14:
                    if (jr[i].age, jr[j].age > 0)
                    {
                        temp = jr[i];
                        jr[i] = jr[j];
                        jr[j] = temp;
                    }
                    break;
                case 15:
                    if (strcmp(jr[i].poste, jr[j].poste) > 0)
                    {

                        temp = jr[i];
                        jr[i] = jr[j];
                        jr[j] = temp;
                    }
                    break;
                }
            }
        }
        for (int i = 0; i < conteur; i++)
        {
            printf("Id: %d\n", jr[i].Id);
            printf("Nom: %s\n", jr[i].nom);
            printf("Prenom: %s\n", jr[i].prenom);
            printf("NmrMaillot: %d\n", jr[i].numeroMaillot);
            printf("Poste: %s\n", jr[i].poste);
            printf("Age: %d\n", jr[i].age);
            printf("Buts: %d\n", jr[i].buts);
            printf("*****************\n");
        }
    } while (option != 0);
}