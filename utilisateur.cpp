#include "utilisateur.h"

Utilisateur::Utilisateur(): nom_(""), tailleTabDepense_(5),nombreDepenses_(0),totalDepense_(0.0) {

	listeDepenses_ = new Depense*[tailleTabDepense_];

	for (unsigned i = 0; i < tailleTabDepense_; i++)
		listeDepenses_[i] = nullptr;

}

Utilisateur::Utilisateur(string& nom): nom_(nom) {

}

Utilisateur::~Utilisateur() {

	for (unsigned i = 0; i < tailleTabDepense_; i++)
		listeDepenses_[i] = nullptr;

	delete[] listeDepenses_;
}

string Utilisateur::getNom() {


}

unsigned int Utilisateur::getNombreDepense() {
	
}

double Utilisateur::getTotal() {


}

void Utilisateur::setNom(string& nom) {
	
	nom_ = nom;
}

void Utilisateur::ajouterDepense(Depense* uneDepense) {


	if (listeDepenses_[tailleTabDepense_ - 1] != nullptr) {

		Depense** tmp = new Depense*[tailleTabDepense_];

		for (unsigned i = 0; i < tailleTabDepense_; i++)
			tmp[i] = listeDepenses_[i];

		tailleTabDepense_++;

		listeDepenses_ = new Depense*[tailleTabDepense_];

		for (unsigned i = 0; i < tailleTabDepense_ - 1; i++)
			tmp[i] = listeDepenses_[i];

		listeDepenses_[tailleTabDepense_ - 1] = uneDepense;

	}

}

void Utilisateur::calculerTotal() {

	for (unsigned i = 0; i < tailleTabDepense_; i++)
		totalDepense_ += listeDepenses_[i]->getMontant();
}

void Utilisateur::afficherUtilisateur() {

	cout << "Utilisateur :" << nom_ << " a depense pour un total de : " << totalDepense_ << endl;

}