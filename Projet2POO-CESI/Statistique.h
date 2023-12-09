#include "cad.h"
#ifndef STATISTIQUE_H
#define STATISTIQUE_H

namespace NS_Comp_Statistique
{
	ref class Statistique
	{
	private:
		NS_Comp_Data::cad^ oCad;
		System::String^ mois;
		System::String^ sql;

	public:
		Statistique();
		System::String^ calcPanierMoyen();
		System::Data::DataSet^ calcSeuilReappro(System::String^);
		System::String ^ calcChiffreAffaireMois(System::String^, System::String^);
		System::String^ calcAchatsClient(System::String^);

		System::Data::DataSet^ calcTop10(System::String^);
		System::Data::DataSet^ calcLast10(System::String^);


		System::String^ calcValComStock();

		void setMois(System::String^);
		System::String^ getMois(void);

	};
}

#endif STATISTIQUE_H
