#ifndef MAP_H
#define MAP_H

namespace NS_Comp_Mappage
{
	ref class map {
	private:
		System::String^ sSql;

		//pour personnel et client
		System::String^ nom ="";
		System::String^ prenom ="";
		//pour personnel
		System::String^ id;
		System::String^ superieur ="";
		System::String^ adresse ="";
		System::DateTime^ date_embauche;
		//pour client
		System::String^ adresse_facturation;
		System::String^ ville_facturation;
		System::String^ cp_facturation;
		System::String^ adresse_livraison;
		System::String^ ville_livraison;
		System::String^ cp_livraison;
		System::DateTime^ date_naissance;
		System::DateTime^ date_premier_achat;
		//Catalogue
		bool reappro_nec;
		System::String^ prix ="";
		System::String^ ref;
		System::String^ designation ="";
		System::String^ stock ="";
		System::String^ reapprovisionnement ="";
		System::String^ TVA ="";
		//...

	public:
		System::String^ SelectPersonnel(void);
		System::String^ InsertPersonnel(void);
		System::String^ DeletePersonnel(void);
		System::String^ UpdatePersonnel(System::String^, System::String^, System::String^, System::String^, System::DateTime^);
		
		System::String^ SelectClient(void);
		System::String^ InsertClient(void);
		
		System::String^ DeleteClient(System::String^);
		
		System::String^ UpdateClient(System::String^, System::String^, System::String^, System::String^, System::DateTime^, System::DateTime^);
		
		
		System::String^ SelectCatalogue(void);
		System::String^ InsertCatalogue(void);
		System::String^ DeleteCatalogue(void);
		System::String^ UpdateCatalogue(System::String^, System::String^, System::String^, System::String^, System::String^);

		/*
		System::String^ SelectCommande(void);
		System::String^ InsertCommande(void);
		System::String^ DeleteCommande(void);
		System::String^ UpdateCommande(void);
		*/

		//pour personnel et client
		void setId(System::String^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		//pour personnel
		void setSuperieur(System::String^);
		void setAdresse(System::String^);
		void setDateEmbauche(System::DateTime^);
		//pour client
		void setAdresseFacturation(System::String^);
		void setVilleFacturation(System::String^);
		void setCPFacturation(System::String^);
		void setAdresseLivraison(System::String^);
		void setVilleLivraison(System::String^);
		void setCPLivraison(System::String^);
		void setDateNaissance(System::DateTime^);
		void setDatePremierAchat(System::DateTime^);
		//Catalogue ...


				//pour personnel et client
		System::String^ getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		//pour personnel
		System::String^ getSuperieur(void);
		System::String^ getAdresse(void);
		System::DateTime^ getDateEmbauche(void);
		//pour client
		System::String^ getAdresseFacturation(void);
		System::String^ getVilleFacturation(void);
		System::String^ getCPFacturation(void);
		System::String^ getAdresseLivraison(void);
		System::String^ getVilleLivraison(void);
		System::String^ getCPLivraison(void);
		System::DateTime^ getDateNaissance(void);
		System::DateTime^ getDatePremierAchat(void);
		
			//Catalogue 
		bool getReapproNec(void);
		System::String^ getPrix(void);
		System::String^ getRef(void);
		System::String^ getDesignation(void);
		System::String^ getStock(void);
		System::String^ getReapprovisionnement(void);
		System::String^ getTVA(void);
		//
		void setReapproNec(bool);
		void setPrix(System::String^);
		void setRef(System::String^);
		void setDesignation(System::String^);
		void setStock(System::String^);
		void setReapprovisionnement(System::String^);
		void setTVA(System::String^);

		//...
	};
}




#endif MAP_H