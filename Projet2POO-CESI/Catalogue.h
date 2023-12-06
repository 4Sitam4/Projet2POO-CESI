#pragma once

namespace NS_Comp_Catalogue
{
	ref class Catalogue
	{
	private:
		float prix;
		int ref;
		System::String^ designation;
		int stock;
		int reapprovisionnement;
		float TVA;

	public:
		Catalogue();
		Catalogue(int, System::String^, float, float, int, int);
		float getPrix(void);
		int getRef(void);
		System::String^ getDesignation(void);
		int getStock(void);
		int reapprovisionnement(void);
		float getTVA(void);

		void setPrix(float);
		void setRef(int);
		void setDesignation(System::String^);
		void setStock(int);
		void setReapprovisionnement(int);
		void setTVA(float);

	};
}

