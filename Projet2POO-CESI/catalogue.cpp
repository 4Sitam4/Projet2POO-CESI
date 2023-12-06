#include "Catalogue.h"

NS_Comp_Catalogue::Catalogue::Catalogue() {

}
NS_Comp_Catalogue::Catalogue::Catalogue(int Ref, System::String^ designation, float prix, float TVA, int stock, int reapprovisionnement) {
	setRef(Ref);
	setDesignation(designation);
	setPrix(prix);
	setTVA(TVA);
	setStock(stock);
	setReapprovisionnement(reapprovisionnement);
}

float NS_Comp_Catalogue::Catalogue::getPrix(void) {

}
int NS_Comp_Catalogue::Catalogue::getRef(void) {

}
System::String^ NS_Comp_Catalogue::Catalogue::getDesignation(void) {

}
int NS_Comp_Catalogue::Catalogue::getStock(void) {

}
int NS_Comp_Catalogue::Catalogue::reapprovisionnement(void) { return this->reapprovisionnement;}
float NS_Comp_Catalogue::Catalogue::getTVA(void) { return this->TVA;}

void setPrix(float);
void setRef(int);
void setDesignation(System::String^);
void setStock(int);
void setReapprovisionnement(int);
void setTVA(float);