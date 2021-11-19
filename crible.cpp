/*
-----------------------------------------------------------------------------------
Nom du fichier : crible.cpp
Nom du labo    : HEIGVD-PRG1-CRIBLE
Auteur(s)      : Jérémie Métrailler, Nikola Bouattit
Date creation  : 19.11.2021

Description    :

Remarque(s)    :

Assertions     :

Modifications  : - Aucune depuis la création.

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/
#include "crible.h"

/**
 * @Nom             : remplirTableau
 * @But             : Remplit un tableau de nombre consécutifs en commençant par 2
 * @param tab       : Tableau à remplir
 * @param taille    : Taille du tableau à remplir
 */
void remplirTableau(int tab[], unsigned capacite);

/**
 * @Nom             : chercherMultiple
 * @But             : Rechercher le multiple du diviseur passé en paramètre
 * @param tab       : Tableau dans lequel chercher
 * @param taille    : Taille du tableau
 * @param diviseur  : Diviseur dont il faut chercher les multiples
 * @param pos       : Position du multiple
 * @return          : La position du multiple
 */
unsigned chercherMultiple(const int tab[], unsigned taille, int diviseur,
                      unsigned pos = 0);

/**
 * @Nom             : supprimerMultiple
 * @But             : Supprime tous les multiples d'un diviseur passé en paramètre
 *                    contenu dans un tableau
 * @param tab       : Tableau à parcourir
 * @param diviseur  : Diviseur permettant de supprimer tous ses mutliples
 */
void supprimerMultiple(int tab[], unsigned diviseur);

void cribler(unsigned capacite) {
   int tabNbPremiers[capacite];
   remplirTableau(tabNbPremiers, capacite);
   unsigned taille = capacite; // le tableau est plein

   unsigned pos = 0;
   for (int diviseur = 2; diviseur <= capacite; ++diviseur) {
      for (int i = 0; i < taille; ++i) {
         chercherMultiple(tabNbPremiers, taille, diviseur, pos);
      }
   }
}

void remplirTableau(int tab[], unsigned taille) {
   for (unsigned i = 2; i < taille; ++i) {
      tab[i] = i;
   }
}


unsigned chercherMultiple(const int tab[], unsigned taille, int diviseur,
                      unsigned pos) {

}

void supprimerMultiple(int tab[], unsigned diviseur) {

}

