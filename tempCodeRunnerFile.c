void modifierjoueur()
{

    char demander[200];
    int trouver = 0;
    int conteur;
    int option;

    printf("entrer le nom du joueur :");
    scanf("%s", demander);

    for (int i = 0; i < conteur; i++)
    {
        if (strcmp(jr[i].nom, demander) == 0)
        {
            printf("Nom : %s\nprenom : %s\n", jr[i].nom, jr[i].nom);
            do
            {
                printf("16.Moifier poste\n17.Modifier age\n18.Modifier nbre de buts\0.Quitter\nChoisir : ");
                scanf("%d", &option);

                switch (option)
                {
                case 16:
                    printf("entrer le nouveau poste :");
                    scanf("%s", jr[i].poste);
                    printf("Poste : %s\n", jr[i].poste);
                    break;

                case 17:
                    printf("entrer un nouveau age :");
                    scanf("%d", &jr[i].nom);
                    printf("Age : %d\n", jr[i].age);
                    break;

                case 18:
                    printf("entrer le nouveau nbre de buts :");
                    scanf("%d", &jr[i].buts);
                    printf("Nbre buts: %s\n", jr[i].buts);
                    break;
                default:
                    printf("option invalid\n");
                    break;
                }

            } while (option != 0);

            printf("entrer le nouveau poste :");
            scanf("%s", jr[i].poste);
            printf("Poste : %s\n", jr[i].poste);

            printf("entrer un nouveau age :");
            scanf("%d", &jr[i].age);
            printf("Age : %d\n", jr[i].age);

            printf("entrer le nouveau nbre de buts :");
            scanf("%d", &jr[i].buts);
            printf("Nbre buts: %s\n", jr[i].buts);

            trouver = 1;
            break;
        }
    }
    if (trouver = 0)
        printf("joueur inexistant\n");
}
