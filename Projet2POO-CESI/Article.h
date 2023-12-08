#pragma once

namespace NS_Comp_Article{

ref class Article
{
	private:
	System::String^ Reference;
	System::String^ Nom;
	double Prix;
	int Quantite;

	public:
		Article();
		Article(System::String^ ref, System::String^ nom, double prix, int quantite);

		System::String^ get_ref();
		System::String^ get_nom();
		double get_prix();
		int get_quantite();

		void set_ref(System::String^ ref);
		void set_nom(System::String^ nom);
		void set_prix(double prix);
		void set_quantite(int quantite);

		// Quantite * Prix = Prix total
		double sommeQxP(int quantite, double prix);

		~Article();

};
}

