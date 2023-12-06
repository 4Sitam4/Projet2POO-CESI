#include "Client.h"

using namespace NS_Comp_Client;

// Constructeur par défaut
Client::Client() {
    this->num = 0;
    this->adr_facture = "";
    this->adr_livraison = "";
    this->date_naiss = "";
    this->date_ach = "";
}

// Constructeur avec paramètres
Client::Client(System::String^ nom, System::String^ prenom, int num, System::String^ adr_facture, System::String^ adr_livraison, System::String^ date_naiss, System::String^ date_ach) {
    this->num = num;
    this->adr_facture = adr_facture;
    this->adr_livraison = adr_livraison;
    this->date_naiss = date_naiss;
    this->date_ach = date_ach;
}

// Getters
int Client::getNum() {
    return this->num;
}

System::String^ Client::get_adr_facture() {
    return this->adr_facture;
}

System::String^ Client::get_adr_livraison() {
    return this->adr_livraison;
}

System::String^ Client::get_date_naiss() {
    return this->date_naiss;
}

System::String^ Client::get_date_ach() {
    return this->date_ach;
}

// Setters
void Client::setNum(int num) {
    this->num = num;
}

void Client::set_adr_facture(System::String^ adr_facture) {
    this->adr_facture = adr_facture;
}

void Client::set_adr_livraison(System::String^ adr_livraison) {
    this->adr_livraison = adr_livraison;
}

void Client::set_date_naiss(System::String^ date_naiss) {
    this->date_naiss = date_naiss;
}

void Client::set_date_ach(System::String^ date_ach) {
    this->date_ach = date_ach;
}

// Destructeur
Client::~Client() {
    // Code de nettoyage, si nécessaire
}
