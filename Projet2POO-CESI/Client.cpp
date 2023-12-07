#include "Client.h"
#include "PCH.h"


using namespace System::Data::SqlClient;


NS_Comp_Client::Client::Client() {
    this->oCad = gcnew NS_Comp_Data::cad();
    //this->oMappTB = gcnew NS_Comp_Mappage::map();
    this->oMapTB2 = gcnew NS_Comp_Mappage::map();
}


void NS_Comp_Client::Client::creerClient(System::String^ nom, System::String^ prenom, System::String^ adresse_facturation, System::DateTime^ date_naissance, System::DateTime^ date_premier_achat) {
    System::String^ sql;

    this->oMapTB2->setNom(nom);
    this->oMapTB2->setPrenom(prenom);
    this->oMapTB2->setAdresseFacturation(adresse_facturation);
    this->oMapTB2->setDateNaissance(date_naissance);
    this->oMapTB2->setDatePremierAchat(date_premier_achat);

    sql = this->oMapTB2->InsertClient();

    this->oCad->actionRows(sql);
}

