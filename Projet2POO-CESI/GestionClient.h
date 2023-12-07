#pragma once
#include "Client.h"

namespace Projet2POOCESI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionClient
	/// </summary>
	public ref class GestionClient : public System::Windows::Forms::Form
	{
	public:
		GestionClient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionClient()
		{
			if (components)
			{
				delete components;
			}
		}

	private: NS_Comp_Client::Client^ oCli;
	private: System::Data::DataSet^ oDs;



	private: System::Windows::Forms::GroupBox^ groupBoxCreerClient;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDatePremierAchat;
	private: System::Windows::Forms::Button^ buttonCreerClient;
	private: System::Windows::Forms::Label^ labelDateNaissance;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDateNaissance;
	private: System::Windows::Forms::Label^ labelPersoPrenom;
	private: System::Windows::Forms::TextBox^ textBoxClientPrenom;
	private: System::Windows::Forms::Label^ labelPersoNom;
	private: System::Windows::Forms::TextBox^ textBoxClientNom;
	private: System::Windows::Forms::Label^ labelAdressseFacturation;
	private: System::Windows::Forms::TextBox^ textBoxAdresseFacturation;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBoxCreerClient = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerDatePremierAchat = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonCreerClient = (gcnew System::Windows::Forms::Button());
			this->labelDateNaissance = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerDateNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelPersoPrenom = (gcnew System::Windows::Forms::Label());
			this->textBoxClientPrenom = (gcnew System::Windows::Forms::TextBox());
			this->labelPersoNom = (gcnew System::Windows::Forms::Label());
			this->textBoxClientNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdresseFacturation = (gcnew System::Windows::Forms::TextBox());
			this->labelAdressseFacturation = (gcnew System::Windows::Forms::Label());
			this->groupBoxCreerClient->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxCreerClient
			// 
			this->groupBoxCreerClient->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBoxCreerClient->Controls->Add(this->labelAdressseFacturation);
			this->groupBoxCreerClient->Controls->Add(this->textBoxAdresseFacturation);
			this->groupBoxCreerClient->Controls->Add(this->label1);
			this->groupBoxCreerClient->Controls->Add(this->dateTimePickerDatePremierAchat);
			this->groupBoxCreerClient->Controls->Add(this->buttonCreerClient);
			this->groupBoxCreerClient->Controls->Add(this->labelDateNaissance);
			this->groupBoxCreerClient->Controls->Add(this->dateTimePickerDateNaissance);
			this->groupBoxCreerClient->Controls->Add(this->labelPersoPrenom);
			this->groupBoxCreerClient->Controls->Add(this->textBoxClientPrenom);
			this->groupBoxCreerClient->Controls->Add(this->labelPersoNom);
			this->groupBoxCreerClient->Controls->Add(this->textBoxClientNom);
			this->groupBoxCreerClient->Location = System::Drawing::Point(22, 28);
			this->groupBoxCreerClient->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxCreerClient->Name = L"groupBoxCreerClient";
			this->groupBoxCreerClient->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxCreerClient->Size = System::Drawing::Size(312, 339);
			this->groupBoxCreerClient->TabIndex = 2;
			this->groupBoxCreerClient->TabStop = false;
			this->groupBoxCreerClient->Text = L"Ajout d\'un client";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 224);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Date de premier achat";
			// 
			// dateTimePickerDatePremierAchat
			// 
			this->dateTimePickerDatePremierAchat->Location = System::Drawing::Point(7, 244);
			this->dateTimePickerDatePremierAchat->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerDatePremierAchat->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerDatePremierAchat->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePickerDatePremierAchat->Name = L"dateTimePickerDatePremierAchat";
			this->dateTimePickerDatePremierAchat->Size = System::Drawing::Size(291, 22);
			this->dateTimePickerDatePremierAchat->TabIndex = 9;
			// 
			// buttonCreerClient
			// 
			this->buttonCreerClient->Location = System::Drawing::Point(99, 291);
			this->buttonCreerClient->Margin = System::Windows::Forms::Padding(4);
			this->buttonCreerClient->Name = L"buttonCreerClient";
			this->buttonCreerClient->Size = System::Drawing::Size(100, 28);
			this->buttonCreerClient->TabIndex = 8;
			this->buttonCreerClient->Text = L"Créer";
			this->buttonCreerClient->UseVisualStyleBackColor = true;
			this->buttonCreerClient->Click += gcnew System::EventHandler(this, &GestionClient::buttonCreerClient_Click);
			// 
			// labelDateNaissance
			// 
			this->labelDateNaissance->AutoSize = true;
			this->labelDateNaissance->Location = System::Drawing::Point(8, 155);
			this->labelDateNaissance->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDateNaissance->Name = L"labelDateNaissance";
			this->labelDateNaissance->Size = System::Drawing::Size(120, 16);
			this->labelDateNaissance->TabIndex = 7;
			this->labelDateNaissance->Text = L"Date de naissance";
			// 
			// dateTimePickerDateNaissance
			// 
			this->dateTimePickerDateNaissance->Location = System::Drawing::Point(8, 175);
			this->dateTimePickerDateNaissance->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerDateNaissance->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerDateNaissance->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePickerDateNaissance->Name = L"dateTimePickerDateNaissance";
			this->dateTimePickerDateNaissance->Size = System::Drawing::Size(291, 22);
			this->dateTimePickerDateNaissance->TabIndex = 6;
			// 
			// labelPersoPrenom
			// 
			this->labelPersoPrenom->AutoSize = true;
			this->labelPersoPrenom->Location = System::Drawing::Point(163, 36);
			this->labelPersoPrenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPersoPrenom->Name = L"labelPersoPrenom";
			this->labelPersoPrenom->Size = System::Drawing::Size(54, 16);
			this->labelPersoPrenom->TabIndex = 3;
			this->labelPersoPrenom->Text = L"Prénom";
			// 
			// textBoxClientPrenom
			// 
			this->textBoxClientPrenom->Location = System::Drawing::Point(167, 56);
			this->textBoxClientPrenom->Margin = System::Windows::Forms::Padding(4);
			this->textBoxClientPrenom->Name = L"textBoxClientPrenom";
			this->textBoxClientPrenom->Size = System::Drawing::Size(132, 22);
			this->textBoxClientPrenom->TabIndex = 2;
			// 
			// labelPersoNom
			// 
			this->labelPersoNom->AutoSize = true;
			this->labelPersoNom->Location = System::Drawing::Point(4, 36);
			this->labelPersoNom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPersoNom->Name = L"labelPersoNom";
			this->labelPersoNom->Size = System::Drawing::Size(36, 16);
			this->labelPersoNom->TabIndex = 1;
			this->labelPersoNom->Text = L"Nom";
			// 
			// textBoxClientNom
			// 
			this->textBoxClientNom->Location = System::Drawing::Point(8, 56);
			this->textBoxClientNom->Margin = System::Windows::Forms::Padding(4);
			this->textBoxClientNom->Name = L"textBoxClientNom";
			this->textBoxClientNom->Size = System::Drawing::Size(132, 22);
			this->textBoxClientNom->TabIndex = 0;
			// 
			// textBoxAdresseFacturation
			// 
			this->textBoxAdresseFacturation->Location = System::Drawing::Point(7, 113);
			this->textBoxAdresseFacturation->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdresseFacturation->Name = L"textBoxAdresseFacturation";
			this->textBoxAdresseFacturation->Size = System::Drawing::Size(281, 22);
			this->textBoxAdresseFacturation->TabIndex = 11;
			// 
			// labelAdressseFacturation
			// 
			this->labelAdressseFacturation->AutoSize = true;
			this->labelAdressseFacturation->Location = System::Drawing::Point(8, 93);
			this->labelAdressseFacturation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAdressseFacturation->Name = L"labelAdressseFacturation";
			this->labelAdressseFacturation->Size = System::Drawing::Size(141, 16);
			this->labelAdressseFacturation->TabIndex = 12;
			this->labelAdressseFacturation->Text = L"Adresse de facturation";
			// 
			// GestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1230, 508);
			this->Controls->Add(this->groupBoxCreerClient);
			this->Name = L"GestionClient";
			this->Text = L"GestionClient";
			this->groupBoxCreerClient->ResumeLayout(false);
			this->groupBoxCreerClient->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonCreerClient_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBoxClientNom->Text->Length == 0 || this->textBoxClientPrenom->Text->Length == 0 || this->textBoxAdresseFacturation->Text->Length == 0) {
			MessageBox::Show("Une des données est vide, merci d'entrer toutes les données.");
		}
		else {
			this->oCli->creerClient(this->textBoxClientNom->Text, this->textBoxClientPrenom->Text, this->textBoxAdresseFacturation->Text, this->dateTimePickerDateNaissance->Value, this->dateTimePickerDatePremierAchat->Value);
			MessageBox::Show("Personnel insérer dans la base de donnée");
		}
	}
};
}
