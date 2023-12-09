#include "Statistique.h"

NS_Comp_Statistique::Statistique::Statistique()
{
	oCad=gcnew NS_Comp_Data::cad();
}

System::String^ NS_Comp_Statistique::Statistique::calcPanierMoyen() {


	// Panier moyen depuis la premiere vente jusqu'à maintenant
	this->sql = "SELECT ROUND(AVG(montant_ttc),2) FROM Commande;";
	return this->oCad->getStats(this->sql);
}

System::Data::DataSet^ NS_Comp_Statistique::Statistique::calcSeuilReappro(System::String^ table) {

	// Seuil de réapprovisionnement
	this->sql = "SELECT * FROM [projetPOO].[dbo].[Catalogue] WHERE [quantite] < [stock_min];";
	return this->oCad->getRows(this->sql, table);
}


System::String^ NS_Comp_Statistique::Statistique::calcChiffreAffaireMois(System::String^ mois, System::String^ annee) {

	if (mois == "Janvier") {
		this->setMois("1");
	}
	if (mois == "Février") {
		this->setMois("2");
	}
	if (mois == "Mars") {
		this->setMois("3");
	}
	if (mois == "Avril") {
		this->setMois("4");
	}
	if (mois == "Mai") {
		this->setMois("5");
	}
	if (mois == "Juin") {
		this->setMois("6");
	}
	if (mois == "Juillet") {
		this->setMois("7");
	}
	if (mois == "Août") {
		this->setMois("8");
	}
	if (mois == "Septembre") {
		this->setMois("9");
	}
	if (mois == "Octobre") {
		this->setMois("10");
	}
	if (mois == "Novembre") {
		this->setMois("11");
	}
	if (mois == "Décembre") {
		this->setMois("12");
	}
	// CA 

	this->sql = "SELECT SUM(montant_ht) FROM Commande WHERE MONTH(date_emission) = " + this->mois + " AND YEAR(date_emission) = " + annee + ";";



	return this->oCad->getStats(this->sql);
}


System::String^ NS_Comp_Statistique::Statistique::calcAchatsClient(System::String^ client) {

	// Panier moyen depuis la premiere vente jusqu'à maintenant
	sql = "SELECT ROUND(SUM(montant_ttc),2) FROM Commande WHERE num = " + client + ";";
	return this->oCad->getStats(this->sql);
}



System::Data::DataSet^ NS_Comp_Statistique::Statistique::calcTop10(System::String^ table) {

	// 10 pires ventes
	sql = "SELECT TOP 10 Catalogue.reference_produit, SUM(Ligne_commande.quantite) AS total_quantite FROM Catalogue LEFT JOIN Ligne_commande ON Catalogue.reference_produit = Ligne_commande.reference_produit GROUP BY Catalogue.reference_produit ORDER BY total_quantite DESC;";


	return this->oCad->getRows(this->sql, table);
}


System::Data::DataSet^ NS_Comp_Statistique::Statistique::calcLast10(System::String^ table) {

	// TOP 10 ventes
	sql = "SELECT TOP 10 Catalogue.reference_produit, SUM(Ligne_commande.quantite) AS total_quantite FROM Catalogue LEFT JOIN Ligne_commande ON Catalogue.reference_produit = Ligne_commande.reference_produit GROUP BY Catalogue.reference_produit ORDER BY total_quantite;";

	return this->oCad->getRows(this->sql, table);
}


System::String^ NS_Comp_Statistique::Statistique::calcValComStock() {

	//Valeur actuelle du stock à la vente (HT)
	this->sql = "SELECT SUM(quantite * prix_ht) AS ValeurStock FROM Catalogue";
	return this->oCad->getStats(this->sql);
}

System::String^ NS_Comp_Statistique::Statistique::calcValAchStock() {

	//Valeur actuelle du stock à l'achat
	this->sql = "SELECT SUM(quantite * cout) AS ValeurStock FROM Catalogue";
	return this->oCad->getStats(this->sql);
}

void NS_Comp_Statistique::Statistique::setMois(System::String^ mois) {
	this->mois = mois;
}

System::String^ NS_Comp_Statistique::Statistique::getMois(void) {
	return this->mois;
}