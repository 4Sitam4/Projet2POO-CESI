#include "Commande.h"

#include "PCH.h"


using namespace System::Data::SqlClient;


NS_Comp_Commande::Commande::Commande() {
    this->oCad = gcnew NS_Comp_Data::cad();
    this->oCad1 = gcnew NS_Comp_Data::cad();
    this->oCad2 = gcnew NS_Comp_Data::cad();
    this->oMapTB2 = gcnew NS_Comp_Mappage::map();
}


System::Data::DataSet^ NS_Comp_Commande::Commande::afficherArticle(System::String^ dataTableName) {

    System::String^ sql;
  
    sql = this->oMapTB2->SelectArticle();
    return this->oCad1->getRowsArticles(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Commande::Commande::afficherClientCommande(System::String^ dataTableName) {

    System::String^ sql;

    sql = this->oMapTB2->SelectClientCommande();
    return this->oCad2->getRowsClients(sql, dataTableName);
}


void NS_Comp_Commande::Commande::ajoutArticleCommande(System::String^ numArticle, System::String^ quantite) {
    System::String^ sql;

    this->oMapTB2->setRefProduit(numArticle);
    this->oMapTB2->setQuantite(quantite);


    sql = this->oMapTB2->InsertArticle();
    this->oCad->actionRows(sql);

}


void NS_Comp_Commande::Commande::creerCommande(System::String^ refCommande, System::DateTime^ dateEmission, System::String^ moyenPaiement, System::DateTime^ dateLivraison, System::String^ remise, System::String^ montantHT, System::String^ numClient) {
    System::String^ sql;

    this->oMapTB2->setRefCommande(refCommande);
    this->oMapTB2->setDateEmission(dateEmission);
    this->oMapTB2->setMoyenPaiement(moyenPaiement);
    this->oMapTB2->setDateLivraison(dateLivraison);
    this->oMapTB2->setRemise(remise);
    this->oMapTB2->setMontantHT(montantHT);
    this->oMapTB2->setNumClient(numClient);

    sql = this->oMapTB2->InsertCommande();
    //System::Windows::Forms::MessageBox::Show(sql);

    this->oCad->actionRows(sql);

}


System::Data::DataSet^ NS_Comp_Commande::Commande::afficherCommande(System::String^ id, System::String^ reference, System::DateTime^ dateEmission, System::String^ moyenPaiement, System::DateTime^ dateLivraison, System::String^ remise, System::String^ montantHT, System::String^ numClient, System::String^ dataTableName) {
    System::String^ sql;

    this->oMapTB2->setIdCommande(id);
    this->oMapTB2->setRefCommande(reference);
    this->oMapTB2->setDateEmission(dateEmission);
    this->oMapTB2->setMoyenPaiement(moyenPaiement);
    this->oMapTB2->setDateLivraison(dateLivraison);
    this->oMapTB2->setRemise(remise);
    this->oMapTB2->setMontantHT(montantHT);
    this->oMapTB2->setNumClient(numClient);

    sql = this->oMapTB2->SelectCommande();
    return this->oCad1->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Commande::Commande::afficherDetailCommande(System::String^ idCommande, System::String^ dataTableName) {
    System::String^ sql;
    
    this->oMapTB2->setIdCommande(idCommande);
    sql = this->oMapTB2->SelectLigneCommande();
    return this->oCad1->getRows(sql, dataTableName);


}

void NS_Comp_Commande::Commande::supprimerCommande(System::String^ idCommande) {
    System::String^ sql;

    this->oMapTB2->setIdCommande(idCommande);

    sql = this->oMapTB2->DeleteCommande();
    this->oCad->actionRows(sql);
}

