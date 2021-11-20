/*
-----------------------------------------------------------------------------------
Nom du fichier : saisieUtilisateur.h
Nom du labo    : HEIGVD-PRG1-CRIBLE
Auteur(s)      : Jérémie Métrailler, Nikola Bouattit
Date creation  : 19.11.2021

Description    : Fonctions de saisie contrôlée. La saisie contrôlée
                 s'assure que la saisie corresponde exactement à ce qui est
                 attendu par le code appelant.

Remarque(s)    : Supplément d'informations :
                 - Contrôle l'intégrité du buffer d'entrée après la saisie.
                 - L'affichage des bornes est ajouté au message de saisie.

Assertions     : (borneInf <= borneSup) uniquement saisies non- binaires :
                   Problème : La borne supérieure est plus grande que la borne
                              inférieure.
                   Solution : Contrôler l'ordre des bornes dans l'appel de la
                              fonction.
                 (borneGauche <= borneDroite) uniquement saisies non-binaires :
                   Problème : La borne droite est plus grande que la borne gauche.
                   Solution : Contrôler l'ordre des bornes dans l'appel de la
                              fonction.

Modifications  : n/a

Compilateur    : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#ifndef SAISIE_UTILISATEUR_H
#define SAISIE_UTILISATEUR_H

#include <string>

/**
 * @Nom                  : saisieControlee
 * @But                  : S'assure que la saisie soit dans les bornes (bornes
 *                         comprises) ou qu'elle corresponde à l'une des bornes et
 *                         qu'elle contienne uniquement ce qui est attendu.
 * @param borneInf       : Borne inférieure.
 * @param borneSup       : Borne supérieure.
 * @param MESSAGE_SAISIE : Message d'invite pour la saisie (l'affichage des bornes
 *                         se fait dans la fonction).
 * @param MESSAGE_ERREUR : Message à afficher en cas d'erreur.
 * @return               : Saisie contrôlée.
 */
int saisieControlee(int borneInf, int borneSup,
                    const std::string& MESSAGE_SAISIE,
                    const std::string& MESSAGE_ERREUR);

#endif