/*
-----------------------------------------------------------------------------------
Nom du fichier : crible.cpp
Nom du labo    : HEIGVD-PRG1-CRIBLE
Auteur(s)      : Jérémie Métrailler, Nikola Bouattit
Date creation  : 19.11.2021

Description    : Corps de la librairie crible. Il exisite dans le corps de cette librairie des fonctions qui ne sont
                 pas mise à disposition de l'utilisateur comme par exemple remplirTableau, chercherMutliple et
                 supprimerMultiple.

Remarque(s)    : Les fonctions listées précédemment ne sont pas mise à disposition de l'utilisateur car elles sont
                 spécifiques à cette librairie et cela n'aurait pas de sens et compliquerait la tâche de l'utilisateur
                 de les lui faire utiliser

Assertions     : n/a

Modifications  : n/a

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/
#include "crible.h"
#include <iostream>

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
 * @param taille    : Taille du tableau
 * @param pos       : Position de l'élément à supprimer
 */
void supprimerMultiple(int tab[], unsigned& taille, unsigned pos);

void cribler(int tabNbPremiers[], unsigned& taille, unsigned nbLimite) {
   // La capacité du tableau est égal au nombre limite - 1 car on commence à compter
   // à partir de 1 mais le tableau sera rempli à partir du nombre 2 car 1 est une
   // exception dans les nombre premiers
   const unsigned CAPACITE = nbLimite - 1;
   taille = CAPACITE; // le tableau est plein
   remplirTableau(tabNbPremiers, CAPACITE);

   unsigned pos = 0;
   for (int diviseur = 2; diviseur <= taille; ++diviseur) {
      while ( (pos = chercherMultiple(tabNbPremiers, taille, diviseur, pos)) != taille ) {
         supprimerMultiple(tabNbPremiers, taille, pos);
         ++pos; // chercher à partir de la position suivant celle trouvée
      }
      pos = 0; // réinitialisation de la position
   }

   for (int i = 0 ; i < taille; ++i) {
      std::cout << tabNbPremiers[i] << std::endl;
   }
}

void remplirTableau(int tab[], unsigned taille) {
   for (unsigned i = 0; i < taille; ++i) {
      tab[i] = i + 2; // On remplit le tableau en commençant par 2
   }
}


unsigned chercherMultiple(const int tab[], unsigned taille, int diviseur,
                          unsigned pos) {

   for ( ; pos < taille; ++pos) {
      if (diviseur != tab[pos] and tab[pos] % diviseur == 0) {
         return pos;
      }
   }
   return taille;

}

void supprimerMultiple(int tab[], unsigned& taille, unsigned pos) {
   if (pos < taille) {
      for (unsigned i = pos + 1; i < taille; ++i) {
         tab[i - 1] = tab[i];
      }
      --taille;
   }
}

