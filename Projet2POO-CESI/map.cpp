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
	System::String^ cdt5;
	System::String^ cdt6;
	System::String^ cdtf;

	
	if (this->id != "") {
		cdt6 = "WHERE id = ";
		init++;
	}
	else {
		cdt6 = "";
	}
	
	if (this->nom != "") {
		if (init > 0) {
			cdt1 = " AND nom = '";
			init++;
		}
		else {
		cdt1 = "WHERE nom = '";
		init++;
		}
	}
	else {
		cdt1 = "";
	}

	if (this->prenom != "") {
		if (init > 0) {
			if (this->nom == "" && this->id != "") {
				cdt2 = " AND prenom = '";
				init++;
			}
			else {
				cdt2 = "' AND prenom = '";
				init++;
			}
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
			if (this->nom == "" && this->prenom == "" && this->id != "") {
				cdt3 = " AND superieur = '";
				init++;
			}
			else {
				cdt3 = "' AND superieur = '";
			}
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
			if (this->nom == "" && this->prenom == "" && this->superieur == "" && this->id != "") {
				cdt4 = " AND adresse = '";
				init++;
			}
			else {
				cdt4 = "' AND adresse = '";
				init++;
			}
		}
		else {
			cdt4 = "WHERE adresse = '";
			init++;
		}
	}
	else {
		cdt4 = "";
	}/*
	if (this->date_embauche == "") {
		cdt5 = "";
	}
	else {
		if (init > 0) {
			cdt5 = "' AND date_embauche = '";
			init++;
		}
		else {
			cdt5 = "WHERE date_embauche = '";
			init++;
		}
	}*/
	if (this->nom != "" || this->prenom != "" || this->superieur != "") {
		cdtf = "'";
	}
	else {
		cdtf = "";
	}


	return "SELECT [id], [nom], [prenom], [adresse], [superieur], [date_embauche] FROM [projetPOO].[dbo].[Personnel] " + cdt6 + this->id + cdt1 + this->nom + cdt2 + this->prenom + cdt3 + this->superieur + cdt4 + this->adresse + cdtf + ";";
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
	System::String^ cdt6;
	System::String^ cdtf;

	if (this->id != "") {
		cdt6 = "WHERE id = ";
		init++;
	}
	else {
		cdt6 = "";
	}
	if (this->nom != "") {
		if (init > 0) {
			cdt1 = " AND nom = '";
			init++;
		}
		else {
		cdt1 = "WHERE nom = '";
		init++;
		}
	}
	else {
		cdt1 = "";
	}

	if (this->prenom != "") {
		if (init > 0) {
			if (this->nom == "") {
				cdt2 = " AND prenom = '";
			}
			else {
				cdt2 = "' AND prenom = '";
				init++;
			}
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
			if (this->nom == "" && this->prenom == "") {
				cdt3 = " AND superieur = '";
				init++;
			}
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
			if (this->nom == "" && this->prenom == "" && this->superieur == "") {
				cdt4 = " AND adresse = '";
				init++;
			}
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
	if (this->nom == "" && this->prenom == "" && this->superieur == "" && this->adresse == "") {
		cdtf = "";
	}
	else {
		cdtf = "'";
	}


	return "DELETE FROM [projetPOO].[dbo].[Personnel] " + cdt6 + this->id + cdt1 + this->nom + cdt2 + this->prenom + cdt3 + this->superieur + cdt4 + this->adresse + cdtf + ";";
}






//modifier
System::String^ NS_Comp_Mappage::map::UpdatePersonnel(System::String^new_nom, System::String^ new_prenom, System::String^ new_superieur, System::String^ new_adresse, System::DateTime^ new_date_embauche)
{
	int init = 0;
	System::String^ cdt1;
	System::String^ cdt2;
	System::String^ cdt3;
	System::String^ cdt4;
	System::String^ cdt6;
	System::String^ cdtf;

	if (this->id != "") {
		cdt6 = "WHERE id = ";
		init++;
	}
	else {
		cdt6 = "";
	}
	if (this->nom != "") {
		if (init > 0) {
			cdt1 = " AND nom = '";
			init++;
		}
		else {
		cdt1 = "WHERE nom = '";
		init++;
		}
	}
	else {
		cdt1 = "";
	}

	if (this->prenom != "") {
		if (init > 0) {
			if (this->nom == "") {
				cdt2 = " AND prenom = '";
			}
			else {
				cdt2 = "' AND prenom = '";
				init++;
			}
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
			if (this->nom == "" && this->prenom == "") {
				cdt3 = " AND superieur = '";
				init++;
			}
			else {
				cdt3 = "' AND superieur = '";
				init++;
			}
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
			if (this->nom == "" && this->prenom == "" && this->superieur == "") {
				cdt4 = " AND adresse = '";
				init++;
			}
			else {
				cdt4 = "' AND adresse = '";
			}
		}
		else {
			cdt4 = "WHERE adresse = '";
			init++;
		}
	}
	else {
		cdt4 = "";
	}
	if(this->nom == "" && this->prenom == "" && this->superieur == "" && this->adresse == "") {
		cdtf = "";
	}
	else {
		cdtf = "'";
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

	if (new_prenom != "") {
		if (i > 0) {
			n_v2 = "', prenom = '";
			i++;
		}
		else {
			n_v2 = " prenom = '";
			i++;
		}
	}
	else {
		n_v2 = "";
	}
	if (new_superieur != "") {
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

	if (new_adresse != "") {
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

	return "UPDATE [projetPOO].[dbo].[Personnel] SET" + n_v1 + new_nom + n_v2 + new_prenom + n_v3 + new_superieur + n_v4 + new_adresse + n_vf + " " + cdt6 + this->id + cdt1 + this->nom + cdt2 + this->prenom + cdt3 + this->superieur + cdt4 + this->adresse + cdtf + ";";
}







//pour personnel et client
void NS_Comp_Mappage::map::setNom(System::String^ nom) {
	this->nom = nom;
}
void NS_Comp_Mappage::map::setPrenom(System::String^ prenom) {
	this->prenom = prenom;
}
//pour personnel
void NS_Comp_Mappage::map::setId(System::String^ id) {
	this->id = id;
}
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
System::String^ NS_Comp_Mappage::map::getId(void) { return this->id; }
System::String^ NS_Comp_Mappage::map::getSuperieur(void) { return this->superieur; }
System::String^ NS_Comp_Mappage::map::getAdresse(void) { return this->adresse; }
System::DateTime^ NS_Comp_Mappage::map::getDateEmbauche(void) { return this->date_embauche; }
//pour client
System::String^ NS_Comp_Mappage::map::getAdresseFacturation(void) { return this->adresse_facturation; }
System::DateTime^ NS_Comp_Mappage::map::getDateNaissance(void) { return this->date_naissance; }
System::DateTime^ NS_Comp_Mappage::map::getDatePremierAchat(void) { return this->date_premier_achat; }


//Catalogue
void NS_Comp_Mappage::map::setReapproNec(bool reappro_nec) {
	this->reappro_nec = reappro_nec;
}
void NS_Comp_Mappage::map::setPrix(System::String^ prix) {
	this->prix = prix;
}
void NS_Comp_Mappage::map::setRef(System::String^ ref) {
	this->ref = ref;
}
void NS_Comp_Mappage::map::setDesignation(System::String^ designation) {
	this->designation = designation;
}
void NS_Comp_Mappage::map::setStock(System::String^ stock) {
	this->stock = stock;
}
void NS_Comp_Mappage::map::setReapprovisionnement(System::String^ reapprovisionnement) {
	this->reapprovisionnement = reapprovisionnement;
}
void NS_Comp_Mappage::map::setTVA(System::String^ TVA) {
	this->TVA = TVA;
}

bool NS_Comp_Mappage::map::getReapproNec(void) { return this->reappro_nec; }
System::String^ NS_Comp_Mappage::map::getPrix(void) { return this->prix; }
System::String^ NS_Comp_Mappage::map::getRef(void) { return this->ref; }
System::String^ NS_Comp_Mappage::map::getDesignation(void) { return this->designation; }
System::String^ NS_Comp_Mappage::map::getStock(void) { return this->stock; }
System::String^ NS_Comp_Mappage::map::getReapprovisionnement(void) { return this->reapprovisionnement; }
System::String^ NS_Comp_Mappage::map::getTVA(void) { return this->TVA; }


//creer
System::String^ NS_Comp_Mappage::map::InsertCatalogue(void)
{
	return "INSERT INTO Catalogue (produit, quantite, prix_ht, stock_min, TVA) VALUES ('" + this->designation + "'," + this->stock + "," + this->prix + "," + this->reapprovisionnement + "," + this->TVA + ");";
}


System::String^ NS_Comp_Mappage::map::SelectCatalogue(void)
{
	int init = 0;
	System::String^ cdtb;
	System::String^ cdtid;
	System::String^ cdt1;
	System::String^ cdt2;
	System::String^ cdt3;
	System::String^ cdt4;
	System::String^ cdt5;
	System::String^ cdtf;
	
	
	if (this->reappro_nec == true) {
		cdtb = "WHERE stock <= reapprovisionnement";
		init++;
	}
	else {
		cdtb = "";
	}
	
	if (this->ref != "") {
		if (init > 0) {
			cdtid = " AND reference_produit = ";
			init++;
		}
		else {
			cdtid = "WHERE reference_produit = ";
			init++;
		}
	}
	else {
		cdtid = "";
	}
	
	if (this->designation != "") {
		if (init > 0) {
			cdt1 = " AND produit = '";
			init++;
		}
		else {
			cdt1 = "WHERE produit = '";
			init++;
		}
	}
	else {
		cdt1 = "";
	}

	if (this->stock != "") {
		if (init > 0) {
			if (this->designation == "") {
				cdt2 = " AND quantite = ";
				init++;
			}
			cdt2 = "' AND quantite = ";
		}
		else {
			cdt2 = "WHERE quantite = ";
			init++;
		}
	}
	else {
		cdt2 = "";
	}
	if (this->prix != "") {
		if (init > 0) {//la
			if (this->designation != "" && this->stock == "") {
				cdt3 = "' AND prix_ht = ";
				init++;
			}
			else {
				cdt3 = " AND prix_ht = ";
				init++;
			}
		}
		else {
			cdt3 = "WHERE prix_ht = ";
			init++;
		}
	}
	else {
		cdt3 = "";
	}

	if (this->reapprovisionnement != "") {
		if (init > 0) {
			if (this->prix == "" && this->stock == "" && this->designation != "") {
				cdt4 = "' AND stock_min = ";
			}
			else {
				cdt4 = " AND stock_min = ";
				init++;
			}
		}
		else {
			cdt4 = "WHERE stock_min = ";
			init++;
		}
	}
	else {
		cdt4 = "";
	}
	
	if (this->TVA != "") {
		if (init > 0) {
			if (this->prix == "" && this->stock == "" && this->reapprovisionnement == "" && this->designation != "") {
				cdt5 = "' AND TVA = ";
				init++;
			}
			else {
				cdt5 = " AND TVA = ";
				init++;
			}
		}
		else {
			cdt5 = "WHERE TVA = ";
			init++;
		}
	}
	else {
		cdt5 = "";
	}

	if (this->TVA == "" && this->reapprovisionnement == "" && this->stock == "" && this->prix == "" && this->designation != "") {
		cdtf = "'";
	}
	else {
		cdtf = "";
	}



	return "SELECT * FROM [projetPOO].[dbo].[Catalogue] " + cdtid + this->ref + cdt1 + this->designation + cdt2 + this->stock + cdt3 + this->prix + cdt4 + this->reapprovisionnement + cdt5 + this->TVA + cdtf + ";";
}

//update 
/*
System::String^ NS_Comp_Mappage::map::UpdateCatalogue(void)
{
	int init = 0;
	System::String^ cdtid;
	System::String^ cdt1;
	System::String^ cdt2;
	System::String^ cdt3;
	System::String^ cdt4;
	System::String^ cdt5;
	System::String^ cdtf;



	if (this->ref != "") {
		cdtid = "WHERE reference_produit = ";
		init++;
	}
	else {
		cdtid = "";
	}

	if (this->designation != "") {
		if (init > 0) {
			cdt1 = " AND produit = '";
			init++;
		}
		else {
			cdt1 = "WHERE produit = '";
			init++;
		}
	}
	else {
		cdt1 = "";
	}

	if (this->stock != "") {
		if (init > 0) {
			if (this->designation == "") {
				cdt2 = " AND quantite = ";
				init++;
			}
			cdt2 = "' AND quantite = ";
		}
		else {
			cdt2 = "WHERE quantite = ";
			init++;
		}
	}
	else {
		cdt2 = "";
	}
	if (this->prix != "") {
		if (init > 0) {//la
			if (this->designation != "" && this->stock == "") {
				cdt3 = "' AND prix_ht = ";
				init++;
			}
			else {
				cdt3 = " AND prix_ht = ";
				init++;
			}
		}
		else {
			cdt3 = "WHERE prix_ht = ";
			init++;
		}
	}
	else {
		cdt3 = "";
	}

	if (this->reapprovisionnement != "") {
		if (init > 0) {
			if (this->prix == "" && this->stock == "" && this->designation != "") {
				cdt4 = "' AND stock_min = ";
			}
			else {
				cdt4 = " AND stock_min = ";
				init++;
			}
		}
		else {
			cdt4 = "WHERE stock_min = ";
			init++;
		}
	}
	else {
		cdt4 = "";
	}

	if (this->TVA != "") {
		if (init > 0) {
			if (this->prix == "" && this->stock == "" && this->reapprovisionnement == "" && this->designation != "") {
				cdt5 = "' AND TVA = ";
				init++;
			}
			else {
				cdt5 = " AND TVA = ";
				init++;
			}
		}
		else {
			cdt5 = "WHERE TVA = ";
			init++;
		}
	}
	else {
		cdt5 = "";
	}

	
	
	
	
	
	//Nouvelles valeurs 
	int i = 0;
	System::String^ n_v1;
	System::String^ n_v2;
	System::String^ n_v3;
	System::String^ n_v4;
	System::String^ n_vf;
	if (new_ != "") {
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



	if (this->TVA == "" && this->reapprovisionnement == "" && this->stock == "" && this->prix == "" && this->designation != "") {
		cdtf = "'";
	}
	else {
		cdtf = "";
	}



	return "UPDATE  FROM [projetPOO].[dbo].[Catalogue] " + cdtid + this->ref + cdt1 + this->designation + cdt2 + this->stock + cdt3 + this->prix + cdt4 + this->reapprovisionnement + cdt5 + this->TVA + cdtf + ";";
	
}*/
