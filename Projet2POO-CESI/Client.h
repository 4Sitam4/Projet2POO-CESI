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

	public:
		Client();

		void creerClient(System::String^, System::String^, System::String^, System::DateTime^, System::DateTime^);


	};
}

