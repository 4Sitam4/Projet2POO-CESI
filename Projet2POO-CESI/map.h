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
		System::DateTime^ date_naissance;
		System::DateTime^ date_premier_achat;
		//Catalogue ...


	public:
		System::String^ SelectPersonnel(void);
		System::String^ InsertPersonnel(void);
		System::String^ DeletePersonnel(void);
		System::String^ UpdatePersonnel(System::String^, System::String^, System::String^, System::String^, System::DateTime^);
		
		//System::String^ SelectClient(void);
		System::String^ InsertClient(void);
		
		System::String^ DeleteClient(System::String^);
		
		System::String^ UpdateClient(System::String^, System::String^, System::String^, System::String^, System::DateTime^, System::DateTime^);
		
		/*
		System::String^ SelectCatalogue(void);
		System::String^ InsertCatalogue(void);
		System::String^ DeleteCatalogue(void);
		System::String^ UpdateCatalogue(void);
		*/
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
		System::DateTime^ getDateNaissance(void);
		System::DateTime^ getDatePremierAchat(void);
		//Catalogue ...
	};
}




#endif MAP_H