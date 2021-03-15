/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: Joueur.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 05/02/2021
// R�le du fichier: Contient le code des m�thodes du joueur
// Nom des composants utilises:
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;
#include "../include/Joueur.h"

    // Nom :CJoueur  Constructeur
    // R�le : Initialise toutes les informations du joueur.
    //        Le nombre de tentatives, de parties gagn�es et de parties jou�es seront � 0.
    // Param�tre d'entr�e :
    //                  un_nom : le nom du joueur
    // Sortie : le joueur cr��

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
    // R�le : met � jour les informations d'un joueur
    // Param�tres d'entr�e:
    //              - le nombre d'essais
    //              - gagne qui vaut true si le joueur a gagn�, false sinon
    // Entr�e/sortie :
    //              le joueur dont on met � jour les r�sultats


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
    // R�le : indique les r�sultats d'un joueur
    //        le nombre de parties gagn�es, le nombre de parties perdues, le nombre d'essais total
    //        La fonction N'affiche PAS les informations � l'�cran
    // Param�tres de sortie:
    //                      - le nombre de succ�s,
    //                      - le nombre d'�checs
    //                      - le nombre total d'essais
    // Entr�e :
    //            -le joueur dont on veut les r�sultats

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
    // R�le : retourne le nom du joueur
    // Param�tres d'entr�e: le joueur dont on veut le nom
    // Valeur de retour : nom du joueur
    // Entr�e : le joueur dont on veut le nom

    string CJoueur1::Nom()
    {

        return this->nom;
    }
    string CJoueur2::Nom()
    {

        return this->nom;
    }

