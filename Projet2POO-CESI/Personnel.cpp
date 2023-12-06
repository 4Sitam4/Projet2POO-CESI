#include "Personnel.h"

NS_Comp_Personnel::Personnel::Personnel() {
}

NS_Comp_Personnel::Personnel::Personnel(System::String^ superieur, System::String^ adresse, System::String^ date_embauche) : NS_Comp_NomPrenom::NomPrenom::NomPrenom(System::String^ nom, System::String^ prenom){
	this->setSuperieur(superieur);
	this->setAdresse(adresse);
	this->setDateEmbauche(date_embauche);
}

System::String^ NS_Comp_Personnel::Personnel::getSuperieur() {
	return this->superieur;
}

System::String^ NS_Comp_Personnel::Personnel::getAdresse() {
	return this->adresse;
}

System::String^ NS_Comp_Personnel::Personnel::getDateEmbauche() {
	return this->date_embauche;
}

void NS_Comp_Personnel::Personnel::setSuperieur(System::String^) {
	this->superieur = superieur;
}

void NS_Comp_Personnel::Personnel::setAdresse(System::String^) {
	this->adresse = adresse;
}

void NS_Comp_Personnel::Personnel::setDateEmbauche(System::String^) {
	this->date_embauche = date_embauche;
}