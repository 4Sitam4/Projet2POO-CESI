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
	}
	if (this->date_embauche->ToShortDateString() != "01/01/1753") {
		if (init > 0) {
			if (this->adresse == "" && this->nom == "" && this->prenom == "" && this->superieur == "" && this->id != "") {
				cdt5 = " AND date_embauche = '" + this->date_embauche->ToShortDateString();
				init++;
			} 
			else {
				cdt5 = "' AND date_embauche = '" + this->date_embauche->ToShortDateString();
			}
		}
		else {
			cdt5 = "WHERE date_embauche = '" + this->date_embauche->ToShortDateString();
			init++;
		}
	}
	else {
		cdt5 = "";
	}
	if (this->date_embauche->ToShortDateString() != "01/01/1753" || this->nom != "" || this->prenom != "" || this->superieur != "") {
		cdtf = "'";
	}
	else {
		cdtf = "";
	}


	return "SELECT [id], [nom], [prenom], [adresse], [superieur], [date_embauche] FROM [projetPOO].[dbo].[Personnel] " + cdt6 + this->id + cdt1 + this->nom + cdt2 + this->prenom + cdt3 + this->superieur + cdt4 + this->adresse + cdt5 + cdtf + ";";
}


System::String^ NS_Comp_Mappage::map::SelectClient(void) {

	int init = 0;
	System::String^ cdt1 = "";
	System::String^ cdt2 = "";
	System::String^ cdt3 = "";
	System::String^ cdt4 = "";
	System::String^ cdt5 = "";
	System::String^ cdt6 = "";
	System::String^ cdt7 = "";
	System::String^ cdt8 = "";
	System::String^ cdt9 = "";
	System::String^ cdt10 = "";
	System::String^ cdt11 = "";


	if (this->id != "") {
		cdt1 = "WHERE num = " + this->id;
		init++;
	}

	if (this->nom != "") {
		if (init > 0) {
			cdt2 = " AND nom = '" + this->nom + "'";
			init++;
		}
		else {
			cdt2 = "WHERE nom = '" + this->nom + "'";
			init++;
		}
	}
	
	if (this->prenom != "") {
		if (init > 0) {
			cdt3 = " AND prenom = '" + this->prenom + "'";
			init++;
		}
		else {
			cdt3 = "WHERE prenom = '" + this->prenom + "'";
			init++;
		}
	}

	if (this->date_naissance->ToShortDateString() != "01/01/1753") {
		if (init > 0) {
			cdt4 = " AND date_naissance = '" + this->date_naissance->ToShortDateString() + "'";
			init++;
		}
		else {
			cdt4 = " WHERE date_naissance = '" + this->date_naissance->ToShortDateString() + "'";
			init++;
		}
	}

	if (this->date_premier_achat->ToShortDateString() != "01/01/1753") {
		if (init > 0) {
			cdt5 = " AND date_premier_achat = '" + this->date_premier_achat->ToShortDateString() + "'";
			init++;
		}
		else {
			cdt5 = " WHERE date_premier_achat = '" + this->date_premier_achat->ToShortDateString() + "'";
			init++;
		}
	}


	if (this->adresse_facturation != "") {
		if (init > 0) {
			cdt6 = " AND adresse_facturation = '" + this->adresse_facturation + "'";
			init++;
		}
		else {
			cdt6 = "WHERE adresse_facturation = '" + this->adresse_facturation + "'";
			init++;
		}
	}

	if (this->ville_facturation != "") {
		if (init > 0) {
			cdt7 = " AND adr_facturation_ville = '" + this->ville_facturation + "'";
			init++;
		}
		else {
			cdt7 = "WHERE adr_facturation_ville = '" + this->ville_facturation + "'";
			init++;
		}
	}


	if (this->cp_facturation != "") {
		if (init > 0) {
			cdt8 = " AND adr_facturation_code_postal = " + this->cp_facturation;
				init++;
		}
		else {
			cdt8 = "WHERE adr_facturation_code_postal = " + this->cp_facturation;
			init++;
		}
	}

	if (this->adresse_livraison != "") {
		if (init > 0) {
			cdt9 = " AND adresse_livraison = '" + this->adresse_livraison + "'";
			init++;
		}
		else {
			cdt9 = "WHERE adresse_livraison = '" + this->adresse_livraison + "'";
			init++;
		}
	}


	if (this->ville_livraison != "") {
		if (init > 0) {
			cdt10 = " AND adr_livraison_ville = '" + this->ville_livraison + "'";
			init++;
		}
		else {
			cdt10 = "WHERE adr_livraison_ville = '" + this->ville_livraison + "'";
			init++;
		}
	}

	if (this->cp_livraison != "") {
		if (init > 0) {
			cdt11 = " AND adr_livraison_code_postal = " + this->cp_livraison;
			init++;
		}
		else {
			cdt11 = "WHERE adr_livraison_code_postal = " + this->cp_livraison;
			init++;
		}
	}	

	return "SELECT * FROM [projetPOO].[dbo].[Client] " + cdt1 + cdt2 + cdt3 + cdt4 + cdt5 + cdt6 + cdt7 + cdt8 + cdt9 + cdt10 + cdt11 + ";";
}

