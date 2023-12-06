#include "PCH.h"
#include "map.h"

/*
System::String^ NS_Comp_Mappage::map::SelectPersonnel(void)
{
	return "SELECT [id], [nom], [prenom] FROM [prosit6].[dbo].[table_prosit6]";
}
*/
System::String^ NS_Comp_Mappage::map::InsertPersonnel(void)
{
	return "INSERT INTO Personnel (nom, prenom, adresse, superieur, date_embauche) VALUES ('" + this->nom + "','" + this->prenom + "','" + this->adresse + "','" + this->superieur + "','" + this->date_embauche + "')";
}
/*
System::String^ NS_Comp_Mappage::map::DeletePersonnel(void)
{
	return "DELETE FROM [prosit6].[dbo].[table_prosit6] WHERE nom = " + this->nom + "AND [prenom] = " + this->prenom + ";";
}
System::String^ NS_Comp_Mappage::map::UpdatePersonnel(void)
{

	return "UPDATE [table_prosit6] SET nom = " + this->nom + ", " + "prenom = " + this->prenom + "WHERE id = " + this->Id + ";";
}
*/


//pour personnel et client
void NS_Comp_Mappage::map::setNom(System::String^ nom) {
	this->nom = nom;
}
void NS_Comp_Mappage::map::setPrenom(System::String^ prenom) {
	this->prenom = prenom;
}
//pour personnel
void NS_Comp_Mappage::map::setSuperieur(System::String^ superieur) {
	this->superieur = superieur;
}
void NS_Comp_Mappage::map::setAdresse(System::String^ adresse) {
	this->adresse = adresse;
}
void NS_Comp_Mappage::map::setDateEmbauche(System::DateTime^ date_embauche) {
	this->date_embauche = date_embauche;
}
//pour client
void NS_Comp_Mappage::map::setAdresseFacturation(System::String^ adresse_facturation) {
	this->adresse_facturation = adresse_facturation;
}
void NS_Comp_Mappage::map::setDateNaissance(System::DateTime^ date_naissance) {
	this->date_naissance = date_naissance;
}
void NS_Comp_Mappage::map::setDatePremierAchat(System::DateTime^ date_premier_achat) {
	this->date_premier_achat = date_premier_achat;
}
//Catalogue ...


		//pour personnel et client
System::String^ NS_Comp_Mappage::map::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::map::getPrenom(void) { return this->prenom; }
//pour personnel
System::String^ NS_Comp_Mappage::map::getSuperieur(void) { return this->superieur; }
System::String^ NS_Comp_Mappage::map::getAdresse(void) { return this->adresse; }
System::DateTime^ NS_Comp_Mappage::map::getDateEmbauche(void) { return this->date_embauche; }
//pour client
System::String^ NS_Comp_Mappage::map::getAdresseFacturation(void) { return this->adresse_facturation; }
System::DateTime^ NS_Comp_Mappage::map::getDateNaissance(void) { return this->date_naissance; }
System::DateTime^ NS_Comp_Mappage::map::getDatePremierAchat(void) { return this->date_premier_achat; }
//Catalogue ...