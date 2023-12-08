#include "Article.h"

using namespace NS_Comp_Article;

// Constructor implementation
Article::Article() : Reference(""), Nom(""), Prix(0.0), Quantite(0) {}

// Overloaded constructor implementation
Article::Article(System::String^ ref, System::String^ nom, double prix, int quantite)
{
    this->Reference = ref;
    this->Nom = nom;
    this->Prix = prix;
    this->Quantite = quantite;
}

// Destructor implementation
Article::~Article() {}

// Getters implementation
System::String^ Article::get_ref() { return this->Reference; }
System::String^ Article::get_nom() { return this->Nom; }
double Article::get_prix() { return this->Prix; }
int Article::get_quantite() { return this->Quantite; }

// Setters implementation
void Article::set_ref(System::String^ ref) { this->Reference = ref; }
void Article::set_nom(System::String^ nom) { this->Nom = nom; }
void Article::set_prix(double prix) { this->Prix = prix; }
void Article::set_quantite(int quantite) { this->Quantite = quantite; }

// Method implementation
double Article::sommeQxP(int quantite, double prix)
{
    return quantite * prix;
}
