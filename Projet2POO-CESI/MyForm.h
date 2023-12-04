#pragma once
#include "GestionPersonnel.h"


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
            this->buttonPersonnel->Location = System::Drawing::Point(18, 12);
            this->buttonPersonnel->Name = L"buttonPersonnel";
            this->buttonPersonnel->Size = System::Drawing::Size(145, 23);
            this->buttonPersonnel->TabIndex = 0;
            this->buttonPersonnel->Text = L"Gestion du Personnel";
            this->buttonPersonnel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->buttonPersonnel->UseVisualStyleBackColor = true;
            this->buttonPersonnel->Click += gcnew System::EventHandler(this, &MyForm::buttonPersonnel_Click);

            // 
            // buttonClients
            // 
            this->buttonClients->Location = System::Drawing::Point(169, 12);
            this->buttonClients->Name = L"buttonClients";
            this->buttonClients->Size = System::Drawing::Size(145, 23);
            this->buttonClients->TabIndex = 1;
            this->buttonClients->Text = L"Gestion des Clients";
            this->buttonClients->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->buttonClients->UseVisualStyleBackColor = true;
            // 
            // buttonCommandes
            // 
            this->buttonCommandes->Location = System::Drawing::Point(18, 41);
            this->buttonCommandes->Name = L"buttonCommandes";
            this->buttonCommandes->Size = System::Drawing::Size(145, 23);
            this->buttonCommandes->TabIndex = 2;
            this->buttonCommandes->Text = L"Gestion des Commandes";
            this->buttonCommandes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->buttonCommandes->UseVisualStyleBackColor = true;
            // 
            // buttonStock
            // 
            this->buttonStock->Location = System::Drawing::Point(169, 41);
            this->buttonStock->Name = L"buttonStock";
            this->buttonStock->Size = System::Drawing::Size(145, 23);
            this->buttonStock->TabIndex = 3;
            this->buttonStock->Text = L"Gestion du Stock";
            this->buttonStock->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->buttonStock->UseVisualStyleBackColor = true;
            // 
            // buttonStatistiques
            // 
            this->buttonStatistiques->Location = System::Drawing::Point(18, 70);
            this->buttonStatistiques->Name = L"buttonStatistiques";
            this->buttonStatistiques->Size = System::Drawing::Size(145, 23);
            this->buttonStatistiques->TabIndex = 4;
            this->buttonStatistiques->Text = L"Gestion des Statistiques";
            this->buttonStatistiques->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->buttonStatistiques->UseVisualStyleBackColor = true;
            this->buttonStatistiques->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(329, 107);
            this->Controls->Add(this->buttonStatistiques);
            this->Controls->Add(this->buttonStock);
            this->Controls->Add(this->buttonCommandes);
            this->Controls->Add(this->buttonClients);
            this->Controls->Add(this->buttonPersonnel);
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


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
