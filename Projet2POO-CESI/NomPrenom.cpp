
#include "NomPrenom.h"
#include "PCH.h"

NS_Comp_NomPrenom::NomPrenom::NomPrenom()
{
	//ctor
}

NS_Comp_NomPrenom::NomPrenom::~NomPrenom()
{
	//dtor
}

NomPrenom::NomPrenom(System::String^ nom, System::String^ prenom)
{
	this->nom = nom;
	this->prenom = prenom;
}

System::String^ NomPrenom::getNom()
{
	return this->nom;
}

System::String^ NomPrenom::getPrenom()
{
	return this->prenom;
}

void NomPrenom::setNom(System::String^ nom)
{
	this->nom = nom;
	this->prenom = prenom;
}
System::String^ NS_Comp_NomPrenom::NomPrenom::getNom() {
	return this->nom;
}
System::String^ NS_Comp_NomPrenom::NomPrenom::getPrenom() {
	return this->prenom;
}
void NS_Comp_NomPrenom::NomPrenom::setNom(System::String^ nom) {
	this->nom = nom;
}
void NS_Comp_NomPrenom::NomPrenom::setPrenom(System::String^ prenom) {
	this->prenom = prenom;
}