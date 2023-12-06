#include "Personnel.h"
#include "PCH.h"

using namespace System::Data::SqlClient;

NS_Comp_Personnel::Personnel::Personnel() {
	this->oCad = gcnew NS_Comp_Data::cad();
	this->oMappTB = gcnew NS_Comp_Mappage::map();
}
/*
NS_Comp_Personnel::Personnel::Personnel(System::String^ superieur, System::String^ adresse, System::String^ date_embauche, System::String^ nom, System::String^ prenom){
	this->oCad = gcnew NS_Comp_Data::cad();
	this->setSuperieur(superieur);
	this->setAdresse(adresse);
	this->setDateEmbauche(date_embauche);
	this->setNom(nom);
	this->setPrenom(prenom);

}*/

System::String^ NS_Comp_Personnel::Personnel::getSuperieur() {
	return this->superieur;
}

System::String^ NS_Comp_Personnel::Personnel::getAdresse() {
	return this->adresse;
}

System::DateTime^ NS_Comp_Personnel::Personnel::getDateEmbauche() {
	return this->date_embauche;
}

void NS_Comp_Personnel::Personnel::setSuperieur(System::String^) {
	this->superieur = superieur;
}

void NS_Comp_Personnel::Personnel::setAdresse(System::String^) {
	this->adresse = adresse;
}

void NS_Comp_Personnel::Personnel::setDateEmbauche(System::DateTime^) {
	this->date_embauche = date_embauche;
}


void NS_Comp_Personnel::Personnel::creerPersonnel(System::String^ nom, System::String^ prenom, System::String^ superieur, System::String^ adresse, System::DateTime^ date_embauche) {
	
	System::String^ sql;
	
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setSuperieur(superieur);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setDateEmbauche(date_embauche);
	sql = this->oMappTB->InsertPersonnel();

	this->oCad->actionRows(sql);

}