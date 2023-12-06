#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include "NomPrenom.h"


namespace NS_Comp_Client
{
	ref class Client
	{
	private:
		int num;
		System::String^ adr_facture;
		System::String^ adr_livraison;

		System::String^ date_naiss;
		System::String^ date_ach;

	public:
		Client();
		Client(System::String^ nom, System::String^ prenom, int num, System::String^ adr_facture, System::String^ adr_livraison, System::String^ date_naiss, System::String^ date_ach);

		int getNum();
		System::String^ get_adr_facture();
		System::String^ get_adr_livraison();
		System::String^ get_date_naiss();
		System::String^ get_date_ach();

		void setNum(int num);
		void set_adr_facture(System::String^ adr_facture);
		void set_adr_livraison(System::String^ adr_livraison);
		void set_date_naiss(System::String^ date_naiss);
		void set_date_ach(System::String^ date_ach);

		~Client();

	}
};