//creer
System::String^ NS_Comp_Mappage::map::InsertPersonnel(void)
{
	return "INSERT INTO Personnel (nom, prenom, adresse, superieur, date_embauche) VALUES ('" + this->nom + "','" + this->prenom + "','" + this->adresse + "','" + this->superieur + "','" + this->date_embauche + "')";
}

System::String^ NS_Comp_Mappage::map::InsertClient(void) {
	return "INSERT INTO Client (nom, prenom, date_naissance, date_premier_achat, adresse_facturation, adr_facturation_ville, adr_facturation_code_postal, adresse_livraison, adr_livraison_ville, adr_livraison_code_postal) VALUES ('" + this->nom + "','" + this->prenom + "','" + this->date_naissance + "','" + this->date_premier_achat + "','" + this->adresse_facturation + "','" + this->ville_facturation + "', " + this->cp_facturation + " , '" + this->adresse_livraison + "','" + this->ville_livraison + "', " + this->cp_livraison + " );";
}



//DELETE Personnel 

System::String^ NS_Comp_Mappage::map::DeletePersonnel(void)
{
	int init = 0;
	System::String^ cdt1;
	System::String^ cdt2;
	System::String^ cdt3;
	System::String^ cdt4;
	System::String^ cdt5;
	System::String^ cdt6;

	if (this->id != "") {
		cdt1 = "WHERE id = " + this->id;
		init++;
	}

	if (this->nom != "") {
		if (init > 0) {
			cdt2 = " AND nom = '" + this->nom + "'";
			init++;
		}
		else {
			cdt2 = "WHERE nom = '" + this->nom + "'";
			init++;
		}
	}

	if (this->prenom != "") {
		if (init > 0) {
			cdt3 = " AND prenom = '" + this->prenom + "'";
		}
		else {
			cdt3 = "WHERE prenom = '" + this->prenom + "'";
			init++;
		}
	}

	if (this->superieur != "") {
		if (init > 0) {
			cdt4 = " AND superieur = '" + this->superieur + "'";
			init++;
		}
		else {
			cdt4 = "WHERE superieur = '" + this->superieur + "'";
			init++;
		}
	}

	if (this->adresse != "") {
		if (init > 0) {
			cdt5 = " AND adresse = '" + this->adresse + "'";
			init++;
		}
		else {
			cdt5 = "WHERE adresse = '" + this->adresse + "'";
			init++;
		}
	}


	if (this->date_embauche->ToShortDateString() != "01/01/1753") {
		if (init > 0) {
			cdt6 = " AND date_embauche = '" + this->date_embauche->ToShortDateString() + "'";
			init++;
		}
		else {
			cdt6 = " WHERE date_embauche = '" + this->date_embauche->ToShortDateString() + "'";
			init++;
		}
	}
	if (cdt1 == "" && cdt2 == "" && cdt3 == "" && cdt4 == "" && cdt5 == "" && cdt6 == "") {
		return "";
	}
	else {
		return "DELETE FROM [projetPOO].[dbo].[Personnel] " + cdt1 + cdt2 + cdt3 + cdt4 + cdt5 + cdt6 + ";";
	}
}


