#include "depense.h"

Depense::Depense(): titre_(" "), montant_(0.0) {

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
