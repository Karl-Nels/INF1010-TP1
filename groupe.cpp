#include "groupe.h"


Groupe::Groupe(): nom_(" "), totalDepenses_(0.0),
nombreDepenses_(0),nombreUtilisateurs_(0),tailleTabUtilisateurs_(5),
tailleTabDepenses_(10),comptes_(nullptr),nombreTransferts_(0){

	listeUtilisateurs_ = new Utilisateur*[tailleTabUtilisateurs_];

	for (unsigned i = 0; i < tailleTabUtilisateurs_; i++)
		listeUtilisateurs_[i] = nullptr;

	listeDepenses_ = new Depense*[tailleTabDepenses_];

	for (unsigned i = 0; i < tailleTabDepenses_; i++)
		listeDepenses_[i] = nullptr;

	listeTransferts_ = new Transfert*[nombreTransferts_];

	for (unsigned i = 0; i < nombreTransferts_; i++)
		listeTransferts_[i] = nullptr;

}

Groupe::Groupe(string& nom, unsigned int tailleTabDepenses, unsigned int tailleTabUtilisateurs):nom_(nom),
tailleTabDepenses_(tailleTabDepenses),tailleTabUtilisateurs_(tailleTabUtilisateurs) {

}

Groupe::~Groupe() {

}

string Groupe::getNom() {

	return nom_;
}

unsigned int Groupe::getNombreDepenses() {

	return nombreDepenses_;
}

double Groupe::getTotal() {

	return totalDepenses_;
}

void Groupe::setNom(string& nom) {

	nom_ = nom;
}

void Groupe::ajouterDepense(Depense* uneDepense, Utilisateur* payePar) {

	if (nombreDepenses_ == tailleTabDepenses_) {

		Depense** tmp_D = new Depense*[nombreDepenses_];

		for (unsigned i = 0; i < nombreDepenses_; i++)
			tmp_D[i] = listeDepenses_[i];

		tailleTabDepenses_ *= 2;

		listeDepenses_ = new Depense*[tailleTabDepenses_];

		for (unsigned i = 0; i < nombreDepenses_; i++)
			tmp_D[i] = listeDepenses_[i];
	}

	listeDepenses_[nombreDepenses_++] = uneDepense;
	payePar->ajouterDepense(uneDepense);
}

void Groupe::ajouterUtilisateur(Utilisateur* unUtilisateur) {

	if (nombreUtilisateurs_ == tailleTabUtilisateurs_) {

		Utilisateur** tmp_U = new Utilisateur*[nombreUtilisateurs_];

		for (unsigned i = 0; i < nombreUtilisateurs_; i++)
			tmp_U[i] = listeUtilisateurs_[i];

		tailleTabUtilisateurs_ *= 2;

		listeDepenses_ = new Depense*[tailleTabUtilisateurs_];

		for (unsigned i = 0; i < nombreUtilisateurs_; i++)
			tmp_U[i] = listeUtilisateurs_[i];
	}

	listeUtilisateurs_[nombreUtilisateurs_++] = unUtilisateur;


}

void Groupe::calculerTotalDepenses() {

	int totalDepense_ = 0;

	for (unsigned i = 0; i < tailleTabDepenses_; i++)
		totalDepense_ += listeDepenses_[i]->getMontant();

	double moyenne = totalDepense_ / nombreUtilisateurs_;

	for (unsigned i = 0; i < nombreUtilisateurs_; i++)
		comptes_[i] = listeUtilisateurs_[i]->getTotal() - moyenne;

}

void Groupe::equilibrerComptes(){

	//void identifierMin(double& min, unsigned int& posMin) {
		double min = 0.0, max = 0.0;
		int posMin, posMax = 0;

		for (unsigned i = 0; i < nombreUtilisateurs_; i++)
			if (comptes_[i] < min) {
				min = comptes_[i];
				posMin = i;
			}
	//}

	//void identifierMax(double& max, unsigned& posMax) {
		max = 0;
		for (unsigned i = 0; i < nombreUtilisateurs_; i++)
			if (comptes_[i] > max) {
				max = comptes_[i];
				posMax = i;
			}
	

	
	while (max != 0 || min != 0) {
		int j = 0;
		if (max >= min) {
			listeTransferts_[j]->setMontant(max);
			max += min;
			min = 0;
			listeTransferts_[j]->setDonneur(listeUtilisateurs_[posMax]);
			listeTransferts_[j]->setReceveur(listeUtilisateurs_[posMin]);
			
			for (unsigned i = 0; i < nombreUtilisateurs_; i++)
				if (comptes_[i] < min) {
					min = comptes_[i];
					posMin = i;
				}
				
		}

		else {
			listeTransferts_[j]->setMontant(max);
			min += max;
			max = 0;
			listeTransferts_[j]->setDonneur(listeUtilisateurs_[posMax]);
			listeTransferts_[j]->setReceveur(listeUtilisateurs_[posMin]);

			for (unsigned i = 0; i < nombreUtilisateurs_; i++)
				if (comptes_[i] > max) {
					max = comptes_[i];
					posMax = i;
				}	
		}

	}
}

void Groupe::afficherGroupe() {
	for (unsigned i = 0; i < nombreUtilisateurs_; i++) {
		listeUtilisateurs_[i]->afficherUtilisateur();
	}
}