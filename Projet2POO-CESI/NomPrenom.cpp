
#include "NomPrenom.h"
#include "PCH.h"

NomPrenom::NomPrenom()
{
	//ctor
}

NomPrenom::~NomPrenom()
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
}

void NomPrenom::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}