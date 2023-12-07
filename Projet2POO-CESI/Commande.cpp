#include "Commande.h"

using namespace NS_Comp_Commande;

// Constructor implementation
Commande::Commande()
{
    // Initialize default values
    this->Reference = "";
    this->Date_envoie = System::DateTime::Now;
    this->Date_livraison = System::DateTime::Now;
    this->Moyen_Paiement = "";
    this->Prix_Total_TVA = 0.0;
    this->Prix_Total_HT = 0.0;
    this->produits = gcnew List<Article^>();
    this->client = gcnew NS_Comp_Client::Client();
}

// Destructor implementation
Commande::~Commande()
{
    // Cleanup code if necessary, like deleting managed resources
}

// Getters
System::String^ Commande::get_ref() { return Reference; }
System::DateTime^ Commande::get_date_livraison() { return Date_livraison; }
System::DateTime^ Commande::get_date_envoie() { return Date_envoie; }
System::DateTime^ Commande::get_date_paiement() { return Date_paiement; }
// Assuming 'Moyen_Paiement', 'Prix_Total_TVA', and 'Prix_Total_HT' are the only other members with getters
System::String^ Commande::get_moy_paiement() { return Moyen_Paiement; }
double Commande::get_prix_HT_tot() { return Prix_Total_HT; }
double Commande::get_total_TVA() { return Prix_Total_TVA; }

// Setters
void Commande::set_ref(System::String^ ref) { Reference = ref; }
void Commande::set_date_livraison(System::DateTime^ date_livraison) { Date_livraison = date_livraison; }
void Commande::set_date_envoie(System::DateTime^ date_envoie) { Date_envoie = date_envoie; }
void Commande::set_date_paiement(System::DateTime^ date_paiement) { Date_paiement = date_paiement; }
void Commande::set_moy_paiement(System::String^ moy_paiement) { Moyen_Paiement = moy_paiement; }
void Commande::set_prix_HT_tot(double prix_HT_tot) { Prix_Total_HT = prix_HT_tot; }
void Commande::set_total_TVA(double total_TVA) { Prix_Total_TVA = total_TVA; }

// Note: The actual implementation may vary based on the complete class definition and the logic you need.


// Method to calculate total price before tax
void Commande::calcul_prix_HT_total()
{
    // Initialize total price before tax
	double total = 0.0;

	// Loop through all products in the order
    for (int i = 0; i < produits->Count; i++)
    {
		// Add the price of the current product to the total
		total += produits[i]->get_prix();
	}

	// Set the total price before tax
	Prix_Total_HT = total;
}