#include "cad.h"

namespace NS_Comp_Statistique
{
	ref class Statistique
	{
	private:
		NS_Comp_Data::cad^ oCad;
		System::String^ mois;

	public:
		Statistique();
		System::String^ calcPanierMoyen();
		System::String ^ calcChiffreAffaireMois(System::String^, System::String^);

		void setMois(System::String^);
		System::String^ getMois(void);

	};
}


