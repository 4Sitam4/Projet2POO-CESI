#include "NomPrenom.h"


namespace NS_Comp_Personnel
{
	ref class Personnel : public NS_Comp_NomPrenom::NomPrenom
	{
	private :
		System::String^ superieur;
		System::String^ adresse;
		System::String^ date_embauche;

	public:
		Personnel();
		Personnel(System::String^, System::String^, System::String^, System::String^, System::String^);
		System::String^ getSuperieur();
		System::String^ getAdresse();
		System::String^ getDateEmbauche();

		void setSuperieur(System::String^);
		void setAdresse(System::String^);
		void setDateEmbauche(System::String^);
	};
}
