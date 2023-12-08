#include "PCH.h"
#include "map.h"

//afficher
System::String^ NS_Comp_Mappage::map::SelectPersonnel(void)
{
	int init = 0;
	System::String^ cdt1;
	System::String^ cdt2;
	System::String^ cdt3;
	System::String^ cdt4;
	//System::String^ cdt6;
	System::String^ cdtf;

	/*
	if (this->id != "") {
		cdt6 = "WHERE id = ";
		init++;
	}
	else {
		cdt6 = "";
	}
	*/
	if (this->nom != "") {
		/*if (init > 0) {
			cdt1 = " AND nom = '";
			init++;
		}
		else {*/
		cdt1 = "WHERE nom = '";
		init++;
		//}
	}
	else {
		cdt1 = "";
	}

	if (this->prenom != "") {
		if (init > 0) {
			cdt2 = "' AND prenom = '";
			init++;
		}
		else {
			cdt2 = "WHERE prenom = '";
			init++;
		}
	}
	else{
		cdt2 = "";
	}
	if (this->superieur != "") {
		if (init > 0) {
			cdt3 = "' AND superieur = '";
			init++;
		}
		else {
			cdt3 = "WHERE superieur = '";
			init++;
		}
	}
	else{
		cdt3 = "";
	}

	if (this->adresse != "") {
		if (init > 0) {
			cdt4 = "' AND adresse = '";
			init++;
		}
		else {
			cdt4 = "WHERE adresse = '";
			init++;
		}
	}
	else {
		cdt4 = "";
	}
	/*
	if (this->date_embauche) {
		if (init > 0) {
			cdt5 = "' AND date_embauche = '";
			init++;
		}
		else {
			cdt5 = "WHERE date_embauche = '";
			init++;
		}
	}
	else {
		cdt5 = "";
	}*/
	if (init > 0) {
		cdtf = "'";
	}
	else {
		cdtf = "";
	}


	return "SELECT [id], [nom], [prenom], [adresse], [superieur], [date_embauche] FROM [projetPOO].[dbo].[Personnel] " + cdt1 + this->nom + cdt2 + this->prenom + cdt3 + this->superieur + cdt4 + this->adresse + cdtf + ";";
}


System::String^ NS_Comp_Mappage::map::SelectClient(void) {

	int init = 0;
	System::String^ cdt1 = "";
	System::String^ cdt2 = "";
	System::String^ cdt3 = "";
	System::String^ cdt4 = "";
	System::String^ cdt5 = "";
	System::String^ cdt6 = "";
	System::String^ cdtf = "";

	if (this->id != "") {
		cdt1 = "WHERE num = '";
		init++;
	}

	if (this->nom != "") {
		if (init > 0) {
			cdt2 = "' AND nom = '";
			init++;
		}
		else {
			cdt2 = "WHERE nom = '";
			init++;
		}
	}
	
	if (this->prenom != "") {
		if (init > 0) {
			cdt3 = "' AND prenom = '";
			init++;
		}
		else {
			cdt3 = "WHERE prenom = '";
			init++;
		}
	}

	if (this->adresse_facturation != "") {
		if (init > 0) {
			cdt4 = "' AND adresse_facturation = '";
			init++;
		}
		else {
			cdt4 = "WHERE adresse_facturation = '";
			init++;
		}
	}

	if (System::Convert::ToString(this->date_naissance) != "1/1/1753 12:00:00 AM") {
		if (init > 0) {
			cdt5 = "' AND date_naissance = '" + this->date_naissance;
			init++;
		}
		else {
			cdt5 = " WHERE date_naissance = '" + this->date_naissance;
			init++;
		}
	}

	if (System::Convert::ToString(this->date_premier_achat) != "1/1/1753 12:00:00 AM") {
		if (init > 0) {
			cdt6 = "' AND date_premier_achat = '" + this->date_premier_achat;
			init++;
		}
		else {
			cdt6 = " WHERE date_premier_achat = '" + this->date_premier_achat;
			init++;
		}
	}

	if (init > 0) {
		cdtf = "'";
	}


	return "SELECT [num], [nom], [prenom], [adresse_facturation], [date_naissance], [date_premier_achat] FROM [projetPOO].[dbo].[tableClient] " + cdt1 + this->id + cdt2 + this->nom + cdt3 + this->prenom + cdt4 + this->adresse_facturation + cdt5 + cdt6 + cdtf;
}

