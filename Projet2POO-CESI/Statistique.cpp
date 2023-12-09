#include "Statistique.h"

NS_Comp_Statistique::Statistique::Statistique()
{
	oCad=gcnew NS_Comp_Data::cad();
}

System::String^ NS_Comp_Statistique::Statistique::calcPanierMoyen() {
	System::String^ sql;

	// Panier moyen depuis la premiere vente jusqu'à maintenant
	sql = "SELECT ROUND(AVG(montant_ttc),2) FROM Commande";
	return this->oCad->getStats(sql);
}