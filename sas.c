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
    {1, "Dybala", "Paulo", 7, "attaquant", 39, 850},
    {2, "Hakimi", "Achraf", 2, "defenseur", 26, 800},
    {3, "Noussair", "Mezraoui", 11, "defenseur", 27, 400},
    {4, "Karim", "Benzima", 7, "attaquant", 25, 200},
    {5, "Modric", "Luka", 10, "milieu", 38, 100},
    {6, "Drogba", "Didier", 11, "defenseur", 31, 250},
    {7, "De Bruyne", "Kevin", 17, "milieu", 32, 150},
    {8, "Amrabet", "Soufiane", 4, "milieu", 33, 50},
    {9, "Bounou", "Yassine", 1, "gardien", 31, 0},
    {10, "Ziyech", "Hakim", 7, "attaquant", 32, 80}};

void ajouter1joueur()
{

    printf("entrer un nom de joueur: ");
    scanf("%s",jr[conteur].nom);
    getchar(); // pour consommer le caractere de nouvelle ligne restant dans le buffer
    printf("Name : %s\n", jr[conteur].nom);

    printf("entrer un prenom de joueur: ");
    scanf("%s",jr[conteur].prenom);
    getchar();
    printf("Prenom : %s\n", jr[conteur].prenom);

    printf("entrer un numero de maillot : ");
    scanf("%d", &jr[conteur].numeroMaillot);
    getchar();
    printf("NmrMaillot: %d\n", jr[conteur].numeroMaillot);

    printf("entrer le poste du joueur : ");
    scanf("%s",jr[conteur].poste);
    getchar();
    printf("Poste : %s\n", jr[conteur].poste);

    do
    {

        printf("entrer l'age du joueur: ");
        scanf("%d", &jr[conteur].age);
        getchar();
        printf("Age : %dans\n", jr[conteur].age);

        if (16 > jr[conteur].age || jr[conteur].age >= 50)
        {
            printf("entrer l'age du joueur :  ");
            scanf("%d", &jr[conteur].age);
            getchar();
        }

    } while (16 < jr[conteur].age || jr[conteur].age <= 50);

    printf("entrer le nombre de buts: ");
    scanf("%d", &jr[conteur].buts);
    getchar();
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
        scanf("%s",jr[conteur].nom);
        getchar();
        printf("Name : %s\n", jr[conteur].nom);

        printf("entrer un prenom de joueur: ");
        scanf("%s",jr[conteur].prenom);
        getchar();
        printf("Prenom : %s\n", jr[conteur].prenom);

        printf("entrer un numero de maillot : ");
        scanf("%d", &jr[conteur].numeroMaillot);
        getchar();
        printf("NmrMaillot: %d\n", jr[conteur].numeroMaillot);

        printf("entrer le poste du joueur : ");
        scanf("%s",jr[conteur].poste);
        getchar();
        printf("Poste : %s\n", jr[conteur].poste);

        do
        {

            printf("entrer l'age du joueur: ");
            scanf("%d", &jr[conteur].age);
            getchar();
            printf("Age : %dans\n", jr[conteur].age);

            if (16 > jr[conteur].age || jr[conteur].age >= 50)
            {
                printf("entrer l'age du joueur :  ");
                scanf("%d", &jr[conteur].age);
                getchar();
            }

        } while (16 < jr[conteur].age || jr[conteur].age <= 50);

        printf("entrer le nombre de buts: ");
        scanf("%d", &jr[conteur].buts);
        getchar();
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
        printf("1.ajouter1joueur\n2.plusieursjoueurs\n0.Quittter\nChoisir : ");
        scanf("%d", &option);
        getchar();

        switch (option)
        {
        case 1:
            ajouter1joueur();
            break;
        case 2:
            plusieursjoueurs();
            break;
        case 0:
            printf("Vous avez quitter\n");
            break;
        default:
            printf("option invalid\n");
        }
    } while (option != 0);
}

