#include "PCH.h"
#include "map.h"
#include "cad.h"

//afficher
System::String^ NS_Comp_Mappage::map::SelectPersonnel(void)
{
	int init = 0;
	System::String^ cdt1;
	System::String^ cdt2;
	System::String^ cdt3;
	System::String^ cdt4;
	//System::String^ cdt5;
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

System::String^ NS_Comp_Mappage::map::SelectArticle(void) {
	return "SELECT [reference_produit], [produit], [prix_ht] FROM [projetPOO].[dbo].[Catalogue]";
}

System::String^ NS_Comp_Mappage::map::SelectClientCommande(void) {
	return "SELECT [num], [nom], [prenom] FROM [projetPOO].[dbo].[tableClient]";
}



//creer
System::String^ NS_Comp_Mappage::map::InsertPersonnel(void)
{
	return "INSERT INTO Personnel (nom, prenom, adresse, superieur, date_embauche) VALUES ('" + this->nom + "','" + this->prenom + "','" + this->adresse + "','" + this->superieur + "','" + this->date_embauche + "')";
}

System::String^ NS_Comp_Mappage::map::InsertClient(void) {
	return "INSERT INTO tableClient (nom, prenom, adresse_facturation, date_naissance, date_premier_achat) VALUES ('" + this->nom + "','" + this->prenom + "','" + this->adresse_facturation + "','" + this->date_naissance + "','" + this->date_premier_achat + "')";
}

System::String^ NS_Comp_Mappage::map::InsertArticle(void) {
	oCad = gcnew NS_Comp_Data::cad();

	System::String^ sql1 = "SELECT TOP 1 id FROM Commande ORDER BY id DESC; ";
	this->oCad->getRequete(sql1);
	int IdCommande = System::Convert::ToInt32(this->oCad->getRequete(sql1)) + 1;
	System::Windows::Forms::MessageBox::Show("INSERT INTO Ligne_commande (reference_produit, id_commande, quantite) VALUES (" + System::Convert::ToInt32(this->ref_produit) + ", " + IdCommande + ", " + System::Convert::ToInt32(this->quantite) + ")"
	);
	return "INSERT INTO Ligne_commande(reference_produit, id_commande, quantite) VALUES(" + System::Convert::ToInt32(this->ref_produit) + ", " + IdCommande + ", " + System::Convert::ToInt32(this->quantite) + ")";
}

System::String^ NS_Comp_Mappage::map::InsertCommande(void) {

	return "INSERT INTO Commande (reference, date_emission, moyen_paiement, date_livraison, remise, montant_ht, num_client) VALUES ('" + this->ref_commande + System::Convert::ToString(this->id) + "','" + this->date_emission + "','" + this->moyen_paiement + "','" + this->date_livraison + "'," + System::Convert::ToInt32(this->remise) + "," + System::Convert::ToSingle(this->montant_ht) + "," + System::Convert::ToInt32(this->num_client) + ")";
}

System::String^ NS_Comp_Mappage::map::SelectCommande(void) {
	int init = 0;
	System::String^ cdt1 = "";
	System::String^ cdt2 = "";
	System::String^ cdt3 = "";
	System::String^ cdt4 = "";
	System::String^ cdt5 = "";
	System::String^ cdt6 = "";
	System::String^ cdt7 = "";
	System::String^ cdt8 = "";
	System::String^ cdtf = "";


	if (this->id_commande != "") {
		cdt1 = "WHERE id = '";
		init++;
	}

	if (this->ref_commande != "") {
		if (init > 0) {
			cdt2 = "' AND reference = '";
			init++;
		}
		else {
			cdt2 = "WHERE reference = '";
			init++;
		}
	}

	if (System::Convert::ToString(this->date_emission) != "1/1/1753 12:00:00 AM") {
		if (init > 0) {
			cdt3 = "' AND date_emission = '" + this->date_emission;
			init++;
		}
		else {
			cdt3 = "WHERE date_emission = '" + this->date_emission;
			init++;
		}
	}

	if (this->moyen_paiement != "") {
		if (init > 0) {
			cdt4 = "' AND moyen_paiement = '";
		}
		else {
			cdt4 = "WHERE moyen_paiement = '";
			init++;
		}
	}

	if (System::Convert::ToString(this->date_livraison) != "1/1/1753 12:00:00 AM") {
		if (init > 0) {
			cdt5 = "' AND date_livraison = '" + this->date_livraison;
			init++;
		}
		else {
			cdt5 = "WHERE date_livraison = '" + this->date_livraison;
			init++;
		}
	}

	if (this->remise != "") {
		if (init > 0) {
			cdt6 = "' AND remise = '";
		}
		else {
			cdt6 = "WHERE remise = '";
			init++;
		}
	}

	if (this->montant_ht != "") {
		if (init > 0) {
			cdt7 = "' AND montant_ht = '";
		}
		else {
			cdt7 = "WHERE montant_ht = '";
			init++;
		}
	}

	if (this->num_client != "") {
		if (init > 0) {
			cdt8 = "' AND num_client = '";
		}
		else {
			cdt8 = "WHERE num_client = '";
			init++;
		}
	}

	if (init>0) {
		cdtf = "'";
	}


	return "SELECT * FROM [projetPOO].[dbo].[Commande] " + cdt1 + this->id_commande + cdt2 + this->ref_commande + cdt3 + cdt4 + this->moyen_paiement + cdt5 + cdt6 + this->remise + cdt7 + this->montant_ht + cdt8 + this->num_client+ cdtf + ";";

}


System::String^ NS_Comp_Mappage::map::SelectLigneCommande(void) {
	return "SELECT * FROM [projetPOO].[dbo].[Ligne_commande] WHERE id_commande = " + this->id_commande;
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


System::String^ NS_Comp_Mappage::map::DeleteClient(System::String^ id) {
	return "DELETE FROM [projetPOO].[dbo].[tableClient] WHERE num = "+ System::Convert::ToInt32(this->getId()) + ";";
}

System::String^ NS_Comp_Mappage::map::DeleteCommande() {
	return "DELETE FROM [projetPOO].[dbo].[Commande] WHERE id = " + System::Convert::ToInt32(this->getIdCommande()) + ";";
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

//Commande article

void NS_Comp_Mappage::map::setIdCommandeArticle(System::String^ idCommande) { this->id_commande = idCommande; }
void NS_Comp_Mappage::map::setQuantite(System::String^ quantiteProduit) { this->quantite = quantiteProduit; }
void NS_Comp_Mappage::map::setRefProduit(System::String^ refProduit) { this->ref_produit = refProduit; }

void NS_Comp_Mappage::map::setRefCommande(System::String^ refCommande) { this->ref_commande = refCommande; }
void NS_Comp_Mappage::map::setDateEmission(System::DateTime^ dateEmission) { this->date_emission = dateEmission; }
void NS_Comp_Mappage::map::setMoyenPaiement(System::String^ moyenPaiement) { this->moyen_paiement = moyenPaiement; }
void NS_Comp_Mappage::map::setDateLivraison(System::DateTime^ dateLivraison) { this->date_livraison = dateLivraison; }
void NS_Comp_Mappage::map::setRemise(System::String^ Remise) { this->remise = Remise; }
void NS_Comp_Mappage::map::setMontantHT(System::String^ montantHT) { this->montant_ht = montantHT; }
void NS_Comp_Mappage::map::setNumClient(System::String^ numClient) { this->num_client = numClient; }
void NS_Comp_Mappage::map::setIdCommande(System::String^ idCommande) { this->id_commande = idCommande; }








System::String^ NS_Comp_Mappage::map::getIdCommande(void) { return this->id_commande;  }
System::String^ NS_Comp_Mappage::map::getIdCommandeArticle(void) { return this->id_commande; }
System::String^ NS_Comp_Mappage::map::getQuantiteProduit(void) { return this->quantite; }
System::String^ NS_Comp_Mappage::map::getRefProduit(void) { return this->ref_produit; }


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



//------------------------------------------------------------------------------------------------------------------------------------------------------
//update 
System::String^ NS_Comp_Mappage::map::UpdateCatalogue(System::String^ new_designation, System::String^ new_stock, System::String^ new_reapprovisionnement, System::String^ new_prix, System::String^ new_TVA)
{
	int init = 0;
	System::String^ cdt1;
	System::String^ cdt2;
	System::String^ cdt3;
	System::String^ cdt4;
	System::String^ cdt5;
	System::String^ cdt6;
	System::String^ cdtf;

	if (this->ref != "") {
		cdt6 = "WHERE reference_produit = ";
		init++;
	}
	else {
		cdt6 = "";
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
			}
			else {
				cdt2 = "' AND quantite = ";
				init++;
			}
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
		if (init > 0) {
			if (this->stock == "" && this->designation != "") {
				cdt3 = "' AND prix_ht = ";
				init++;
			}
			else {
				cdt3 = " AND prix_ht = ";
				init++;
			}
		}
		else {
			cdt3 = "WHERE prix_ht = '";
			init++;
		}
	}
	else {
		cdt3 = "";
	}

	if (this->reapprovisionnement != "") {
		if (init > 0) {
			if (this->stock == "" && this->prix == "" && this->designation != "") {
				cdt4 = "' AND stock_min = ";
				init++;
			}
			else {
				cdt4 = " AND stock_min = ";
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
			if (this->stock == "" && this->prix == "" && this->reapprovisionnement && this->designation != "") {
				cdt5 = "' AND TVA = ";
				init++;
			}
			else {
				cdt5 = " AND TVA = ";
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



	if (this->stock == "" && this->prix == "" && this->reapprovisionnement == "" && this->TVA == "" && this->designation != "") {
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
	System::String^ n_v5;
	System::String^ n_vf;

	if (new_designation != "") {
		n_v1 = " produit = '";
		i++;
	}
	else {
		n_v1 = "";
	}

	if (new_stock != "") {
		if (i > 0) {
			n_v2 = "', quantite = ";
			i++;
		}
		else {
			n_v2 = " quantite = ";
			i++;
		}
	}
	else {
		n_v2 = "";
	}
	if (new_prix != "") {
		if (i > 0) {
			if (new_stock == "" && new_designation != "") {
				n_v3 = "', prix_ht = ";
				i++;
			}
			else {
				n_v3 = ", prix_ht = ";
				i++;
			}
		}
		else {
			n_v3 = " prix_ht = ";
			i++;
		}
	}
	else {
		n_v3 = "";
	}

	if (new_reapprovisionnement != "") {
		if (i > 0) {
			if (new_stock == "" && new_prix == "" && new_designation != "") {
				n_v4 = "', stock_min = ";
				i++;
			}
			else {
				n_v4 = ", stock_min = ";
				i++;
			}
		}
		else {
			n_v4 = " stock_min = ";
			i++;
		}
	}
	else {
		n_v4 = "";
	}
	if (new_TVA != "") {
		if (i > 0) {
			if (new_stock == "" && new_prix == "" && new_reapprovisionnement == "" && new_designation != "") {
				n_v5 = "', TVA = ";
				i++;
			}
			else {
				n_v5 = ", TVA = ";
				i++;
			}
		}
		else {
			n_v5 = " TVA = ";
			i++;
		}
	}
	else {
		n_v5 = "";
	}

	if (new_stock == "" && new_prix == "" && new_reapprovisionnement == "" && new_TVA == "" && new_designation != "") {
		n_vf = "'";
	}
	else {
		n_vf = "";
	}

	return "UPDATE [projetPOO].[dbo].[Catalogue] SET" + n_v1 + new_designation+ n_v2 + new_stock + n_v3 + new_prix + n_v4 + new_reapprovisionnement + n_v5 + new_TVA + n_vf + " " + cdt6 + this->ref + cdt1 + this->designation + cdt2 + this->stock + cdt3 + this->prix + cdt4 + this->reapprovisionnement + cdt5 + this->TVA + cdtf + ";";
}



//---------------------------------------------------------------------------------------------------------------------------------------------


//DELETE Catalogue

System::String^ NS_Comp_Mappage::map::DeleteCatalogue(void)
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

	if (this->TVA == "" && this->reapprovisionnement == "" && this->stock == "" && this->prix == "" && this->designation != "") {
		cdtf = "'";
	}
	else {
		cdtf = "";
	}




	return "DELETE FROM [projetPOO].[dbo].[Catalogue] " + cdtid + this->ref + cdt1 + this->designation + cdt2 + this->stock + cdt3 + this->prix + cdt4 + this->reapprovisionnement + cdt5 + this->TVA + cdtf + ";";
}
