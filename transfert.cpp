/****************************************************************************************************/
/* Programme : TP1-Transfert.cpp                     						    */
/*                                                                       			    */
/* Objectif     : creer les classes et des differentes methodes  			            */
/*                                                                    				    */
/* Auteur    : Karl Nelson Somo 1859229 et Karl Dunkelmann 1893306 		                    */
/* Date      : 23/09/2018                            					            */
/****************************************************************************************************/

#include "transfert.h"


Transfert::Transfert(): montant_(0.0), donneur_(nullptr), receveur_(nullptr) {

}

Transfert::Transfert(double montant, Utilisateur* de, Utilisateur* pour): montant_(montant), donneur_(de)
,receveur_(pour){

}
Transfert::~Transfert() {

	delete donneur_;
	delete receveur_;
}

Utilisateur* Transfert::getDonneur() {

	return donneur_;
}

Utilisateur* Transfert::getReceveur() {

	return receveur_;
}

double Transfert::getMontant() {

	return montant_;
}

void Transfert::setDonneur(Utilisateur* donneur){

	donneur_ = donneur;
}

void Transfert::setReceveur(Utilisateur* receveur) {
	receveur_ = receveur;
}

void Transfert::setMontant(double montant) {

	montant_ = montant;
}

void Transfert::afficherTransfert() {

	cout << "Transfert fait par: " << donneur_ << "pour :" << receveur_ << "d'un montant de : " << montant_ << endl;
}
