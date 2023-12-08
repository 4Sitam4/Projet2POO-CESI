#include "NomPrenom.h"
#include "map.h"
#include "cad.h"

namespace NS_Comp_Client
{
	ref class Client : public NS_Comp_NomPrenom::NomPrenom
	{
	private:
		NS_Comp_Data::cad^ oCad;
		NS_Comp_Mappage::map^ oMapTB2;
		NS_Comp_Mappage::map^ oMapTB3;

	public:
		Client();

		void creerClient(System::String^, System::String^, System::String^, System::DateTime^, System::DateTime^);
		void modifierClient(System::String^, System::String^, System::String^, System::String^, System::DateTime^, System::DateTime^);
		void supprimerClient(System::String^);
		System::Data::DataSet^ afficherClient(System::String^, System::String^, System::String^, System::String^, System::DateTime^, System::DateTime^, System::String^);


	};
}

