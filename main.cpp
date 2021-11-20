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

               
Compilateur : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/
#include <cstdlib>
#include <iostream>
#include <limits>
#include "crible.h"
#include "saisieUtilisateur.h"

using namespace std;
int main() {
    // Début de programme
    cout << "Bienvenue" << endl;

    //Entrée user
   cribler(
      50
      );

    // fin de programme
    cout << "Presser ENTER pour quitter";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
 return EXIT_SUCCESS;
}