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
    {1, "Ronaldo", "Cristiano", 7, "Attaquant", 39, 850},
    {2, "Messi", "Lionel", 10, "Attaquant", 36, 800},
    {3, "Neymar", "Junior", 11, "Attaquant", 32, 400},
    {4, "Mbappe", "Kylian", 7, "Attaquant", 25, 200},
    {5, "Modric", "Luka", 10, "Milieu", 38, 100},
    {6, "Salah", "Mohamed", 11, "Attaquant", 31, 250},
    {7, "De Bruyne", "Kevin", 17, "Milieu", 32, 150},
    {8, "Van Dijk", "Virgil", 4, "Defenseur", 33, 50},
    {9, "Alisson", "Becker", 1, "Gardien", 31, 0},
    {10, "Kante", "N'Golo", 7, "Milieu", 32, 80}};

void ajouter1joueur()
{
    getchar(); // pour consommer le caractere de nouvelle ligne restant dans le buffer
    printf("entrer un nom de joueur: ");
    scanf(" %s", jr[conteur].nom);
    printf("Name : %s", jr[conteur].nom);
    

    printf("entrer un prenom de joueur: ");
    getchar();
    fgets(jr[conteur].prenom, sizeof(jr[conteur].prenom), stdin);
    printf("Prenom : %s", jr[conteur].prenom);

    printf("entrer un numero de maillot : ");
    scanf("%d", &jr[conteur].numeroMaillot);
    printf("NmrMaillot: %d", jr[conteur].numeroMaillot);

    printf("entrer le poste du joueur : ");
    fgets(jr[conteur].poste, sizeof(jr[conteur].poste), stdin);
    printf("Poste : %s", jr[conteur].poste);

    printf("entrer l'age du joueur: ");
    scanf("%d", &jr[conteur].age);
    printf("Age : %d", jr[conteur].age);

    printf("entrer le nombre de buts: ");
    scanf("%d", &jr[conteur].buts);
    printf("Buts : %d", jr[conteur].buts);

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
    fgets(jr[conteur].nom, sizeof(jr[conteur].nom), stdin);
    printf("Name : %s", jr[conteur].nom);

    printf("entrer un prenom de joueur: ");
    fgets(jr[conteur].prenom, sizeof(jr[conteur].prenom), stdin);
    printf("Prenom : %s", jr[conteur].prenom);

    printf("entrer un numero de maillot : ");
    scanf("%d", &jr[conteur].numeroMaillot);
    printf("NmrMaillot: %d", jr[conteur].numeroMaillot);

    printf("entrer le poste du joueur : ");
    fgets(jr[conteur].poste, sizeof(jr[conteur].poste), stdin);
    printf("Poste : %s", jr[conteur].poste);

    printf("entrer l'age du joueur: ");
    scanf("%d", &jr[conteur].age);
    printf("Age : %d", jr[conteur].age);

    printf("entrer le nombre de buts: ");
    scanf("%d", &jr[conteur].buts);
    printf("Buts : %d", jr[conteur].buts);

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

void afficherunjoueur()
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
            printf("-----------------------\n");
        }
    } while (option != 0);
}

int main()
{
    srand(time(NULL));
    int option;

    do
    {
        printf("**********Equipe de Football*********\n");

        printf("1.Ajouterjoueur\n2.afficherunjoueur\n0.Quitter\nChoisir : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            ajouterjoueur();
            break;
        case 2:
            afficherunjoueur();
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
