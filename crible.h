/*
-----------------------------------------------------------------------------------
Nom du fichier : crible.h
Nom du labo    : HEIGVD-PRG1-CRIBLE
Auteur(s)      : Jérémie Métrailler, Nikola Bouattit
Date creation  : 19.11.2021

Description    : Librairie permettant àl'utilisateur d'utiliser la méthode du crible d'Eratosthène afin de trouver les
                 les nombres premiers jusqu'au nombre qu'il aura spécifié

Remarque(s)    : Cette librairie ne met à disposition qu'une seule fonction afin de simplifier au plus la tâche de
                 l'utilisateur

Assertions     : n/a

Modifications  : n/a

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef HEIGVD_PRG1_CRIBLE_CRIBLE_H
#define HEIGVD_PRG1_CRIBLE_CRIBLE_H

/**
 * @Nom                   : cribler
 * @But                   : Remplir un tableau de nombre consécutif en començant par le chiffre 2 puis éléminier chaque nombre
 *                          qui ne sont pas des nombre premiers jusqu'au nombre limite passé en paramètre
 * @param tabNbPremeiers  : Tableau de nombres premiers
 * @param taille          : Taille du tableau de nombres premiers
 * @param nbLimite        : Nombre jusqu'au quel il faut trouver les nombre premiers
 *
 */
void cribler(int tabNbPremiers[], unsigned& taille, unsigned nbLimite);

#endif
