#include <stdio.h>
#include <stdlib.h>

int sizeFile(FILE* fichier)
{
    int nbr = 0;
    char chaine[1000] = "";
    while(fgets(chaine, 1000, fichier) != NULL)
    {
        nbr++;
    };

    return nbr;
}

int main(int argc, char* argv[])
{
    printf("Bienvenue dans le pendu\n");

    FILE* fichier = NULL;
    char chaine[1000] = "";

    fichier = fopen("dictionnaire.txt", "r");
    int nbrDeMot = sizeFile(fichier);
    printf("%d\n", nbrDeMot);

    if(fichier != NULL) {

        fgets(chaine, 1000, fichier);
        printf("%s", chaine);

    } else {

        printf("impossible de lire le fichier");

    };

    return 0;

}