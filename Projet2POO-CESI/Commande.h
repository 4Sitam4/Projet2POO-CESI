/*
#pragma once
#include <vector>
#include "Article.h"
#include "Client.h"
#include "NomPrenom.h"

using namespace System::Collections::Generic;


namespace NS_Comp_Commande
{
	ref class Commande
	{
	private:
		System::String^ Reference;

		System::DateTime^ Date_envoie;
		System::DateTime^ Date_livraison;
        System::DateTime^ Date_paiement;
		System::String^ Moyen_Paiement;

		double Prix_Total_TVA;
		double Prix_Total_HT;

		List<Article^>^ produits;
		NS_Comp_Client::Client^ client;

    public:
        Commande(); // Constructor

        System::String^ get_ref();
        System::DateTime^ get_date_livraison();
        System::DateTime^ get_date_envoie();
        System::DateTime^ get_date_paiement();
        System::String^ get_moy_paiement();
        double get_prix_HT_tot();
        double get_total_TVA();

        void set_ref(System::String^ ref);
        void set_date_livraison(System::DateTime^ date_livraison);
        void set_date_envoie(System::DateTime^ date_envoie);
        void set_date_paiement(System::DateTime^ date_paiement);
        void set_moy_paiement(System::String^ moy_paiement);
        void set_prix_HT_tot(double prix_HT_tot);
        void set_total_TVA(double total_TVA);

        void calcul_prix_HT_total(); // Method to calculate total price before tax

        ~Commande(); // Destructor


	};
}

*/