#include <stdio.h>
#include <string.h>


typedef struct{

    int Id;
    char nom[50];
    char prenom[50];
    int numeroMaillot;
    char poste[50];
    int age;
    int buts;

}joueur; 

void ajouterunjoueur();
void ajouter1joueur();
void plusieursjoueurs();
void afficherunjoueur();



joueur jr[200];
int conteur=0;



    
int main(){
    int option;
    
    do{
        printf("1.Ajouterunjoueur\n2.afficherunjoueur\n0.Quitter\nChoisir : ");
        scanf("%d",&option);

        switch(option){
            case 1:ajouterunjoueur();break;
            case 2:afficherunjoueur();break;
            case 0:printf("Vous avez quitter\n");break;
            default:printf("option invalid\n");break;
        }
    }while(option != 0);
}

void ajouterunjoueur(){
    int option;

do{
    printf("11.ajouter1joueur\n12.plusieursjoueurs\n0.Quittter\nChoisir : ");
    scanf("%d",&option);

    switch(option){
            case 11:ajouter1joueur();break;
            case 12:plusieursjoueurs();break;
            case 0:printf("Vous avez quitter\n");break;
            default:printf("option invalid\n");break;
        }
}while (option != 0);
}


void ajouter1joueur(){
    printf("entrer un nom de joueur: ");
    scanf("%s",jr[conteur].nom);
    printf("Name : %s",jr[conteur].nom);
    conteur++;
}
void plusieursjoueurs(){
int nbrefois;
    printf("nbrefois : ");
    scanf("%d",&nbrefois);
    for(int i=0;i<nbrefois;i++){
    printf("entrer un nom de joueur: ");
    scanf("%s",jr[conteur].nom);
    printf("Name : %s",jr[conteur].nom);
    conteur++;
}
}
void afficherunjoueur(){
    
    int option;
do{
    printf("13.Prenom\n14.Age\n15.Poste\n0.Quiter\nChoisir : ");
    scanf("%d",&option);
    for(int i=0;i<contour;i++) 
}while(option !=0);
    
        


}  
    


    

