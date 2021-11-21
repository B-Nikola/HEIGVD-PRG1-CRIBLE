/*
-----------------------------------------------------------------------------------
Nom du fichier : affichage.cpp
Nom du labo    : HEIGVD-PRG1-CRIBLE
Auteur(s)      : Jérémie Métrailler, Nikola Bouattit
Date creation  : 19.11.2021

Description    : Les fonctions permettant l'affichage de la matrice basé sur un
                 tableau 1 dimension
Remarque(s)    : Seulement les tableaux a une seule dimension sont supporté

Assertions     : n/a

Modifications  : n/a

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include "affichageTableau.h"
#include <iostream>     //Nécessaire pour l'écriture dans la console
#include <iomanip>      //Nécessaire pour limiter l'affichage


const char REPRESENTANT = '0'; // Charactere pour l'affichage de la matrice


void afficherTableau( unsigned taille, const int tab[], unsigned nbColonne,
                     char charSpecial  ){
   int caseTableau = 0;
   const int ESPACE_AFFICHAGE = 3;

   for ( int  ligne = 1; ligne <= taille; ) {
      for (int colonne = 0; colonne < nbColonne; ++colonne) {
         if (ligne==tab[caseTableau] )
         {
            std::cout << std::fixed <<std::left << std::setw(ESPACE_AFFICHAGE) << REPRESENTANT ;
            ++caseTableau;
         }else{
            std::cout << std::fixed <<std::left << std::setw(ESPACE_AFFICHAGE) << charSpecial;
         }
         ++ligne;
      }
      std::cout << std::endl;
   }
}


void afficherTableau( unsigned taille, unsigned nbColonne){
   const int ESPACE_AFFICHAGE = 3;
   for ( int  ligne = 0; ligne < taille; ++ligne) {
      for (int colonne = 0; colonne < nbColonne; ++colonne) {
         std::cout << std::fixed <<std::left << std::setw(ESPACE_AFFICHAGE) << REPRESENTANT;
         ++ligne;
      }
      std::cout << std::endl;
   }
}

void listerTableau(unsigned taille, const int tab[]){
   std::cout << "il y a "<< taille << " nombres premiers qui sont : ";
   for (unsigned int i = 0; i < taille; ++i) {
      std::cout << tab[i] << " ";
   }
}
