#include "Catalogue.h"

NS_Comp_Catalogue::Catalogue::Catalogue() {
	this->oCad = gcnew NS_Comp_Data::cad();
	this->oMappTB = gcnew NS_Comp_Mappage::map();
	this->oMappTB1 = gcnew NS_Comp_Mappage::map();
}

void NS_Comp_Catalogue::Catalogue::creerProduit(System::String^ designation, System::String^ stock, System::String^ reapprovisionnement, System::String^ prix, System::String^ TVA) {

	System::String^ sql;
	
	this->oMappTB->setDesignation(designation);
	this->oMappTB->setStock(stock);
	this->oMappTB->setReapprovisionnement(reapprovisionnement);
	this->oMappTB->setPrix(prix);
	this->oMappTB->setTVA(TVA);

	sql = this->oMappTB->InsertCatalogue();

	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Catalogue::Catalogue::afficherProduits(bool reappro_nec, System::String^ ref, System::String^ designation, System::String^ stock, System::String^ reapprovisionnement, System::String^ prix, System::String^ TVA, System::String^ dataTableName){
	System::String^ sql;
	this->oMappTB->setReapproNec(reappro_nec);
	this->oMappTB->setRef(ref);
	this->oMappTB->setDesignation(designation);
	this->oMappTB->setStock(stock);
	this->oMappTB->setReapprovisionnement(reapprovisionnement);
	this->oMappTB->setPrix(prix);
	this->oMappTB->setTVA(TVA);
	sql = this->oMappTB->SelectCatalogue();

	return this->oCad->getRows(sql, dataTableName);
}