// DELETE Client ---------------------------------------------------------------------------------------------------------------

System::String^ NS_Comp_Mappage::map::DeleteClient(System::String^ id) {
	return "DELETE FROM [projetPOO].[dbo].[Client] WHERE num = "+ System::Convert::ToInt32(this->getId()) + ";";
}






// UPDATE Personnel -----------------------------------------------------------------------------------------------------------------------------------------

System::String^ NS_Comp_Mappage::map::UpdatePersonnel(System::String^new_nom, System::String^ new_prenom, System::String^ new_superieur, System::String^ new_adresse, System::DateTime^ new_date_embauche)
{
	int init = 0;
	System::String^ cdt1;
	System::String^ cdt2;
	System::String^ cdt3;
	System::String^ cdt4;
	System::String^ cdt5;
	System::String^ cdt6;

	if (this->id != "") {
		cdt1 = "WHERE id = " + this->id;
		init++;
	}

	if (this->nom != "") {
		if (init > 0) {
			cdt2 = " AND nom = '" + this->nom + "'";
			init++;
		}
		else {
		cdt2 = "WHERE nom = '" + this->nom +  "'";
		init++;
		}
	}

	if (this->prenom != "") {
		if (init > 0) {
			cdt3 = " AND prenom = '" + this->prenom + "'";
			init++;
		}
		else {
			cdt3 = "WHERE prenom = '" + this->prenom + "'";
			init++;
		}
	}

	if (this->superieur != "") {
		if (init > 0) {
			cdt4 = " AND superieur = '" + this->superieur + "'";
				init++;
		}
		else {
			cdt3 = "WHERE superieur = '" + this->superieur + "'";
			init++;
		}
	}

	if (this->adresse != "") {
		if (init > 0) {
			cdt5 = " AND adresse = '" + this->adresse + "'";
			init++;
		}
		else {
			cdt5 = "WHERE adresse = '" + this->adresse + "'";
			init++;
		}
	}

	if (this->date_embauche->ToShortDateString() != "01/01/1753") {
		if (init > 0) {
			cdt6 = " AND date_embauche = '" + this->date_embauche->ToShortDateString() + "'";
			init++;
		}
		else {
			cdt6 = "WHERE date_embauche = '" + this->date_embauche->ToShortDateString() + "'";
			init++;
		}
	}


	//Nouvelles valeurs 
	int i = 0;
	System::String^ n_v1 = "";
	System::String^ n_v2 = "";
	System::String^ n_v3 = "";
	System::String^ n_v4 = "";
	System::String^ n_vf = "";
	System::String^ n_v5 = "";
	if (new_nom != "") {
		n_v1 = " nom = '" + new_nom + "'";
		i++;
	}


	if (new_prenom != "") {
		if (i > 0) {
			n_v2 = "', prenom = '" + new_prenom + "'";
			i++;
		}
		else {
			n_v2 = " prenom = '" + new_prenom + "'";
			i++;
		}
	}

	if (new_superieur != "") {
		if (i > 0) {
			n_v3 = "', superieur = '" + new_superieur + "'";
			i++;
		}
		else {
			n_v3 = " superieur = '" + new_superieur + "'";
			i++;
		}
	}

	if (new_adresse != "") {
		if (i > 0) {
			n_v4 = "', adresse = '" + new_adresse + "'";
			i++;
		}
		else {
			n_v4 = " adresse = '" + new_adresse + "'";
			i++;
		}
	}

	if (new_date_embauche->ToShortDateString() != "01/01/1753") {
		if (i > 0) {
			n_v5 = "', date_embauche = '" + new_date_embauche->ToShortDateString() + "'";
			i++;
		}
		else {
			n_v5 = " date_embauche = '" + new_date_embauche->ToShortDateString() + "'";
			i++;
		}
	}

	return "UPDATE [projetPOO].[dbo].[Personnel] SET" + n_v1 + n_v2 + n_v3 + n_v4 + n_v5 + " " + cdt1 + cdt2 + cdt3 + cdt4 + cdt5 + cdt6 + ";";
}



