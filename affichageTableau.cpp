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
const int ESPACE_AFFICHAGE = 3;

void afficherCase( const int ESPACE_AFFICHAGE,char charCase);

void afficherTableau(const int tab[], unsigned taille, unsigned nbColonne,
                     char charSpecial){
   int caseTableau = 0;
   if(nbColonne == 0)
   {
      for (int ligne = 1; ligne <= taille; ++ligne) {
         if (ligne == tab[caseTableau]) {
            afficherCase(ESPACE_AFFICHAGE, REPRESENTANT);
            ++caseTableau;
         } else {

            afficherCase(ESPACE_AFFICHAGE, charSpecial);
         }
      }
      std::cout << std::endl;
   }
   else {
      for (int ligne = 1; ligne <= taille;) {
         for (int colonne = 0; colonne < nbColonne; ++colonne) {
            if (ligne == tab[caseTableau]) {
               afficherCase(ESPACE_AFFICHAGE, REPRESENTANT);
               ++caseTableau;
            } else {
               afficherCase(ESPACE_AFFICHAGE, charSpecial);
            }
            ++ligne;

         }
         std::cout << std::endl;
      }
   }
}


void afficherTableau( unsigned taille, unsigned nbColonne){
   if(nbColonne == 0){
      for(int i =0;i<taille;++i){
         afficherCase(ESPACE_AFFICHAGE, REPRESENTANT);
      }
   }
   else {
      for (int ligne = 0; ligne < taille; ++ligne) {
         for (int colonne = 0; colonne < nbColonne; ++colonne) {
            afficherCase(ESPACE_AFFICHAGE, REPRESENTANT);
            ++ligne;
         }
         std::cout << std::endl;
      }
   }
}

void ecrireTableau(unsigned taille, const int tab[]) {
   for (unsigned int i = 0; i < taille; ++i) {
      std::cout << std::fixed <<std::left << std::setw(ESPACE_AFFICHAGE) << tab[i] << " ";
   }
}

void afficherCase( const int ESPACE_AFFICHAGE,char charCase){

   std::cout << std::fixed <<std::left << std::setw(ESPACE_AFFICHAGE) << charCase;
}
