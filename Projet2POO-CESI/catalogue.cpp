#include "Catalogue.h"

NS_Comp_Catalogue::Catalogue::Catalogue() {
	this->oCad = gcnew NS_Comp_Data::cad();
	this->oMappTB = gcnew NS_Comp_Mappage::map();
	this->oMappTB1 = gcnew NS_Comp_Mappage::map();
}

void NS_Comp_Catalogue::Catalogue::creerProduit(System::String^ designation, System::String^ stock, System::String^ reapprovisionnement, System::String^ prix, System::String^ TVA, System::String^ cout) {

	System::String^ sql;
	
	this->oMappTB->setDesignation(designation);
	this->oMappTB->setStock(stock);
	this->oMappTB->setReapprovisionnement(reapprovisionnement);
	this->oMappTB->setPrix(prix);
	this->oMappTB->setTVA(TVA);
	this->oMappTB->setCout(cout);

	sql = this->oMappTB->InsertCatalogue();

	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Catalogue::Catalogue::afficherProduits(bool reappro_nec, System::String^ ref, System::String^ designation, System::String^ stock, System::String^ reapprovisionnement, System::String^ prix, System::String^ TVA, System::String^ cout, System::String^ dataTableName){
	System::String^ sql;
	this->oMappTB->setReapproNec(reappro_nec);
	this->oMappTB->setRef(ref);
	this->oMappTB->setDesignation(designation);
	this->oMappTB->setStock(stock);
	this->oMappTB->setReapprovisionnement(reapprovisionnement);
	this->oMappTB->setPrix(prix);
	this->oMappTB->setTVA(TVA);
	this->oMappTB->setCout(cout);
	sql = this->oMappTB->SelectCatalogue();

	return this->oCad->getRows(sql, dataTableName);
}


void NS_Comp_Catalogue::Catalogue::modifierProduit(System::String^ ref, System::String^ designation, System::String^ stock, System::String^ reapprovisionnement, System::String^ prix, System::String^ TVA, System::String^ cout, System::String^ new_designation, System::String^ new_stock, System::String^ new_reapprovisionnement, System::String^ new_prix, System::String^ new_TVA, System::String^ new_cout) {

	System::String^ sql;

	this->oMappTB->setRef(ref);
	this->oMappTB->setDesignation(designation);
	this->oMappTB->setStock(stock);
	this->oMappTB->setReapprovisionnement(reapprovisionnement);
	this->oMappTB->setPrix(prix);
	this->oMappTB->setTVA(TVA);
	this->oMappTB->setCout(cout);

	this->oMappTB1->setDesignation(new_designation);
	this->oMappTB1->setStock(new_stock);
	this->oMappTB1->setReapprovisionnement(new_reapprovisionnement);
	this->oMappTB1->setPrix(new_prix);
	this->oMappTB1->setTVA(new_TVA);
	this->oMappTB1->setCout(new_cout);

	sql = this->oMappTB->UpdateCatalogue(new_designation, new_stock, new_prix, new_reapprovisionnement, new_TVA, new_cout);

	this->oCad->actionRows(sql);
}


//suppr
void NS_Comp_Catalogue::Catalogue::supprimerProduit(System::String^ ref, System::String^ designation, System::String^ stock, System::String^ reapprovisionnement, System::String^ prix, System::String^ TVA, System::String^ cout) {

	System::String^ sql;

	this->oMappTB->setRef(ref);
	this->oMappTB->setDesignation(designation);
	this->oMappTB->setStock(stock);
	this->oMappTB->setReapprovisionnement(reapprovisionnement);
	this->oMappTB->setPrix(prix);
	this->oMappTB->setTVA(TVA);
	this->oMappTB->setCout(cout);

	sql = this->oMappTB->DeleteCatalogue();

	this->oCad->actionRows(sql);
}