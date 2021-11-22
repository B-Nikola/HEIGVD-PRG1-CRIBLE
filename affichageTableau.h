/*
-----------------------------------------------------------------------------------
Nom du fichier : affichageTableau.h
Nom du labo    : HEIGVD-PRG1-CRIBLE
Auteur(s)      : Jérémie Métrailler, Nikola Bouattit
Date creation  : 19.11.2021

Description    : Librairie permettant d'afficher les contenue d'un tableau

Remarque(s)    : Cette librairie a été spécifiquement péparer pour la lecture de
                 tableau contenant des valeurs numériques comme des chiffre premiers

Assertions     : n/a

Modifications  : n/a

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef HEIGVD_PRG1_CRIBLE_AFFICHAGETABLEAU_H
#define HEIGVD_PRG1_CRIBLE_AFFICHAGETABLEAU_H

/**
 * Affiche une matrice ou pour chaque valeur du tableau fournis le signale par un
 * charactere spécial
 * @param tab Tableau a fournir
 * @param taille Taille du tableau
 * @param nbColonne Nombre de colonne pour l'affichage
 * @param charSpecial Charactere spéciale pour signaler une valeur égale au tableau
 */
void afficherTableau(const int tab[], unsigned taille, unsigned nbColonne = 10,
                      char charSpecial = 'X');
/**
 * Affiche une matrice d'une certaine taille et colonne
 * @param taille Taille de la matrice a générée
 * @param nbColonne nombre de colonne (par défaut 10)
 */
void afficherTableau(unsigned taille, unsigned nbColonne=10);
/**
 * Affiche tous les élément contenue dans un tableau
 * @param tab Tableau de donnée a lire
 * @param taille Nombre d'élément actuellement dans le tableau
 */
void ecrireTableau(unsigned taille, const int tab[]);



#endif //HEIGVD_PRG1_CRIBLE_AFFICHAGETABLEAU_H