// UPDATE Client


System::String^ NS_Comp_Mappage::map::UpdateClient(System::String^ new_nom, System::String^ new_prenom, System::String^ new_adresse_facturation, System::String^ new_ville_facturation, System::String^ new_cp_facturation, System::String^ new_adresse_livraison, System::String^ new_ville_livraison, System::String^ new_cp_livraison, System::DateTime^ new_date_naissance, System::DateTime^ new_date_achat) {
	
	int i = 0;
	int init = 0;
	System::String^ n_v1 = "";
	System::String^ n_v2 = "";
	System::String^ n_v3 = "";
	System::String^ n_v4 = "";
	System::String^ n_v5 = "";
	System::String^ n_v6 = "";
	System::String^ n_v7 = "";
	System::String^ n_v8 = "";
	System::String^ n_v9 = "";
	System::String^ n_v10 = "";

	if (new_nom != "") {
			n_v1 = " nom = '" + new_nom + "'";
			init++;
	}

	if (new_prenom != "") {
		if (init > 0) {
			n_v2 = ", prenom = '" + new_prenom + "'";
			init++;
		}
		else {
			n_v2 = " prenom = '" + new_prenom + "'";
			init++;
		}
	}

	if (new_date_naissance->ToShortDateString() != "01/01/1753") {
		if (init > 0) {
			n_v3 = ", date_naissance = '" + new_date_naissance->ToShortDateString() + "'";
			init++;
		}
		else {
			n_v3 = " date_naissance = '" + new_date_naissance->ToShortDateString() + "'";
			init++;
		}
	}

	if (new_date_achat->ToShortDateString() != "01/01/1753") {
		if (init > 0) {
			n_v4 = ", date_premier_achat = '" + new_date_achat->ToShortDateString() + "'";
			init++;
		}
		else {
			n_v4 = " date_premier_achat = '" + new_date_achat->ToShortDateString() + "'";
			init++;
		}
	}


	if (new_adresse_facturation != "") {
		if (init > 0) {
			n_v5 = ", adresse_facturation = '" + new_adresse_facturation + "'";
			init++;
		}
		else {
			n_v5 = " adresse_facturation = '" + new_adresse_facturation + "'";
			init++;
		}
	}

	if (new_ville_facturation != "") {
		if (init > 0) {
			n_v6 = ", adr_facturation_ville = '" + new_ville_facturation + "'";
			init++;
		}
		else {
			n_v6 = " adr_facturation_ville = '" + new_ville_facturation + "'";
			init++;
		}
	}


	if (new_cp_facturation != "") {
		if (init > 0) {
			n_v7 = ", adr_facturation_code_postal = " + new_cp_facturation;
			init++;
		}
		else {
			n_v7 = " adr_facturation_code_postal = " + new_cp_facturation;
			init++;
		}
	}

	if (new_adresse_livraison != "") {
		if (init > 0) {
			n_v8 = ", adresse_livraison = '" + new_adresse_livraison + "'";
			init++;
		}
		else {
			n_v8 = " adresse_livraison = '" + new_adresse_livraison + "'";
			init++;
		}
	}


	if (this->ville_livraison != "") {
		if (init > 0) {
			n_v9 = ", adr_livraison_ville = '" + new_ville_livraison + "'";
			init++;
		}
		else {
			n_v9 = " adr_livraison_ville = '" + new_ville_livraison + "'";
			init++;
		}
	}

	if (this->cp_livraison != "") {
		if (init > 0) {
			n_v10 = ", adr_livraison_code_postal = " + new_cp_livraison;
			init++;
		}
		else {
			n_v10 = " adr_livraison_code_postal = " + new_cp_livraison;
			init++;
		}
	}
	//changer le nom de la table par la votre 
	return "UPDATE [projetPOO].[dbo].[Client] SET " + n_v1 + n_v2 + n_v3 + n_v4 + n_v5 + n_v6 + n_v7 + n_v8 + n_v9 + n_v10 + " WHERE num = " + this->id + ";";

}






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
void NS_Comp_Mappage::map::setVilleFacturation(System::String^ ville_facturation) {
	this->ville_facturation = ville_facturation;
}
void NS_Comp_Mappage::map::setCPFacturation(System::String^ cp_facturation) {
	this->cp_facturation = cp_facturation;
}
void NS_Comp_Mappage::map::setAdresseLivraison(System::String^ adresse_livraison) {
	this->adresse_livraison = adresse_livraison;
}
void NS_Comp_Mappage::map::setVilleLivraison(System::String^ ville_livraison) {
	this->ville_livraison = ville_livraison;
}
void NS_Comp_Mappage::map::setCPLivraison(System::String^ cp_livraison) {
	this->cp_livraison = cp_livraison;
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
System::String^ NS_Comp_Mappage::map::getVilleFacturation(void) { return this->ville_facturation; }
System::String^ NS_Comp_Mappage::map::getCPFacturation(void) { return this->cp_facturation; }
System::String^ NS_Comp_Mappage::map::getAdresseLivraison(void) { return this->adresse_livraison; }
System::String^ NS_Comp_Mappage::map::getVilleLivraison(void) { return this->ville_livraison; }
System::String^ NS_Comp_Mappage::map::getCPLivraison(void) { return this->cp_livraison; }

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
void NS_Comp_Mappage::map::setCout(System::String^ cout) {
	this->cout = cout;
}

bool NS_Comp_Mappage::map::getReapproNec(void) { return this->reappro_nec; }
System::String^ NS_Comp_Mappage::map::getPrix(void) { return this->prix; }
System::String^ NS_Comp_Mappage::map::getRef(void) { return this->ref; }
System::String^ NS_Comp_Mappage::map::getDesignation(void) { return this->designation; }
System::String^ NS_Comp_Mappage::map::getStock(void) { return this->stock; }
System::String^ NS_Comp_Mappage::map::getReapprovisionnement(void) { return this->reapprovisionnement; }
System::String^ NS_Comp_Mappage::map::getTVA(void) { return this->TVA; }
System::String^ NS_Comp_Mappage::map::getCout(void) { return this->cout; }


// INSERT Catalogue --------------------------------------------------------------------------------------------------------

System::String^ NS_Comp_Mappage::map::InsertCatalogue(void)
{
	return "INSERT INTO Catalogue (produit, quantite, prix_ht, stock_min, TVA, cout) VALUES ('" + this->designation + "'," + this->stock + "," + this->prix + "," + this->reapprovisionnement + "," + this->TVA + "," + this->cout + ");";
}


//SELECT Catalogue -----------------------------------------------------------------------------------------------------------------------------------
System::String^ NS_Comp_Mappage::map::SelectCatalogue(void)
{
	int init = 0;
	System::String^ cdtb = "";
	System::String^ cdtid = "";
	System::String^ cdt1 = "";
	System::String^ cdt2 = "";
	System::String^ cdt3 = "";
	System::String^ cdt4 = "";
	System::String^ cdt5 = "";
	System::String^ cdt6 = "";
	
	
	if (this->reappro_nec == true) {
		cdtb = "WHERE stock <= reapprovisionnement";
		init++;
	}
	
	if (this->ref != "") {
		if (init > 0) {
			cdtid = " AND reference_produit = " + this->ref;
		}
		else {
			cdtid = "WHERE reference_produit = " + this->ref;
			init++;
		}
	}
	
	if (this->designation != "") {
		if (init > 0) {
			cdt1 = " AND produit = '" + this->designation + "'";
			init++;
		}
		else {
			cdt1 = "WHERE produit = '" + this->designation + "'";
			init++;
		}
	}

	if (this->stock != "") {
		if (init > 0) {
			cdt2 = " AND quantite = " + this->stock;
		}
		else {
			cdt2 = "WHERE quantite = " + this->stock;
			init++;
		}
	}
	else {
		cdt2 = "";
	}
	if (this->prix != "") {
		if (init > 0) {
			cdt3 = " AND prix_ht = " + this->prix;
		}
		else {
			cdt3 = "WHERE prix_ht = " + this->prix;
			init++;
		}
	}

	if (this->reapprovisionnement != "") {
		if (init > 0) {
			cdt4 = " AND stock_min = " + this->reapprovisionnement;	
		}
		else {
			cdt4 = "WHERE stock_min = " + this->reapprovisionnement;
			init++;
		}
	}
	
	if (this->TVA != "") {
		if (init > 0) {
			cdt5 = " AND TVA = " + this->TVA;
		}
		else {
			cdt5 = "WHERE TVA = " + this->TVA;
			init++;
		}
	}

	if (this->cout != "") {
		if (init > 0) {
			cdt6 = " AND cout = " + this->cout;
		}
		else {
			cdt6 = "WHERE cout = " + this->cout;
			init++;
		}
	}


	return "SELECT * FROM [projetPOO].[dbo].[Catalogue] " + cdtid + cdt1 + cdt2 + cdt3 + cdt4 + cdt5 + cdt6 + ";";
}



//------------------------------------------------------------------------------------------------------------------------------------------------------
//update 
System::String^ NS_Comp_Mappage::map::UpdateCatalogue(System::String^ new_designation, System::String^ new_stock, System::String^ new_reapprovisionnement, System::String^ new_prix, System::String^ new_TVA, System::String^ new_cout)
{
	int init = 0;
	System::String^ cdt1 = "";
	System::String^ cdt2 = "";
	System::String^ cdt3 = "";
	System::String^ cdt4 = "";
	System::String^ cdt5 = "";
	System::String^ cdt6 = "";
	System::String^ cdt7 = "";

	if (this->ref != "") {
		cdt1 = "WHERE reference_produit = " + this->ref;
		init++;
	}
	if (this->designation != "") {
		if (init > 0) {
			cdt2 = " AND produit = '" + this->designation + "'";
		}
		else {
			cdt2 = "WHERE produit = '" + this->designation + "'";
			init++;
		}
	}

	if (this->stock != "") {
		if (init > 0) {
			cdt3 = " AND quantite = " + this->stock;
		}
		else {
			cdt3 = "WHERE quantite = " + this->stock;
			init++;
		}
	}

	if (this->prix != "") {
		if (init > 0) {
			cdt4 = " AND prix_ht = " + this->prix;
		}
		else {
			cdt4 = "WHERE prix_ht = " + this->prix;
			init++;
		}
	}

	if (this->reapprovisionnement != "") {
		if (init > 0) {
			cdt5 = " AND stock_min = " + this->reapprovisionnement;
		}
		else {
			cdt5 = "WHERE stock_min = " + this->reapprovisionnement;
			init++;
		}
	}

	if (this->TVA != "") {
		if (init > 0) {
			cdt6 = " AND TVA = " + this->TVA;
		}
		else {
			cdt6 = "WHERE TVA = " + this->TVA;
			init++;
		}
	}
	
	if (this->cout != "") {
		if (init > 0) {
			cdt7 = " AND cout = " + this->cout;
		}
		else {
			cdt7 = "WHERE cout = " + this->cout;
			init++;
		}
	}


	//Nouvelles valeurs 
	int i = 0;
	System::String^ n_v1 = "";
	System::String^ n_v2 = "";
	System::String^ n_v3 = "";
	System::String^ n_v4 = "";
	System::String^ n_v5 = "";
	System::String^ n_v6 = "";

	if (new_designation != "") {
		n_v1 = " produit = '" + new_designation + "'";
		i++;
	}

	if (new_stock != "") {
		if (i > 0) {
			n_v2 = ", quantite = " + new_stock;
			i++;
		}
	}

	if (new_prix != "") {
		if (i > 0) {
			n_v3 = ", prix_ht = " + new_prix;
		}
		else {
			n_v3 = " prix_ht = ";
			i++;
		}
	}

	if (new_reapprovisionnement != "") {
		if (i > 0) {
			n_v4 = ", stock_min = " + new_reapprovisionnement;
		}
		else {
			n_v4 = " stock_min = " + new_reapprovisionnement;
			i++;
		}
	}

	if (new_TVA != "") {
		if (i > 0) {
			n_v5 = ", TVA = " + new_TVA;
		}
		else {
			n_v5 = " TVA = " + new_TVA;
			i++;
		}
	}

	if (new_cout != "") {
		if (i > 0) {
			n_v6 = ", cout = " + new_cout;
		}
		else {
			n_v6 = " cout = " + new_cout;
			i++;
		}
	}

	return "UPDATE [projetPOO].[dbo].[Catalogue] SET" + n_v1 + n_v2 + n_v3 + n_v4 + n_v5 + n_v6 + " " + cdt1 + cdt2 + cdt3 + cdt4 + cdt5 + cdt6 + cdt7 + ";";
}



//---------------------------------------------------------------------------------------------------------------------------------------------


//DELETE Catalogue

System::String^ NS_Comp_Mappage::map::DeleteCatalogue(void)
{
	int init = 0;
	System::String^ cdtid = "";
	System::String^ cdt1 = "";
	System::String^ cdt2 = "";
	System::String^ cdt3 = "";
	System::String^ cdt4 = "";
	System::String^ cdt5 = "";
	System::String^ cdt6 = "";


	if (this->ref != "") {
		cdtid = "WHERE reference_produit = " + this->ref;
	}

	if (this->designation != "") {
		if (init > 0) {
			cdt1 = " AND produit = '" + this->designation + "'";
		}
		else {
			cdt1 = "WHERE produit = '" + this->designation + "'";
			init++;
		}
	}

	if (this->stock != "") {
		if (init > 0) {
			cdt2 = " AND quantite = " + this->stock;
		}
		else {
			cdt2 = "WHERE quantite = " + this->stock;
			init++;
		}
	}

	if (this->prix != "") {
		if (init > 0) {
			cdt3 = " AND prix_ht = " + this->prix;	
		}
		else {
			cdt3 = "WHERE prix_ht = " + this->prix;
			init++;
		}
	}


	if (this->reapprovisionnement != "") {
		if (init > 0) {
			cdt4 = " AND stock_min = " + this->reapprovisionnement;
		}
		else {
			cdt4 = "WHERE stock_min = " + this->reapprovisionnement;
			init++;
		}
	}

	if (this->TVA != "") {
		if (init > 0) {
			cdt5 = " AND TVA = " + this->TVA;
		}
		else {
			cdt5 = "WHERE TVA = " + this->TVA;
			init++;
		}
	}

	if (this->cout != "") {
		if (init > 0) {
			cdt6 = " AND coout = " + this->cout;
		}
		else {
			cdt6 = "WHERE cout = " + this->cout;
			init++;
		}
	}



	return "DELETE FROM [projetPOO].[dbo].[Catalogue] " + cdtid + cdt1 + cdt2 + cdt3 + cdt4 + cdt5 + cdt6 + ";";
}
