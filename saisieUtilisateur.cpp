/*
-----------------------------------------------------------------------------------
Nom du fichier : saisieUtilisateur.cpp
Nom du labo    : HEIGVD-PRG1-CRIBLE
Auteur(s)      : Jérémie Métrailler, Nikola Bouattit
Date creation  : 10.11.2021

Description    : Fonction de saisie contrôlée. La saisie contrôlée
                 s'assure que la saisie corresponde exactement à ce qui est
                 attendu par le code appelant.

Remarque(s)    : Saisie contrôlée :
                 - Contrôle l'intégrité du buffer d'entrée après la saisie.
                 - Contrôle que la valeur soit dans les bornes (bornes comprises)
                 - Contrôle que le buffer ne contienne uniquement la saisie.
                 - L'affichage des bornes est ajouté au message de saisie.
                 - Si la borne inférieure ou gauche est plus grande que la borne
                   supérieure ou droite. Quitte le programme et affiche une
                   erreur d'assertion.

Modifications  : - Aucune depuis la création.

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/
#include <iostream>
#include <limits>
#include <string>
#include <cassert>
#include "saisieUtilisateur.h"
using namespace std;

int saisieControlee(int borneInf, int borneSup,
                    const string& MESSAGE_SAISIE,
                    const string& MESSAGE_ERREUR) {

   // Contrôle la cohérence des bornes
   assert(borneInf <= borneSup);

   bool erreur;
   int saisie;
   do {
      // Affiche le message de saisie ainsi que les bornes
      cout << MESSAGE_SAISIE << " [" << borneInf << "|" << borneSup << "] : ";
      cin  >> saisie;

      // Contrôle que la valeur soit dans les bornes
      erreur = cin.fail() or saisie <  borneInf or saisie >  borneSup;

      if (erreur) {
         cout << MESSAGE_ERREUR << endl;
         cin.clear();
      }
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Vider le buffer

   } while (erreur);

   return saisie;
}