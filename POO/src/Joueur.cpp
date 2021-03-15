/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: Joueur.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 05/02/2021
// Rôle du fichier: Contient le code des méthodes du joueur
// Nom des composants utilises:
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;
#include "../include/Joueur.h"

    // Nom :CJoueur  Constructeur
    // Rôle : Initialise toutes les informations du joueur.
    //        Le nombre de tentatives, de parties gagnées et de parties jouées seront à 0.
    // Paramètre d'entrée :
    //                  un_nom : le nom du joueur
    // Sortie : le joueur créé

    CJoueur1::CJoueur1(string un_nom1)
    {
        this->nom = un_nom1;
        this->nbPartiesGagnees1 = 0;
        this->nbPartiesJouees1=0;
        this->nbTentatives1=0;

    }
    CJoueur2::CJoueur2(string un_nom2)
    {
        this->nom = un_nom2;
        this->nbPartiesGagnees2 = 0;
        this->nbPartiesJouees2=0;
        this->nbTentatives2=0;

    }




    // Nom : MajResultats
    // Rôle : met à jour les informations d'un joueur
    // Paramètres d'entrée:
    //              - le nombre d'essais
    //              - gagne qui vaut true si le joueur a gagné, false sinon
    // Entrée/sortie :
    //              le joueur dont on met à jour les résultats


    void CJoueur1::MajResultats(int nbEssais, bool gagne)
    {
       this->nbTentatives1= this->nbTentatives1 + nbEssais;

       if (gagne == true)
            this->nbPartiesGagnees1 ++;

       this->nbPartiesJouees1++;
    }
    void CJoueur2::MajResultats(int nbEssais, bool gagne)
    {
       this->nbTentatives2= this->nbTentatives2 + nbEssais;

       if (gagne == true)
            this->nbPartiesGagnees2 ++;

       this->nbPartiesJouees2++;
    }

    // Nom : Resultats
    // Rôle : indique les résultats d'un joueur
    //        le nombre de parties gagnées, le nombre de parties perdues, le nombre d'essais total
    //        La fonction N'affiche PAS les informations à l'écran
    // Paramètres de sortie:
    //                      - le nombre de succès,
    //                      - le nombre d'échecs
    //                      - le nombre total d'essais
    // Entrée :
    //            -le joueur dont on veut les résultats

    void CJoueur1::Resultats(int& nbsucces, int& nbechec, int& nbessais)
    {
        nbsucces = this->nbPartiesGagnees1;
        nbechec = this->nbPartiesJouees1 - this->nbPartiesGagnees1;
        nbessais = this->nbTentatives1;

    }
    void CJoueur2::Resultats(int& nbsucces, int& nbechec, int& nbessais)
    {
        nbsucces = this->nbPartiesGagnees2;
        nbechec = this->nbPartiesJouees2 - this->nbPartiesGagnees2;
        nbessais = this->nbTentatives2;

    }

    void CJoueur1::moyenne(float& moy){
        float nbT = static_cast<float>( this->nbTentatives1 );
        float nbPJ = static_cast<float>( this->nbPartiesJouees1 );
        moy = nbT / nbPJ;

    }
    void CJoueur2::moyenne(float& moy){
        float nbT = static_cast<float>( this->nbTentatives2 );
        float nbPJ = static_cast<float>( this->nbPartiesJouees2 );
        moy = nbT / nbPJ;

    }


    // Nom :Nom
    // Rôle : retourne le nom du joueur
    // Paramètres d'entrée: le joueur dont on veut le nom
    // Valeur de retour : nom du joueur
    // Entrée : le joueur dont on veut le nom

    string CJoueur1::Nom()
    {

        return this->nom;
    }
    string CJoueur2::Nom()
    {

        return this->nom;
    }

