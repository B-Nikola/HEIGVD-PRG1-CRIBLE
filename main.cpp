/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Nom du labo : Labo 5 : reflex clavier
Auteur(s) : Bouatit Nikola et Métrailler Jérémie
Date creation : 19.11.2021
Description :
               Ce programme permet de générer et d'afficher la liste des nombres
               premiers compris de 1 à une valeur saisie par l'utilisateur
               Ensuite il y aura deux affichage le premier consistant a montrer
               la taille des tableaux générée avec 10 colonnes
               Deuxièmement le programme affiche de nouveau le tableau mais en
               ayant marquée les cases avec un charactere au emplacement ou se
               trouve les numéros premiers
               Finalement il y aura un texte affichant le nombre de chiffre
               premier trouver puis une liste de ces derniers
               Le programme ensuite se termine

Remarque(s) :


Compilateur : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/
#include <cstdlib>   // Nécéssaire pour le EXIT_SUCCESS
#include <iostream>  // Nécéssaire pour l'affichage dans la console
#include <limits>    // Nécéssaire pour vidage du buffer
#include "crible.h"
#include "affichageTableau.h"
#include "saisieUtilisateur.h"


using namespace std;
int main() {
    // Début de programme
    cout << "Bienvenue" << endl;


   const int      LIM_INFERIEUR = 2;
   const int      LIM_SUPERIEUR = 100;
   const int      NB_COLONNE    = 10;
   const string   MSG_SAISIE = "Veuiller rentrer le nombre de valeur a generer ";
   const string   MSG_ERREUR = "Erreur veuillez saisir une valeur comprise dans les "
                             "limites ";

   const unsigned int TAILLE_TABLEAU = (unsigned)saisieControlee( LIM_INFERIEUR,
                                                                  LIM_SUPERIEUR,
                                                                  MSG_SAISIE,
                                                                  MSG_ERREUR);

   int tabNbPremiers[TAILLE_TABLEAU];
   unsigned int taille = 0 ;

    //Criblage du tableau
   cribler( tabNbPremiers,
            taille,
            TAILLE_TABLEAU);

   //Affichage
   cout << "initialisation du tableau" << endl;
   afficherTableau(NB_COLONNE, TAILLE_TABLEAU);
   cout << endl<< "Criblage du tableau" << endl;
   afficherTableau(tabNbPremiers, TAILLE_TABLEAU, NB_COLONNE,'X');

   listerTableau(tabNbPremiers, taille);

    // fin de programme
    cout << "\nPresser ENTER pour quitter";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
 return EXIT_SUCCESS;
}