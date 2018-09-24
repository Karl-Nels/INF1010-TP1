/****************************************************************************************************/
/* Programme : TP1-Depenses.cpp                     						    */
/*                                                                       			    */
/* Objectif     : creer les classes et des differentes methodes  			            */
/*                                                                    				    */
/* Auteur    : Karl Nelson Somo 1859229 et Karl Dunkelmann 1893306 		                    */
/* Date      : 23/09/2018                            					            */
/****************************************************************************************************/


#include "depense.h"

Depense::Depense(): titre_("unknown"), montant_(0.0) {

}

Depense::Depense(string& titre, double montant): titre_(titre), montant_(montant) {

}

string Depense::getTitre() {
	
	return titre_;
}

double Depense::getMontant() {

	return montant_;
}

void Depense::setTitre(string& titre) {

	titre_ = titre;
}

void Depense::setMontant(double montant) {

	montant_ = montant;
}

void Depense::afficherDepense() {

	cout << "Achat: " << titre_ << " Prix : " << montant_ << endl;
}
