#include "Personnel.h"
#include "PCH.h"

using namespace System::Data::SqlClient;

NS_Comp_Personnel::Personnel::Personnel() {
	this->oCad = gcnew NS_Comp_Data::cad();
	this->oMappTB = gcnew NS_Comp_Mappage::map();
	this->oMappTB1 = gcnew NS_Comp_Mappage::map();
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
//			  DataSet^
System::Data::DataSet^ NS_Comp_Personnel::Personnel::afficherPersonnel(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ superieur, System::String^ adresse, System::DateTime^ date_embauche, System::String^ dataTableName)
{
	System::String^ sql;
	this->oMappTB->setId(id);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setSuperieur(superieur);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setDateEmbauche(date_embauche);
	sql = this->oMappTB->SelectPersonnel();

	return this->oCad->getRows(sql, dataTableName);
}


void NS_Comp_Personnel::Personnel::supprimerPersonnel(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ superieur, System::String^ adresse, System::DateTime^ date_embauche) {

	System::String^ sql;
	this->oMappTB->setId(id);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setSuperieur(superieur);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setDateEmbauche(date_embauche);
	sql = this->oMappTB->DeletePersonnel();

	this->oCad->actionRows(sql);
}


void NS_Comp_Personnel::Personnel::modifierPersonnel(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ superieur, System::String^ adresse, System::DateTime^ date_embauche, System::String^ new_nom, System::String^ new_prenom, System::String^ new_superieur, System::String^ new_adresse, System::DateTime^ new_date_embauche) {

	System::String^ sql;
	this->oMappTB->setId(id);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setSuperieur(superieur);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setDateEmbauche(date_embauche);
	this->oMappTB1->setNom(new_nom);
	this->oMappTB1->setPrenom(new_prenom);
	this->oMappTB1->setSuperieur(new_superieur);
	this->oMappTB1->setAdresse(new_adresse);
	this->oMappTB1->setDateEmbauche(new_date_embauche);
	sql = this->oMappTB->UpdatePersonnel(this->oMappTB1->getNom(), this->oMappTB1->getPrenom(), this->oMappTB1->getSuperieur(), this->oMappTB1->getAdresse(), this->oMappTB1->getDateEmbauche());

	this->oCad->actionRows(sql);
}