#pragma once
#include "GestionPersonnel.h"
#include "GestionClient.h"
#include "GestionCatalogue.h"
#include "GestionStatistique.h"
#include "GestionCommande.h"


namespace Projet2POOCESI {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: Ajoutez ici le code du constructeur
            //
        }

    protected:
        /// <summary>
        /// Nettoyer les ressources utilisées.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ buttonPersonnel;
    private: System::Windows::Forms::Button^ buttonClients;
    private: System::Windows::Forms::Button^ buttonCommandes;
    private: System::Windows::Forms::Button^ buttonStock;
    private: System::Windows::Forms::Button^ buttonStatistiques;
    protected:

    protected:





    protected:








    private:
        /// <summary>
        /// Requis par le concepteur
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas 
        /// le contenu de cette méthode avec l'éditeur de code.
        /// </summary>
        void InitializeComponent(void)
        {
            this->buttonPersonnel = (gcnew System::Windows::Forms::Button());
            this->buttonClients = (gcnew System::Windows::Forms::Button());
            this->buttonCommandes = (gcnew System::Windows::Forms::Button());
            this->buttonStock = (gcnew System::Windows::Forms::Button());
            this->buttonStatistiques = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // buttonPersonnel
            // 
            this->buttonPersonnel->Location = System::Drawing::Point(24, 15);
            this->buttonPersonnel->Margin = System::Windows::Forms::Padding(4);
            this->buttonPersonnel->Name = L"buttonPersonnel";
            this->buttonPersonnel->Size = System::Drawing::Size(193, 28);
            this->buttonPersonnel->TabIndex = 0;
            this->buttonPersonnel->Text = L"Gestion du Personnel";
            this->buttonPersonnel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->buttonPersonnel->UseVisualStyleBackColor = true;
            this->buttonPersonnel->Click += gcnew System::EventHandler(this, &MyForm::buttonPersonnel_Click);
            // 
            // buttonClients
            // 
            this->buttonClients->Location = System::Drawing::Point(225, 15);
            this->buttonClients->Margin = System::Windows::Forms::Padding(4);
            this->buttonClients->Name = L"buttonClients";
            this->buttonClients->Size = System::Drawing::Size(193, 28);
            this->buttonClients->TabIndex = 1;
            this->buttonClients->Text = L"Gestion des Clients";
            this->buttonClients->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->buttonClients->UseVisualStyleBackColor = true;
            this->buttonClients->Click += gcnew System::EventHandler(this, &MyForm::buttonClients_Click);
            // 
            // buttonCommandes
            // 
            this->buttonCommandes->Location = System::Drawing::Point(24, 50);
            this->buttonCommandes->Margin = System::Windows::Forms::Padding(4);
            this->buttonCommandes->Name = L"buttonCommandes";
            this->buttonCommandes->Size = System::Drawing::Size(193, 28);
            this->buttonCommandes->TabIndex = 2;
            this->buttonCommandes->Text = L"Gestion des Commandes";
            this->buttonCommandes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->buttonCommandes->UseVisualStyleBackColor = true;
            this->buttonCommandes->Click += gcnew System::EventHandler(this, &MyForm::buttonCommandes_Click);
            // 
            // buttonStock
            // 
            this->buttonStock->Location = System::Drawing::Point(225, 50);
            this->buttonStock->Margin = System::Windows::Forms::Padding(4);
            this->buttonStock->Name = L"buttonStock";
            this->buttonStock->Size = System::Drawing::Size(193, 28);
            this->buttonStock->TabIndex = 3;
            this->buttonStock->Text = L"Gestion du Stock";
            this->buttonStock->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->buttonStock->UseVisualStyleBackColor = true;
            this->buttonStock->Click += gcnew System::EventHandler(this, &MyForm::buttonStock_Click);
            // 
            // buttonStatistiques
            // 
            this->buttonStatistiques->Location = System::Drawing::Point(24, 86);
            this->buttonStatistiques->Margin = System::Windows::Forms::Padding(4);
            this->buttonStatistiques->Name = L"buttonStatistiques";
            this->buttonStatistiques->Size = System::Drawing::Size(193, 28);
            this->buttonStatistiques->TabIndex = 4;
            this->buttonStatistiques->Text = L"Gestion des Statistiques";
            this->buttonStatistiques->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->buttonStatistiques->UseVisualStyleBackColor = true;
            this->buttonStatistiques->Click += gcnew System::EventHandler(this, &MyForm::buttonStatistiques_Click);

            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(439, 132);
            this->Controls->Add(this->buttonStatistiques);
            this->Controls->Add(this->buttonStock);
            this->Controls->Add(this->buttonCommandes);
            this->Controls->Add(this->buttonClients);
            this->Controls->Add(this->buttonPersonnel);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"MyForm";
            this->Text = L"Accueil";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);

        }
#pragma endregion

    private: System::Void buttonPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
        // MessageBox::Show("Bouton cliqué!");
        GestionPersonnel^ gestionPersonnel = gcnew GestionPersonnel();
        gestionPersonnel->ShowDialog(); // ou utilisez Show pour une fenêtre non-modale
    }

    private: System::Void buttonClients_Click(System::Object^ sender, System::EventArgs^ e) {
        GestionClient^ gestionClient = gcnew GestionClient();
        gestionClient->ShowDialog();
    }




private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void buttonStock_Click(System::Object^ sender, System::EventArgs^ e) {
    GestionCatalogue^ gestionCatalogue = gcnew GestionCatalogue();
    gestionCatalogue->ShowDialog();
}
    private: System::Void buttonCommandes_Click(System::Object^ sender, System::EventArgs^ e) {
        GestionCommande^ gestionCommande = gcnew GestionCommande();
        gestionCommande->ShowDialog();
    }

private: System::Void buttonStatistiques_Click(System::Object^ sender, System::EventArgs^ e) {
    GestionStatistique^ gestionStatistique = gcnew GestionStatistique();
    gestionStatistique->ShowDialog();
}
};
}