//creer
System::String^ NS_Comp_Mappage::map::InsertPersonnel(void)
{
	return "INSERT INTO Personnel (nom, prenom, adresse, superieur, date_embauche) VALUES ('" + this->nom + "','" + this->prenom + "','" + this->adresse + "','" + this->superieur + "','" + this->date_embauche + "')";
}

System::String^ NS_Comp_Mappage::map::InsertClient(void) {
	return "INSERT INTO tableClient (nom, prenom, adresse_facturation, date_naissance, date_premier_achat) VALUES ('" + this->nom + "','" + this->prenom + "','" + this->adresse_facturation + "','" + this->date_naissance + "','" + this->date_premier_achat + "')";
}



//supprimer
System::String^ NS_Comp_Mappage::map::DeletePersonnel(void)
{
	int init = 0;
	System::String^ cdt1;
	System::String^ cdt2;
	System::String^ cdt3;
	System::String^ cdt4;
	//System::String^ cdt6;
	System::String^ cdtf;

	/*
	if (this->id != "") {
		cdt6 = "WHERE id = ";
		init++;
	}
	else {
		cdt6 = "";
	}
	*/
	if (this->nom != "") {
		/*if (init > 0) {
			cdt1 = " AND nom = '";
			init++;
		}
		else {*/
		cdt1 = "WHERE nom = '";
		init++;
		//}
	}
	else {
		cdt1 = "";
	}

	if (this->prenom != "") {
		if (init > 0) {
			cdt2 = "' AND prenom = '";
			init++;
		}
		else {
			cdt2 = "WHERE prenom = '";
			init++;
		}
	}
	else {
		cdt2 = "";
	}
	if (this->superieur != "") {
		if (init > 0) {
			cdt3 = "' AND superieur = '";
			init++;
		}
		else {
			cdt3 = "WHERE superieur = '";
			init++;
		}
	}
	else {
		cdt3 = "";
	}

	if (this->adresse != "") {
		if (init > 0) {
			cdt4 = "' AND adresse = '";
			init++;
		}
		else {
			cdt4 = "WHERE adresse = '";
			init++;
		}
	}
	else {
		cdt4 = "";
	}
	if (init > 0) {
		cdtf = "'";
	}
	else {
		cdtf = "";
	}


	return "DELETE FROM [projetPOO].[dbo].[Personnel] " + cdt1 + this->nom + cdt2 + this->prenom + cdt3 + this->superieur + cdt4 + this->adresse + cdtf + ";";
}


System::String^ NS_Comp_Mappage::map::DeleteClient(System::String^ id) {
	return "DELETE FROM [projetPOO].[dbo].[tableClient] WHERE num = "+ System::Convert::ToInt32(this->getId()) + ";";
}






