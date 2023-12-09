#include "Statistique.h"

NS_Comp_Statistique::Statistique::Statistique()
{
	oCad=gcnew NS_Comp_Data::cad();
}

System::String^ NS_Comp_Statistique::Statistique::calcPanierMoyen() {
	System::String^ sql;

	// Panier moyen depuis la premiere vente jusqu'à maintenant
	sql = "SELECT ROUND(AVG(montant_ttc),2) FROM Commande;";
	return this->oCad->getStats(sql);
}

System::Data::DataSet^ NS_Comp_Statistique::Statistique::calcSeuilReappro(System::String^ table) {
	System::String^ sql;

	// Seuil de réapprovisionnement
	sql = "SELECT * FROM [projetPOO].[dbo].[Catalogue] WHERE [quantite] < [stock_min];";
	return this->oCad->getRows(sql, table);
}


System::String^ NS_Comp_Statistique::Statistique::calcChiffreAffaireMois(System::String^ mois, System::String^ annee) {
	System::String^ sql;
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

	sql = "SELECT SUM(montant_ht) FROM Commande WHERE MONTH(date_emission) = " + this->mois + " AND YEAR(date_emission) = " + annee + ";";



	return this->oCad->getStats(sql);
}


System::String^ NS_Comp_Statistique::Statistique::calcAchatsClient(System::String^ client) {
	System::String^ sql;

	// Panier moyen depuis la premiere vente jusqu'à maintenant
	sql = "SELECT ROUND(SUM(montant_ttc),2) FROM Commande WHERE num = " + client + ";";
	return this->oCad->getStats(sql);
}




void NS_Comp_Statistique::Statistique::setMois(System::String^ mois) {
	this->mois = mois;
}

System::String^ NS_Comp_Statistique::Statistique::getMois(void) {
	return this->mois;
}