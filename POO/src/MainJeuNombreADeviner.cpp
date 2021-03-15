/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 05/02/2021
// R�le du fichier: Contient le code jeu
// Nom des composants utilises: CPartie
//                              CJoueur
//                              iostream
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;

#include "../include/Partie.h"

int main()
{

    //Cr�ation d'un joueur1
    cout << "Vous allez jouer pour deviner un nombre secret" << endl;
    cout << "----------------------------------------------"<< endl;
    cout << "Veuillez entrer votre nom" << endl;
    string un_nom1;
    cin >> un_nom1;

    //Cr�ation d'un joueur2
    cout << "Vous allez jouer pour deviner un nombre secret" << endl;
    cout << "----------------------------------------------"<< endl;
    cout << "Veuillez entrer votre nom" << endl;
    string un_nom2;
    cin >> un_nom2;

    // Cr�ation du joueur
    CJoueur1 joueur1 (un_nom1);
    CJoueur2 joueur2 (un_nom2);

    cout << "----------------------------------------------"<< endl;
    cout << "Combien de parties voulez-vous jouer ?" << endl;
    int nbParties;
    cin >> nbParties;


    for (int i = 0; i <nbParties; i++)
    {
        cout << "----------------------------------------------"<< endl;
        cout <<"Partie Numero : " << i+1 << endl;
        cout << "----------------------------------------------"<< endl;

        CPartie partie (0,10,4); // nombre � deviner entre 0 et 10, nombre de tentatives maximum 4

        partie.Jouer(joueur1); // ex�cution d'une partie pour le joueur
        partie.Jouer(joueur2); // ex�cution d'une partie pour le joueur
    }


    cout << "----------------------------------------------"<< endl;
    cout << "Affichage des resultats du joueur1 "<< joueur1.Nom() << endl;
    cout << "----------------------------------------------"<< endl;

    // R�cup�ration des r�sultats du joueur
    int nbsucces, nbechecs, nbessais;
    float moy;
    joueur1.Resultats(nbsucces, nbechecs, nbessais);  // les param�tres sont pass�s par r�f�rence
    joueur1.moyenne(moy);
    // Affichage des r�sultats
    cout << "Nombre de parties gagnees : " << nbsucces << endl;
    cout << "Nombre de parties perdues : " << nbechecs << endl;
    cout << "Nombre de tentatives totales : " << nbessais << endl;
    cout << "Moyenne : " << moy << endl;

    cout << "----------------------------------------------"<< endl;

    cout << "----------------------------------------------"<< endl;
    cout << "Affichage des resultats du joueur2 "<< joueur2.Nom() << endl;
    cout << "----------------------------------------------"<< endl;

    // R�cup�ration des r�sultats du joueur
    joueur2.Resultats(nbsucces, nbechecs, nbessais);  // les param�tres sont pass�s par r�f�rence
    joueur2.moyenne(moy);
    // Affichage des r�sultats
    cout << "Nombre de parties gagnees : " << nbsucces << endl;
    cout << "Nombre de parties perdues : " << nbechecs << endl;
    cout << "Nombre de tentatives totales : " << nbessais << endl;
    cout << "Moyenne : " << moy << endl;

    cout << "----------------------------------------------"<< endl;


    return 0;
}

