#include "NomPrenom.h"
#include "map.h"
#include "cad.h"


namespace NS_Comp_Personnel
{
	ref class Personnel : public NS_Comp_NomPrenom::NomPrenom
	{
	private :
		const System::String^ table = "Personnel";
		System::String^ superieur;
		System::String^ adresse;
		System::DateTime^ date_embauche;
	private:
		NS_Comp_Data::cad^ oCad;
		NS_Comp_Mappage::map^ oMappTB;

	public:
		Personnel();
		//Personnel();
		System::String^ getSuperieur();
		System::String^ getAdresse();
		System::DateTime^ getDateEmbauche();

		void creerPersonnel(System::String^, System::String^, System::String^, System::String^, System::DateTime^);
		System::Data::DataSet^ afficherPersonnel(System::String^, System::String^, System::String^, System::String^, System::DateTime^, System::String^);
		void supprimerPersonnel(System::String^, System::String^, System::String^, System::String^, System::DateTime^);

		void setSuperieur(System::String^);
		void setAdresse(System::String^);
		void setDateEmbauche(System::DateTime^);
	};
}
