#include "NomPrenom.h"
#include "map.h"
#include "cad.h"


namespace NS_Comp_Personnel
{
	ref class Personnel : public NS_Comp_NomPrenom::NomPrenom
	{
	private:
		NS_Comp_Data::cad^ oCad;
		NS_Comp_Mappage::map^ oMappTB;
		NS_Comp_Mappage::map^ oMappTB1;

	public:
		Personnel();
		//Personnel();

		void creerPersonnel(System::String^, System::String^, System::String^, System::String^, System::DateTime^);
		System::Data::DataSet^ afficherPersonnel(System::String^, System::String^, System::String^, System::String^, System::DateTime^, System::String^);
		void supprimerPersonnel(System::String^, System::String^, System::String^, System::String^, System::DateTime^);
		void modifierPersonnel(System::String^, System::String^, System::String^, System::String^, System::DateTime^, System::String^, System::String^, System::String^, System::String^, System::DateTime^);
	};
}
