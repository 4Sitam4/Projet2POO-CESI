#include "Client.h"
#include "PCH.h"


using namespace System::Data::SqlClient;


NS_Comp_Client::Client::Client() {
    this->oCad = gcnew NS_Comp_Data::cad();
    //this->oMappTB = gcnew NS_Comp_Mappage::map();
    this->oMapTB2 = gcnew NS_Comp_Mappage::map();
    this->oMapTB3 = gcnew NS_Comp_Mappage::map();
}



void NS_Comp_Client::Client::creerClient(System::String^ nom, System::String^ prenom, System::String^ adresse_facturation, System::String^ ville_facturation, System::String^ cp_facturation, System::String^ adresse_livraison, System::String^ ville_livraison, System::String^ cp_livraison, System::DateTime^ date_naissance, System::DateTime^ date_premier_achat) {
    System::String^ sql;

    this->oMapTB2->setNom(nom);
    this->oMapTB2->setPrenom(prenom);
    this->oMapTB2->setAdresseFacturation(adresse_facturation);
    this->oMapTB2->setVilleFacturation(ville_facturation);
    this->oMapTB2->setCPFacturation(cp_facturation);
    this->oMapTB2->setAdresseLivraison(adresse_facturation);
    this->oMapTB2->setVilleLivraison(ville_livraison);
    this->oMapTB2->setCPLivraison(cp_livraison);
    this->oMapTB2->setDateNaissance(date_naissance);
    this->oMapTB2->setDatePremierAchat(date_premier_achat);

    sql = this->oMapTB2->InsertClient();

    this->oCad->actionRows(sql);
}

void NS_Comp_Client::Client::modifierClient(System::String^ id, System::String^ new_nom, System::String^ new_prenom, System::String^ new_adresse_facturation, System::String^ new_ville_facturation, System::String^ new_cp_facturation, System::String^ new_adresse_livraison, System::String^ new_ville_livraison, System::String^ new_cp_livraison, System::DateTime^ new_date_naissance, System::DateTime^ new_date_achat) {
    System::String^ sql;

    this->oMapTB2->setId(id);
    this->oMapTB3->setNom(new_nom);
    this->oMapTB3->setPrenom(new_prenom);
    this->oMapTB3->setAdresseFacturation(new_adresse_facturation);
    this->oMapTB3->setVilleFacturation(new_ville_facturation);
    this->oMapTB3->setCPFacturation(new_cp_facturation);
    this->oMapTB3->setAdresseLivraison(new_adresse_livraison);
    this->oMapTB3->setVilleLivraison(new_ville_livraison);
    this->oMapTB3->setCPLivraison(new_cp_livraison);
    this->oMapTB3->setDateNaissance(new_date_naissance);
    this->oMapTB3->setDatePremierAchat(new_date_achat);
    sql = this->oMapTB2->UpdateClient(this->oMapTB3->getNom(), this->oMapTB3->getPrenom(), this->oMapTB3->getAdresseFacturation(), this->oMapTB3->getVilleFacturation(), this->oMapTB3->getCPFacturation(), this->oMapTB3->getAdresseLivraison(), this->oMapTB3->getVilleLivraison(), this->oMapTB3->getCPLivraison(), this->oMapTB3->getDateNaissance(), this->oMapTB3->getDatePremierAchat());

    this->oCad->actionRows(sql);
}


void NS_Comp_Client::Client::supprimerClient(System::String^ id) {
    System::String^ sql;

    this->oMapTB2->setId(id);

    sql = this->oMapTB2->DeleteClient(this->oMapTB2->getId());
    this->oCad->actionRows(sql);


}


System::Data::DataSet^ NS_Comp_Client::Client::afficherClient(System::String^ id, System::String^ nom, System::String^ prenom, System::String^ adresse_facturation, System::String^ ville_facturation, System::String^ cp_facturation, System::String^ adresse_livraison, System::String^ ville_livraison, System::String^ cp_livraison, System::DateTime^ date_naissance, System::DateTime^ date_premier_achat, System::String^ dataTableName) {
    
    System::String^ sql;
    this->oMapTB2->setId(id);
    this->oMapTB2->setNom(nom);
    this->oMapTB2->setPrenom(prenom);
    this->oMapTB2->setAdresseFacturation(adresse_facturation);
    this->oMapTB2->setVilleFacturation(ville_facturation);
    this->oMapTB2->setCPFacturation(cp_facturation);
    this->oMapTB2->setAdresseLivraison(adresse_livraison);
    this->oMapTB2->setVilleLivraison(ville_livraison);
    this->oMapTB2->setCPLivraison(cp_livraison);
    this->oMapTB2->setDateNaissance(date_naissance);
    this->oMapTB2->setDatePremierAchat(date_premier_achat);
    sql = this->oMapTB2->SelectClient();

    System::Windows::Forms::MessageBox::Show(sql);

    return this->oCad->getRows(sql, dataTableName);
}