void afficherjoueur()
{
    int option;
    joueur temp;
    do
    {
        printf("1.Nom\n2.Age\n3.Post\n0.Quiter\nChoisir : ");
        scanf("%d", &option);
        getchar();
        for (int i = 0; i < conteur; i++)
        {
            for (int j = i + 1; j < conteur; j++)
            {

                switch (option)
                {
                case 1:
                    if (strcmp(jr[i].nom, jr[j].nom) > 0)
                    {
                        temp = jr[i];
                        jr[i] = jr[j];
                        jr[j] = temp;
                    }
                    break;

                case 2:
                    if (jr[i].age > jr[j].age)
                    {
                        temp = jr[i];
                        jr[i] = jr[j];
                        jr[j] = temp;
                    }
                    break;
                case 3:
                    char poste[][50] = {"attaquant", "defenseur", "milieu", "guardien"};
                    for (int i = 0; i < 4; i++)
                    {
                        printf("%s: ", poste[i]);
                        for (int j = 0; j < conteur; j++)
                            if (strcmp(poste[i], jr[j].poste) == 0)
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
                    }
                    break;
                default:
                    printf("option invalid\n");
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

void modifierjoueur()
{

    char demander[200];
    int trouver = 0;
    int option;

    printf("entrer le nom du joueur :");
    scanf("%s", demander);
    getchar();

    for (int i = 0; i < conteur; i++)
    {
        if (strcmp(jr[i].nom, demander) == 0)
        {
            printf("Nom : %s\nprenom : %s\n", jr[i].nom, jr[i].nom);
            do
            {
                printf("1.Moifier poste\n2.Modifier age\n3.Modifier nbre de buts\0.Quitter\nChoisir : ");
                scanf("%d", &option);
                getchar();

                switch (option)
                {
                case 1:
                    printf("entrer le nouveau poste :");
                    fgets(jr[i].poste, sizeof(jr[i].poste), stdin);
                    getchar();
                    printf("Poste : %s\n", jr[i].poste);
                    break;

                case 2:
                    do
                    {

                        printf("entrer l'age du joueur: ");
                        scanf("%d", &jr[conteur].age);
                        getchar();
                        printf("Age : %dans\n", jr[conteur].age);

                        if (16 > jr[conteur].age || jr[conteur].age >= 50)
                        {
                            printf("entrer l'age du joueur :  ");
                            scanf("%d", &jr[conteur].age);
                            getchar();
                        }

                    } while (16 < jr[conteur].age || jr[conteur].age <= 50);
                    break;

                case 3:
                    printf("entrer le nouveau nbre de buts :");
                    scanf("%d", &jr[i].buts);
                    getchar();
                    printf("Nbre buts: %s\n", jr[i].buts);
                    break;
                default:
                    printf("option invalid\n");
                }

            } while (option != 0);

            printf("entrer le nouveau poste :");
            scanf("%s", jr[i].poste);
            getchar();
            printf("Poste : %s\n", jr[i].poste);

            printf("entrer un nouveau age :");
            scanf("%d", &jr[i].age);
            getchar();
            printf("Age : %d\n", jr[i].age);

            printf("entrer le nouveau nbre de buts :");
            scanf("%d", &jr[i].buts);
            getchar();
            printf("Nbre buts: %s\n", jr[i].buts);

            trouver = 1;
            break;
        }
    }
    if (trouver = 0)
        printf("joueur inexistant\n");
}

void supprimerjoueur()
{
    int id;
    int trouver = 0;

    printf("L'id de joueur que vous voulez supprimer :");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < conteur; i++)
    {
        if (jr[i].Id == id)
        {

            trouver = 1;
        }
        else if (trouver == 1)
        {
            jr[i - 1] = jr[i];
        }
    }

    if (trouver == 1)
    {
        conteur--;
    }

    if (trouver == 0)
        printf("%d du joueur non trouver\n", id);
}

void rechercherjoueur()
{
    int choix;
    printf("1.Rechercher par nom\n2.rechercher par ID\n0.quitter\nchoisir: ");
    scanf("%d", &choix);
    int trouver = 0;

    if (choix == 1)
    {
        char demander[200];

        printf("Nom du joueur a rechercher : ");
        scanf("%s", demander);
        getchar();

        for (int i = 0; i < conteur; i++)
        {
            if (strcmp(jr[i].nom, demander) == 0)
            {
                printf("joueur trouve\nNom : %s\nPrenom : %s\n", jr[i].nom, jr[i].prenom);
                trouver = 1;
            }
        }
    }
    else if (choix == 2)
    {
        int dmd;
        printf("l'id a rechercher : ");
        scanf("%d", &dmd);
        getchar();
        for (int i = 0; i < conteur; i++)
        {
            if (jr[i].Id == dmd)
            {
                printf("joueur trouve\nID : %d\nNom : %s\nPrenom : %s\n", jr[i].Id, jr[i].nom, jr[i].prenom);
                trouver = 1;
            }
        }
    }
    else if (choix == 0)
    {
        printf("Vous avez quitter\n");
        return;
    }
    else
    {
        printf("Choix invalid\n");
    }
    if (trouver == 0)
        printf("joueur introuvable\n");
}

void statistiques()
{
    int choix;

    printf("1.Nbre total du joueurs dans l'equipe\n2.L'age moyen des joueurs\n3.joueurs ayant marque beacoup de buts\n4.meilleur buteur\n5.Lejoueur le plus jeune et le plus ager\n0.Quitter\nChoisir : ");
    scanf("%d", &choix);

    printf("**********\n");

    switch (choix)
    {
    case 1:
        printf(" le nbre total du joueur est : %d\n ", conteur);
        break;

    case 2:
        int Somme = 0;
        float Moyenne;
        for (int i = 0; i < conteur; i++)
        {
            Somme += jr[i].age;
        }
        Moyenne = Somme / conteur;
        printf("%2.f", Moyenne);

    case 3:
        int buts;

        printf("nbre de buts a saisie :");
        scanf("%d", &buts);
        getchar();

        for (int i = 0; i < conteur; i++)
        {
            if (jr[i].buts > buts)
            {

                printf("joueurs ayant marque beacoup de buts : %d", jr[i].buts);
            }
        }
        break;

    case 4:
        int maxbuts = jr[0].buts;
        for (int i = 0; i < conteur; i++)
        {
            if (maxbuts < jr[i].buts)
                ;
            {

                maxbuts = jr[i].buts;
            }
        }
        for (int i = 0; i < conteur; i++)
        {
            if (jr[i].buts == maxbuts)
            {
                printf("Meilleur buteur :\n");
                printf(" %d\n", jr[i].Id);
                printf(" %s\n", jr[i].nom);
                printf("%s\n", jr[i].prenom);
                printf(" %d\n", jr[i].numeroMaillot);
                printf(" %s\n", jr[i].poste);
                printf(" %d\n", jr[i].age);
                printf(" %d\n", jr[i].buts);
                printf("*****************\n");
            }
        }
        break;
    case 5:
        int minage = jr[0].age;
        int maxage = jr[0].age;

        for (int i = 0; i < conteur; i++)
        {
            if (maxage < jr[i].age)
            {

                maxage = jr[i].age;
            }
            if (minage > jr[i].age)
            {

                minage = jr[i].age;
            }
        }
    }
    for (int i = 0; i < conteur; i++)
    {
        if (jr[i].age == maxage)
        {
            printf("Le joueur le plus age:\n");
            printf(" %d\n", jr[i].Id);
            printf(" %s\n", jr[i].nom);
            printf("%s\n", jr[i].prenom);
            printf(" %d\n", jr[i].numeroMaillot);
            printf(" %s\n", jr[i].poste);
            printf(" %d\n", jr[i].age);
            printf(" %d\n", jr[i].buts);
            printf("*****************\n");
        }
    }
    for (int i = 0; i < conteur; i++)
    {
        if (jr[i].age == minage)
        {
            printf("Le joueur le plus jeune:\n");
            printf(" %d\n", jr[i].Id);
            printf(" %s\n", jr[i].nom);
            printf("%s\n", jr[i].prenom);
            printf(" %d\n", jr[i].numeroMaillot);
            printf(" %s\n", jr[i].poste);
            printf(" %d\n", jr[i].age);
            printf(" %d\n", jr[i].buts);
            printf("*****************\n");
        }
    }
    break;
}

int main()
{
    srand(time(NULL));

    int option;

    do
    {
        printf("**********Equipe de Football*********\n");

        printf("1.Ajouterjoueur\n2.afficherjoueur\n3.modifierjoueur\n4.supprimerjoueur\n5.rechercherjoueur\n6.statistiques\n0.Quitter\nChoisir : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            ajouterjoueur();
            break;
        case 2:
            afficherjoueur();
            break;
        case 3:
            modifierjoueur();
            break;
        case 4:
            supprimerjoueur();
            break;
        case 5:
            rechercherjoueur();
            break;
        case 6:
            statistiques();
            break;

        case 0:
            printf("Vous avez quitter\n");
            break;
        default:
            printf("option invalid\n");
        }
    } while (option != 0);
    return 0;
}
