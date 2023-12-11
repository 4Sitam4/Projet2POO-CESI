using namespace System::Collections::Generic;


#pragma once
#include "map.h"
#include "cad.h"

#ifndef COMM_H
#define COMM_H

namespace NS_Comp_Commande
{
	ref class Commande
	{
	private:
		NS_Comp_Data::cad^ oCad;
		NS_Comp_Data::cad^ oCad1;
		NS_Comp_Data::cad^ oCad2;
		NS_Comp_Mappage::map^ oMapTB2;

	public:
		Commande();
		System::Data::DataSet^ afficherArticle(System::String^);
		System::Data::DataSet^ afficherClientCommande(System::String^);
		void ajoutArticleCommande(System::String^, System::String^);
		void creerCommande(System::String^, System::DateTime^, System::String^, System::DateTime^, System::String^, System::String^, System::String^);
		System::Data::DataSet^ afficherCommande(System::String^, System::String^, System::DateTime^, System::String^, System::DateTime^, System::String^, System::String^, System::String^, System::String^);
		System::Data::DataSet^ afficherDetailCommande(System::String^, System::String^);
		void supprimerCommande(System::String^);

	};
}

#endif COMM_H