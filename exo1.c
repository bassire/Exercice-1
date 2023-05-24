#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    // Variables
    char pays[5][20] = {"France", "Espagne", "Allemagne", "Italie", "Angleterre"};
    char paysJoueur[20];
    int vieJoueur = 100;
    int forceJoueur = 10;
    int paysTrouve = 0;
    int essais = 3;

    srand(time(NULL)); // Initialisation de la graine du générateur de nombres aléatoires

    // Boucle principale du jeu
    while (essais > 0 && !paysTrouve) {
        // Sélection d'un pays aléatoire
        int indicePays = rand() % 5;
        char paysSelectionne[20];
        strcpy(paysSelectionne, pays[indicePays]);

        // Affichage du message d'accueil
        printf("Bienvenue dans le jeu Trouver le Bon Pays !\n");
        printf("Vous devez deviner le bon pays pour remporter le jeu.\n");

        // Affichage des pays disponibles
        printf("Pays disponibles : France, Espagne, Allemagne, Italie, Angleterre\n");

        // Demande du pays au joueur
        printf("Entrez le nom du pays que vous pensez être le bon : ");
        scanf("%s", paysJoueur);

        // Vérification du pays choisi
        if (strcmp(paysJoueur, paysSelectionne) == 0) {
            printf("Félicitations ! Vous avez trouvé le bon pays.\n");
            printf("Vous remportez le jeu !\n");
            paysTrouve = 1;
        } else {
            printf("Dommage, le pays que vous avez choisi n'est pas le bon.\n");
            printf("Vous perdez 10 points de vie.\n");
            vieJoueur -= 10;

            // Vérification de l'état du joueur
            if (vieJoueur <= 0) {
                printf("Vous avez perdu. Votre aventure s'achève ici.\n");
                break;
            }

            printf("Points de vie restants : %d\n", vieJoueur);
            printf("------------------------\n");

            essais--;
        }
    }

    // Conclusion
    if (paysTrouve) {
        printf("Félicitations ! Vous avez trouvé le bon pays et remporté le jeu !\n");
    } else {
        printf("Dommage, vous n'avez pas réussi à trouver le bon pays.\n");
    }

    printf("Merci d'avoir joué à Trouver le Bon Pays !\n");

    return 0;
}