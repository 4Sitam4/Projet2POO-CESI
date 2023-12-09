#include "cad.h"
#ifndef STATISTIQUE_H
#define STATISTIQUE_H

namespace NS_Comp_Statistique
{
	ref class Statistique
	{
	private:
		NS_Comp_Data::cad^ oCad;

	public:
		Statistique();
		System::String^ calcPanierMoyen();
		System::Data::DataSet^ calcSeuilReappro(System::String^);
		


	};
}

#endif STATISTIQUE_H
