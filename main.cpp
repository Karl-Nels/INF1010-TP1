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
/*    
    // Creer 5 utlisateurs.
	Utilisateur* utilisateur1 = new Utilisateur(string("Chris"));
	Utilisateur* utilisateur2 = new Utilisateur(string("Val"));
	Utilisateur* utilisateur3 = new Utilisateur(string("Larissa"));
	Utilisateur* utilisateur4 = new Utilisateur(string("Michelle"));
	Utilisateur* utilisateur5 = new Utilisateur(string("Arthur"));

    //Creer 7 dépenses.
	Depense *depense1 = new Depense(string("banane"), 18.91);
	Depense *depense2 = new Depense(string("pain"),7.98);
	Depense *depense3 = new Depense(string("oeuf"), 5.98);
	Depense *depense4 = new Depense(string("lait"), 3.99);
	Depense *depense5 = new Depense(string("eau"), 4.25);
	Depense *depense6 = new Depense(string("poulet"), 5.74);
	Depense *depense7 = new Depense(string("poisson"), 8.11);

    
    //ajouter les utilisateurs au groupe
    
	groupe.ajouterUtilisateur(utilisateur1);
	groupe.ajouterUtilisateur(utilisateur2);
	groupe.ajouterUtilisateur(utilisateur3);
	groupe.ajouterUtilisateur(utilisateur4);
	groupe.ajouterUtilisateur(utilisateur5);

    //ajouter les depenses au groupe
  
	groupe.ajouterDepense(depense1, utilisateur1);
	groupe.ajouterDepense(depense2, utilisateur2);
	groupe.ajouterDepense(depense3, utilisateur5);
	groupe.ajouterDepense(depense4, utilisateur4);
	groupe.ajouterDepense(depense5, utilisateur3);
	groupe.ajouterDepense(depense6, utilisateur2);
	groupe.ajouterDepense(depense7, utilisateur1);
    
    //calculer le total du grouoe et de chaque utilisateur

	groupe.calculerTotalDepenses();
    //Afficher  le groupe
	*/
    
    //Equilibrer les comptes

    //Afficher le groupe

   
    //terminer le programme correctement

}
