/****************************************************************************************************/
/* Programme : TP1-Main.cpp                     						    */
/*                                                                       			    */
/* Objectif     : mettre en liens les differents programme, obtenir le resultat demandé             */
/*                                                                    				    */
/* Auteur    : Karl Nelson Somo 1859229 et Karl Dunkelmann 1893306 		                    */
/* Date      : 23/09/2018                            					            */
/****************************************************************************************************/

#include <iostream>
#include "groupe.h"
#include "depense.h"
#include "transfert.h"
#include "utilisateur.h"
#include <string>

using namespace std; 

int main(int argc, const char * argv[]) {
    cout << "\t \tBienvenue sur PolyCount " << endl << " *****************************************" << endl;
    // Creer un  groupe pour  6 depenses et 4 utilisateurs.
	string liste = "liste";
	Groupe groupe(liste,6, 4);
    
    // Creer 5 utlisateurs.
	Utilisateur utilisateur1(string("Chris"));
	Utilisateur utilisateur1(string("Val"));
	Utilisateur utilisateur1(string("Larissa"));
	Utilisateur utilisateur1(string("Michelle"));
	Utilisateur utilisateur1(string("Arthur"));
    
    //Creer 7 dépenses.
    Depense depense1()

    
    //ajouter les utilisateurs au groupe
    

    //ajouter les depenses au groupe
    

    
    //calculer le total du grouoe et de chaque utilisateur

    //Afficher  le groupe

    
    //Equilibrer les comptes

    //Afficher le groupe

   
    //terminer le programme correctement

}