//modifier
System::String^ NS_Comp_Mappage::map::UpdatePersonnel(System::String^new_nom, System::String^ new_prenom, System::String^ new_superieur, System::String^ new_adresse, System::DateTime^ new_date_embauche)
{
	int init = 0;
	System::String^ cdt1;
	System::String^ cdt2;
	System::String^ cdt3;
	System::String^ cdt4;
	//System::String^ cdt6;
	System::String^ cdtf;

	/*
	if (this->id != "") {
		cdt6 = "WHERE id = ";
		init++;
	}
	else {
		cdt6 = "";
	}
	*/
	if (this->nom != "") {
		/*if (init > 0) {
			cdt1 = " AND nom = '";
			init++;
		}
		else {*/
		cdt1 = "WHERE nom = '";
		init++;
		//}
	}
	else {
		cdt1 = "";
	}

	if (this->prenom != "") {
		if (init > 0) {
			cdt2 = "' AND prenom = '";
			init++;
		}
		else {
			cdt2 = "WHERE prenom = '";
			init++;
		}
	}
	else {
		cdt2 = "";
	}
	if (this->superieur != "") {
		if (init > 0) {
			cdt3 = "' AND superieur = '";
			init++;
		}
		else {
			cdt3 = "WHERE superieur = '";
			init++;
		}
	}
	else {
		cdt3 = "";
	}

	if (this->adresse != "") {
		if (init > 0) {
			cdt4 = "' AND adresse = '";
			init++;
		}
		else {
			cdt4 = "WHERE adresse = '";
			init++;
		}
	}
	else {
		cdt4 = "";
	}
	if (init > 0) {
		cdtf = "'";
	}
	else {
		cdtf = "";
	}

	//Nouvelles valeurs 
	int i = 0;
	System::String^ n_v1;
	System::String^ n_v2;
	System::String^ n_v3;
	System::String^ n_v4;
	System::String^ n_vf;
	if (new_nom != "") {
		n_v1 = " nom = '";
		i++;
	}
	else {
		n_v1 = "";
	}

	if (this->prenom != "") {
		if (i > 0) {
			n_v2 = "', prenom = '";
			init++;
		}
		else {
			n_v2 = " prenom = '";
			i++;
		}
	}
	else {
		n_v2 = "";
	}
	if (this->superieur != "") {
		if (i > 0) {
			n_v3 = "', superieur = '";
			i++;
		}
		else {
			n_v3 = " superieur = '";
			i++;
		}
	}
	else {
		n_v3 = "";
	}

	if (this->adresse != "") {
		if (i > 0) {
			n_v4 = "', adresse = '";
			i++;
		}
		else {
			n_v4 = " adresse = '";
			i++;
		}
	}
	else {
		n_v4 = "";
	}
	if (i > 0) {
		n_vf = "'";
	}
	else {
		n_vf = "";
	}

	return "UPDATE [projetPOO].[dbo].[Personnel] SET" + n_v1 + new_nom + n_v2 + new_prenom + n_v3 + new_superieur + n_v4 + new_adresse + n_vf + " " + cdt1 + this->nom + cdt2 + this->prenom + cdt3 + this->superieur + cdt4 + this->adresse + cdtf + ";";
}

System::String^ NS_Comp_Mappage::map::UpdateClient(System::String^ id, System::String^ nouv_nom, System::String^ nouv_prenom, System::String^ nouv_adresse, System::DateTime^ nouv_naissance, System::DateTime^ nouv_date_achat) {
	
	int i = 0;
	System::String^ n_v1 = "";
	System::String^ n_v2 = "";
	System::String^ n_v3 = "";
	System::String^ n_v4 = "";
	System::String^ n_v5 = "";
	System::String^ n_vf = "";

	if (nouv_nom != "") {
		n_v1 = "nom = '";
		i++;
	}

	if (nouv_prenom != "") {
		if (i > 0) {
			n_v2 = "', prenom = '";
		}
		else {
			n_v2 = "prenom = '";
			i++;
		}
	}

	if (nouv_adresse != "") {
		if (i > 0) {
			n_v3 = "', adresse_facturation = '";
		}
		else {
			n_v3 = "adresse_facturation = '";
			i++;
		}
	}


	if (System::Convert::ToString(nouv_naissance) != "1/1/1753 12:00:00 AM") {
		if (i > 0) {
			n_v4 = "', date_naissance = '" + nouv_naissance;
		}
		else {
			n_v4 = "date_naissance = '" + nouv_naissance;
			i++;
		}
	}

	if (System::Convert::ToString(nouv_date_achat) != "1/1/1753 12:00:00 AM") {
		if (i > 0) {
			n_v5 = "', date_premier_achat = '" + nouv_date_achat;
		}
		else {
			n_v5 = "date_premier_achat = '" + nouv_date_achat;
			i++;
		}
	}

	if (i > 0) {
		n_vf = "'";
	}




	return "UPDATE [projetPOO].[dbo].[tableClient] SET " + n_v1 + nouv_nom + n_v2 + nouv_prenom + n_v3 + nouv_adresse + n_v4 + n_v5 + n_vf + " WHERE num = " + System::Convert::ToInt32(this->id);

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
void NS_Comp_Mappage::map::setId(System::String^ Id) {
	this->id = Id;
}
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
System::String^ NS_Comp_Mappage::map::getId(void) { return this->id; }
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