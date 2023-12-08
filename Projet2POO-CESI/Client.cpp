#include "Client.h"
#include "PCH.h"


using namespace System::Data::SqlClient;


NS_Comp_Client::Client::Client() {
    this->oCad = gcnew NS_Comp_Data::cad();
    //this->oMappTB = gcnew NS_Comp_Mappage::map();
    this->oMapTB2 = gcnew NS_Comp_Mappage::map();
    this->oMapTB3 = gcnew NS_Comp_Mappage::map();
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

void NS_Comp_Client::Client::modifierClient(System::String^ id, System::String^ nouv_nom, System::String^ nouv_prenom, System::String^ nouv_adresse, System::DateTime^ nouv_date_naissance, System::DateTime^ nouv_date_achat) {
    System::String^ sql;

    this->oMapTB2->setId(id);
    this->oMapTB3->setNom(nouv_nom);
    this->oMapTB3->setPrenom(nouv_prenom);
    this->oMapTB3->setAdresseFacturation(nouv_adresse);
    this->oMapTB3->setDateNaissance(nouv_date_naissance);
    this->oMapTB3->setDatePremierAchat(nouv_date_achat);


    sql = this->oMapTB2->UpdateClient(this->oMapTB2->getId(), this->oMapTB3->getNom(), this->oMapTB3->getPrenom(), this->oMapTB3->getAdresseFacturation(), this->oMapTB3->getDateNaissance(), this->oMapTB3->getDatePremierAchat());

    System::Windows::Forms::MessageBox::Show(sql);

    this->oCad->actionRows(sql);
}


void NS_Comp_Client::Client::supprimerClient(System::String^ id) {
    System::String^ sql;

    this->oMapTB2->setId(id);

    sql = this->oMapTB2->DeleteClient(this->oMapTB2->getId());
    this->oCad->actionRows(sql);


}


System::Data::DataSet^ NS_Comp_Client::Client::afficherClient(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ adresse, System::DateTime^ date_naissance, System::DateTime^ date_premier_achat, System::String^ dataTableName) {
    
    System::String^ sql;
    this->oMapTB2->setId(id);
    this->oMapTB2->setNom(nom);
    this->oMapTB2->setPrenom(prenom);
    this->oMapTB2->setAdresseFacturation(adresse);
    this->oMapTB2->setDateNaissance(date_naissance);
    this->oMapTB2->setDatePremierAchat(date_premier_achat);
    sql = this->oMapTB2->SelectClient();

    System::Windows::Forms::MessageBox::Show(sql);

    return this->oCad->getRows(sql, dataTableName);
}