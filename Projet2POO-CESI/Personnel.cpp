#include "Personnel.h"
#include "PCH.h"

using namespace System::Data::SqlClient;

NS_Comp_Personnel::Personnel::Personnel() {
	this->oCad = gcnew NS_Comp_Data::cad();
	this->oMappTB = gcnew NS_Comp_Mappage::map();
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
System::Data::DataSet^ NS_Comp_Personnel::Personnel::afficherPersonnel(System::String^ nom, System::String^ prenom, System::String^ superieur, System::String^ adresse, System::DateTime^ date_embauche, System::String^ dataTableName)
{
	System::String^ sql;
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setSuperieur(superieur);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setDateEmbauche(date_embauche);
	sql = this->oMappTB->SelectPersonnel();

	return this->oCad->getRows(sql, dataTableName);
}


void NS_Comp_Personnel::Personnel::supprimerPersonnel(System::String^ nom, System::String^ prenom, System::String^ superieur, System::String^ adresse, System::DateTime^ date_embauche) {

	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setSuperieur(superieur);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setDateEmbauche(date_embauche);
	sql = this->oMappTB->DeletePersonnel();

	this->oCad->actionRows(sql);
}