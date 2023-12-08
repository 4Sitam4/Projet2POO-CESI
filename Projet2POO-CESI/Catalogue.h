#pragma once
#include "map.h"
#include "cad.h"

#ifndef CAT_H
#define CAT_H

namespace NS_Comp_Catalogue
{
	ref class Catalogue
	{
	private:
		NS_Comp_Data::cad^ oCad;
		NS_Comp_Mappage::map^ oMappTB;
		NS_Comp_Mappage::map^ oMappTB1;

	public:
		Catalogue();
		void creerProduit(System::String^, System::String^, System::String^, System::String^, System::String^);
		System::Data::DataSet^ afficherProduits(bool, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void modifierProduit(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerProduit(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	};
}

#endif CAT_H

