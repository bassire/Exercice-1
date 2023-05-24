import random

def main():
    pays = ["France", "Espagne", "Allemagne", "Italie", "Angleterre"]
    vie_joueur = 100
    force_joueur = 10
    pays_trouve = False
    essais = 3

    random.seed()  

    while essais > 0 and not pays_trouve:
    
        pays_selectionne = random.choice(pays)

        print("Bienvenue dans le jeu Trouver le Bon Pays !")
        print("Vous devez deviner le bon pays pour remporter le jeu.")

        
        print("Pays disponibles :", ", ".join(pays))

       
        pays_joueur = input("Entrez le nom du pays que vous pensez être le bon : ")

        
        if pays_joueur == pays_selectionne:
            print("Félicitations ! Vous avez trouvé le bon pays.")
            print("Vous remportez le jeu !")
            pays_trouve = True
        else:
            print("Dommage, le pays que vous avez choisi n'est pas le bon.")
            print("Vous perdez 10 points de vie.")
            vie_joueur -= 10

           
            if vie_joueur <= 0:
                print("Vous avez perdu. Votre aventure s'achève ici.")
                break

            print("Points de vie restants :", vie_joueur)
            print("------------------------")

            essais -= 1


    if pays_trouve:
        print("Félicitations ! Vous avez trouvé le bon pays et remporté le jeu !")
    else:
        print("Dommage, vous n'avez pas réussi à trouver le bon pays.")

    print("Merci d'avoir joué à Trouver le Bon Pays !")

if __name__ == "__main__":
    main()