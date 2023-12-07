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
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBoxCritSelect;
	private: System::Windows::Forms::TextBox^ textBoxIDCritSelectModif;
	private: System::Windows::Forms::DateTimePicker^ TimePickerDateCritSelectModif;
	private: System::Windows::Forms::Label^ labelIDModifier;
	private: System::Windows::Forms::Label^ labelDateModifier;
	private: System::Windows::Forms::Label^ labelNomModifier;
	private: System::Windows::Forms::TextBox^ textBoxNomCritSelectModif;
	private: System::Windows::Forms::Label^ labelPrenomModifier;
	private: System::Windows::Forms::TextBox^ textBoxSuperieurCritSelectModif;
	private: System::Windows::Forms::TextBox^ textBoxAdresseCritSelectModif;
	private: System::Windows::Forms::Label^ labelSuperieurModifier;
	private: System::Windows::Forms::TextBox^ textBoxPrenomCritSelectModif;
	private: System::Windows::Forms::Label^ labelAdresseModifier;
	private: System::Windows::Forms::GroupBox^ groupBoxCritères;
	private: System::Windows::Forms::DateTimePicker^ TimePickerDateNewModif;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxSuperieurNewModif;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxAdresseNewModif;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxPrenomNewModif;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxNomNewModif;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxIDNewModif;
	private: System::Windows::Forms::Button^ buttonModifier;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ labelDateSupprimer;
	private: System::Windows::Forms::DateTimePicker^ TimePickerDateSupprimer;
	private: System::Windows::Forms::Button^ buttonSupprimer;
	private: System::Windows::Forms::TextBox^ textBoxAdresseSupprimer;
	private: System::Windows::Forms::Label^ labelAdresseSupprimer;
	private: System::Windows::Forms::TextBox^ textBoxSuperieurSupprimer;
	private: System::Windows::Forms::Label^ labelSuperieurSupprimer;
	private: System::Windows::Forms::TextBox^ textBoxPrenomSupprimer;
	private: System::Windows::Forms::Label^ labelPrenomSupprimer;
	private: System::Windows::Forms::TextBox^ textBoxNomSupprimer;
	private: System::Windows::Forms::Label^ labelNomSupprimer;
	private: System::Windows::Forms::TextBox^ textBoxIDSupprimer;
	private: System::Windows::Forms::Label^ labelIDSupprimer;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBoxIDAfficher;
	private: System::Windows::Forms::Label^ labelIDAfficher;
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDateAfficher;
	private: System::Windows::Forms::Button^ buttonAfficher;
	private: System::Windows::Forms::Label^ labelDateAfficher;
	private: System::Windows::Forms::TextBox^ textBoxSuperieurAfficher;
	private: System::Windows::Forms::Label^ labelSuperieurAfficher;
	private: System::Windows::Forms::TextBox^ textBoxAdresseAfficher;
	private: System::Windows::Forms::Label^ labelAdresseAfficher;
	private: System::Windows::Forms::Label^ labelPrenomAfficher;
	private: System::Windows::Forms::TextBox^ textBoxPrenomAfficher;
	private: System::Windows::Forms::Label^ labelNomAfficher;
	private: System::Windows::Forms::TextBox^ textBoxNomAfficher;

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
			this->labelAdressseFacturation = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseFacturation = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerDatePremierAchat = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonCreerClient = (gcnew System::Windows::Forms::Button());
			this->labelDateNaissance = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerDateNaissance = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelPersoPrenom = (gcnew System::Windows::Forms::Label());
			this->textBoxClientPrenom = (gcnew System::Windows::Forms::TextBox());
			this->labelPersoNom = (gcnew System::Windows::Forms::Label());
			this->textBoxClientNom = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxCritSelect = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxIDCritSelectModif = (gcnew System::Windows::Forms::TextBox());
			this->TimePickerDateCritSelectModif = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelIDModifier = (gcnew System::Windows::Forms::Label());
			this->labelDateModifier = (gcnew System::Windows::Forms::Label());
			this->labelNomModifier = (gcnew System::Windows::Forms::Label());
			this->textBoxNomCritSelectModif = (gcnew System::Windows::Forms::TextBox());
			this->labelPrenomModifier = (gcnew System::Windows::Forms::Label());
			this->textBoxSuperieurCritSelectModif = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdresseCritSelectModif = (gcnew System::Windows::Forms::TextBox());
			this->labelSuperieurModifier = (gcnew System::Windows::Forms::Label());
			this->textBoxPrenomCritSelectModif = (gcnew System::Windows::Forms::TextBox());
			this->labelAdresseModifier = (gcnew System::Windows::Forms::Label());
			this->groupBoxCritères = (gcnew System::Windows::Forms::GroupBox());
			this->TimePickerDateNewModif = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxSuperieurNewModif = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseNewModif = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrenomNewModif = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxNomNewModif = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxIDNewModif = (gcnew System::Windows::Forms::TextBox());
			this->buttonModifier = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->labelDateSupprimer = (gcnew System::Windows::Forms::Label());
			this->TimePickerDateSupprimer = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonSupprimer = (gcnew System::Windows::Forms::Button());
			this->textBoxAdresseSupprimer = (gcnew System::Windows::Forms::TextBox());
			this->labelAdresseSupprimer = (gcnew System::Windows::Forms::Label());
			this->textBoxSuperieurSupprimer = (gcnew System::Windows::Forms::TextBox());
			this->labelSuperieurSupprimer = (gcnew System::Windows::Forms::Label());
			this->textBoxPrenomSupprimer = (gcnew System::Windows::Forms::TextBox());
			this->labelPrenomSupprimer = (gcnew System::Windows::Forms::Label());
			this->textBoxNomSupprimer = (gcnew System::Windows::Forms::TextBox());
			this->labelNomSupprimer = (gcnew System::Windows::Forms::Label());
			this->textBoxIDSupprimer = (gcnew System::Windows::Forms::TextBox());
			this->labelIDSupprimer = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxIDAfficher = (gcnew System::Windows::Forms::TextBox());
			this->labelIDAfficher = (gcnew System::Windows::Forms::Label());
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->dateTimePickerDateAfficher = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonAfficher = (gcnew System::Windows::Forms::Button());
			this->labelDateAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxSuperieurAfficher = (gcnew System::Windows::Forms::TextBox());
			this->labelSuperieurAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseAfficher = (gcnew System::Windows::Forms::TextBox());
			this->labelAdresseAfficher = (gcnew System::Windows::Forms::Label());
			this->labelPrenomAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxPrenomAfficher = (gcnew System::Windows::Forms::TextBox());
			this->labelNomAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxNomAfficher = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxCreerClient->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBoxCritSelect->SuspendLayout();
			this->groupBoxCritères->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
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
			// textBoxAdresseFacturation
			// 
			this->textBoxAdresseFacturation->Location = System::Drawing::Point(7, 113);
			this->textBoxAdresseFacturation->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdresseFacturation->Name = L"textBoxAdresseFacturation";
			this->textBoxAdresseFacturation->Size = System::Drawing::Size(281, 22);
			this->textBoxAdresseFacturation->TabIndex = 11;
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
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox4->Controls->Add(this->groupBoxCritSelect);
			this->groupBox4->Controls->Add(this->groupBoxCritères);
			this->groupBox4->Controls->Add(this->buttonModifier);
			this->groupBox4->Location = System::Drawing::Point(394, 28);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(800, 493);
			this->groupBox4->TabIndex = 16;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Modifier membre du personnel";
			// 
			// groupBoxCritSelect
			// 
			this->groupBoxCritSelect->BackColor = System::Drawing::SystemColors::MenuBar;
			this->groupBoxCritSelect->Controls->Add(this->textBoxIDCritSelectModif);
			this->groupBoxCritSelect->Controls->Add(this->TimePickerDateCritSelectModif);
			this->groupBoxCritSelect->Controls->Add(this->labelIDModifier);
			this->groupBoxCritSelect->Controls->Add(this->labelDateModifier);
			this->groupBoxCritSelect->Controls->Add(this->labelNomModifier);
			this->groupBoxCritSelect->Controls->Add(this->textBoxNomCritSelectModif);
			this->groupBoxCritSelect->Controls->Add(this->labelPrenomModifier);
			this->groupBoxCritSelect->Controls->Add(this->textBoxSuperieurCritSelectModif);
			this->groupBoxCritSelect->Controls->Add(this->textBoxAdresseCritSelectModif);
			this->groupBoxCritSelect->Controls->Add(this->labelSuperieurModifier);
			this->groupBoxCritSelect->Controls->Add(this->textBoxPrenomCritSelectModif);
			this->groupBoxCritSelect->Controls->Add(this->labelAdresseModifier);
			this->groupBoxCritSelect->Location = System::Drawing::Point(25, 42);
			this->groupBoxCritSelect->Name = L"groupBoxCritSelect";
			this->groupBoxCritSelect->Size = System::Drawing::Size(326, 363);
			this->groupBoxCritSelect->TabIndex = 16;
			this->groupBoxCritSelect->TabStop = false;
			this->groupBoxCritSelect->Text = L"Critères de sélection";
			// 
			// textBoxIDCritSelectModif
			// 
			this->textBoxIDCritSelectModif->Location = System::Drawing::Point(7, 50);
			this->textBoxIDCritSelectModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxIDCritSelectModif->Name = L"textBoxIDCritSelectModif";
			this->textBoxIDCritSelectModif->Size = System::Drawing::Size(55, 22);
			this->textBoxIDCritSelectModif->TabIndex = 14;
			// 
			// TimePickerDateCritSelectModif
			// 
			this->TimePickerDateCritSelectModif->Location = System::Drawing::Point(7, 319);
			this->TimePickerDateCritSelectModif->Margin = System::Windows::Forms::Padding(4);
			this->TimePickerDateCritSelectModif->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->TimePickerDateCritSelectModif->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->TimePickerDateCritSelectModif->Name = L"TimePickerDateCritSelectModif";
			this->TimePickerDateCritSelectModif->Size = System::Drawing::Size(291, 22);
			this->TimePickerDateCritSelectModif->TabIndex = 14;
			// 
			// labelIDModifier
			// 
			this->labelIDModifier->AutoSize = true;
			this->labelIDModifier->Location = System::Drawing::Point(4, 32);
			this->labelIDModifier->Name = L"labelIDModifier";
			this->labelIDModifier->Size = System::Drawing::Size(20, 16);
			this->labelIDModifier->TabIndex = 14;
			this->labelIDModifier->Text = L"ID";
			// 
			// labelDateModifier
			// 
			this->labelDateModifier->AutoSize = true;
			this->labelDateModifier->Location = System::Drawing::Point(6, 299);
			this->labelDateModifier->Name = L"labelDateModifier";
			this->labelDateModifier->Size = System::Drawing::Size(114, 16);
			this->labelDateModifier->TabIndex = 14;
			this->labelDateModifier->Text = L"Date d\'embauche";
			// 
			// labelNomModifier
			// 
			this->labelNomModifier->AutoSize = true;
			this->labelNomModifier->Location = System::Drawing::Point(6, 82);
			this->labelNomModifier->Name = L"labelNomModifier";
			this->labelNomModifier->Size = System::Drawing::Size(36, 16);
			this->labelNomModifier->TabIndex = 14;
			this->labelNomModifier->Text = L"Nom";
			// 
			// textBoxNomCritSelectModif
			// 
			this->textBoxNomCritSelectModif->Location = System::Drawing::Point(7, 100);
			this->textBoxNomCritSelectModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomCritSelectModif->Name = L"textBoxNomCritSelectModif";
			this->textBoxNomCritSelectModif->Size = System::Drawing::Size(133, 22);
			this->textBoxNomCritSelectModif->TabIndex = 14;
			// 
			// labelPrenomModifier
			// 
			this->labelPrenomModifier->AutoSize = true;
			this->labelPrenomModifier->Location = System::Drawing::Point(6, 139);
			this->labelPrenomModifier->Name = L"labelPrenomModifier";
			this->labelPrenomModifier->Size = System::Drawing::Size(54, 16);
			this->labelPrenomModifier->TabIndex = 14;
			this->labelPrenomModifier->Text = L"Prenom";
			// 
			// textBoxSuperieurCritSelectModif
			// 
			this->textBoxSuperieurCritSelectModif->Location = System::Drawing::Point(7, 266);
			this->textBoxSuperieurCritSelectModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSuperieurCritSelectModif->Name = L"textBoxSuperieurCritSelectModif";
			this->textBoxSuperieurCritSelectModif->Size = System::Drawing::Size(207, 22);
			this->textBoxSuperieurCritSelectModif->TabIndex = 14;
			// 
			// textBoxAdresseCritSelectModif
			// 
			this->textBoxAdresseCritSelectModif->Location = System::Drawing::Point(7, 212);
			this->textBoxAdresseCritSelectModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdresseCritSelectModif->Name = L"textBoxAdresseCritSelectModif";
			this->textBoxAdresseCritSelectModif->Size = System::Drawing::Size(252, 22);
			this->textBoxAdresseCritSelectModif->TabIndex = 14;
			this->textBoxAdresseCritSelectModif->Visible = false;
			// 
			// labelSuperieurModifier
			// 
			this->labelSuperieurModifier->AutoSize = true;
			this->labelSuperieurModifier->Location = System::Drawing::Point(6, 248);
			this->labelSuperieurModifier->Name = L"labelSuperieurModifier";
			this->labelSuperieurModifier->Size = System::Drawing::Size(65, 16);
			this->labelSuperieurModifier->TabIndex = 14;
			this->labelSuperieurModifier->Text = L"Supérieur";
			// 
			// textBoxPrenomCritSelectModif
			// 
			this->textBoxPrenomCritSelectModif->Location = System::Drawing::Point(9, 161);
			this->textBoxPrenomCritSelectModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrenomCritSelectModif->Name = L"textBoxPrenomCritSelectModif";
			this->textBoxPrenomCritSelectModif->Size = System::Drawing::Size(132, 22);
			this->textBoxPrenomCritSelectModif->TabIndex = 14;
			// 
			// labelAdresseModifier
			// 
			this->labelAdresseModifier->AutoSize = true;
			this->labelAdresseModifier->Location = System::Drawing::Point(8, 194);
			this->labelAdresseModifier->Name = L"labelAdresseModifier";
			this->labelAdresseModifier->Size = System::Drawing::Size(58, 16);
			this->labelAdresseModifier->TabIndex = 14;
			this->labelAdresseModifier->Text = L"Adresse";
			// 
			// groupBoxCritères
			// 
			this->groupBoxCritères->BackColor = System::Drawing::SystemColors::MenuBar;
			this->groupBoxCritères->Controls->Add(this->TimePickerDateNewModif);
			this->groupBoxCritères->Controls->Add(this->label6);
			this->groupBoxCritères->Controls->Add(this->textBoxSuperieurNewModif);
			this->groupBoxCritères->Controls->Add(this->label5);
			this->groupBoxCritères->Controls->Add(this->textBoxAdresseNewModif);
			this->groupBoxCritères->Controls->Add(this->label4);
			this->groupBoxCritères->Controls->Add(this->label3);
			this->groupBoxCritères->Controls->Add(this->textBoxPrenomNewModif);
			this->groupBoxCritères->Controls->Add(this->label2);
			this->groupBoxCritères->Controls->Add(this->textBoxNomNewModif);
			this->groupBoxCritères->Controls->Add(this->label7);
			this->groupBoxCritères->Controls->Add(this->textBoxIDNewModif);
			this->groupBoxCritères->Location = System::Drawing::Point(425, 42);
			this->groupBoxCritères->Name = L"groupBoxCritères";
			this->groupBoxCritères->Size = System::Drawing::Size(331, 363);
			this->groupBoxCritères->TabIndex = 15;
			this->groupBoxCritères->TabStop = false;
			this->groupBoxCritères->Text = L"Nouvelles valeures";
			// 
			// TimePickerDateNewModif
			// 
			this->TimePickerDateNewModif->Location = System::Drawing::Point(9, 319);
			this->TimePickerDateNewModif->Margin = System::Windows::Forms::Padding(4);
			this->TimePickerDateNewModif->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->TimePickerDateNewModif->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->TimePickerDateNewModif->Name = L"TimePickerDateNewModif";
			this->TimePickerDateNewModif->Size = System::Drawing::Size(291, 22);
			this->TimePickerDateNewModif->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 299);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Date d\'embauche";
			// 
			// textBoxSuperieurNewModif
			// 
			this->textBoxSuperieurNewModif->Location = System::Drawing::Point(9, 266);
			this->textBoxSuperieurNewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSuperieurNewModif->Name = L"textBoxSuperieurNewModif";
			this->textBoxSuperieurNewModif->Size = System::Drawing::Size(207, 22);
			this->textBoxSuperieurNewModif->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 248);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Supérieur";
			// 
			// textBoxAdresseNewModif
			// 
			this->textBoxAdresseNewModif->Location = System::Drawing::Point(9, 212);
			this->textBoxAdresseNewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdresseNewModif->Name = L"textBoxAdresseNewModif";
			this->textBoxAdresseNewModif->Size = System::Drawing::Size(252, 22);
			this->textBoxAdresseNewModif->TabIndex = 15;
			this->textBoxAdresseNewModif->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Adresse";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Prenom";
			// 
			// textBoxPrenomNewModif
			// 
			this->textBoxPrenomNewModif->Location = System::Drawing::Point(9, 161);
			this->textBoxPrenomNewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrenomNewModif->Name = L"textBoxPrenomNewModif";
			this->textBoxPrenomNewModif->Size = System::Drawing::Size(132, 22);
			this->textBoxPrenomNewModif->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nom";
			// 
			// textBoxNomNewModif
			// 
			this->textBoxNomNewModif->Location = System::Drawing::Point(9, 100);
			this->textBoxNomNewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomNewModif->Name = L"textBoxNomNewModif";
			this->textBoxNomNewModif->Size = System::Drawing::Size(133, 22);
			this->textBoxNomNewModif->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"ID";
			// 
			// textBoxIDNewModif
			// 
			this->textBoxIDNewModif->Location = System::Drawing::Point(9, 50);
			this->textBoxIDNewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxIDNewModif->Name = L"textBoxIDNewModif";
			this->textBoxIDNewModif->Size = System::Drawing::Size(55, 22);
			this->textBoxIDNewModif->TabIndex = 15;
			// 
			// buttonModifier
			// 
			this->buttonModifier->Location = System::Drawing::Point(340, 442);
			this->buttonModifier->Margin = System::Windows::Forms::Padding(4);
			this->buttonModifier->Name = L"buttonModifier";
			this->buttonModifier->Size = System::Drawing::Size(105, 28);
			this->buttonModifier->TabIndex = 14;
			this->buttonModifier->Text = L"Modifier";
			this->buttonModifier->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox3->Controls->Add(this->labelDateSupprimer);
			this->groupBox3->Controls->Add(this->TimePickerDateSupprimer);
			this->groupBox3->Controls->Add(this->buttonSupprimer);
			this->groupBox3->Controls->Add(this->textBoxAdresseSupprimer);
			this->groupBox3->Controls->Add(this->labelAdresseSupprimer);
			this->groupBox3->Controls->Add(this->textBoxSuperieurSupprimer);
			this->groupBox3->Controls->Add(this->labelSuperieurSupprimer);
			this->groupBox3->Controls->Add(this->textBoxPrenomSupprimer);
			this->groupBox3->Controls->Add(this->labelPrenomSupprimer);
			this->groupBox3->Controls->Add(this->textBoxNomSupprimer);
			this->groupBox3->Controls->Add(this->labelNomSupprimer);
			this->groupBox3->Controls->Add(this->textBoxIDSupprimer);
			this->groupBox3->Controls->Add(this->labelIDSupprimer);
			this->groupBox3->Location = System::Drawing::Point(1478, 28);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(311, 447);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Supprimer membre du personnel";
			// 
			// labelDateSupprimer
			// 
			this->labelDateSupprimer->AutoSize = true;
			this->labelDateSupprimer->Location = System::Drawing::Point(6, 299);
			this->labelDateSupprimer->Name = L"labelDateSupprimer";
			this->labelDateSupprimer->Size = System::Drawing::Size(114, 16);
			this->labelDateSupprimer->TabIndex = 14;
			this->labelDateSupprimer->Text = L"Date d\'embauche";
			// 
			// TimePickerDateSupprimer
			// 
			this->TimePickerDateSupprimer->Location = System::Drawing::Point(9, 319);
			this->TimePickerDateSupprimer->Margin = System::Windows::Forms::Padding(4);
			this->TimePickerDateSupprimer->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->TimePickerDateSupprimer->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->TimePickerDateSupprimer->Name = L"TimePickerDateSupprimer";
			this->TimePickerDateSupprimer->Size = System::Drawing::Size(291, 22);
			this->TimePickerDateSupprimer->TabIndex = 14;
			// 
			// buttonSupprimer
			// 
			this->buttonSupprimer->Location = System::Drawing::Point(101, 377);
			this->buttonSupprimer->Margin = System::Windows::Forms::Padding(4);
			this->buttonSupprimer->Name = L"buttonSupprimer";
			this->buttonSupprimer->Size = System::Drawing::Size(96, 28);
			this->buttonSupprimer->TabIndex = 14;
			this->buttonSupprimer->Text = L"Supprimer";
			this->buttonSupprimer->UseVisualStyleBackColor = true;
			// 
			// textBoxAdresseSupprimer
			// 
			this->textBoxAdresseSupprimer->Location = System::Drawing::Point(6, 203);
			this->textBoxAdresseSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdresseSupprimer->Name = L"textBoxAdresseSupprimer";
			this->textBoxAdresseSupprimer->Size = System::Drawing::Size(252, 22);
			this->textBoxAdresseSupprimer->TabIndex = 14;
			this->textBoxAdresseSupprimer->Visible = false;
			// 
			// labelAdresseSupprimer
			// 
			this->labelAdresseSupprimer->AutoSize = true;
			this->labelAdresseSupprimer->Location = System::Drawing::Point(6, 181);
			this->labelAdresseSupprimer->Name = L"labelAdresseSupprimer";
			this->labelAdresseSupprimer->Size = System::Drawing::Size(58, 16);
			this->labelAdresseSupprimer->TabIndex = 14;
			this->labelAdresseSupprimer->Text = L"Adresse";
			// 
			// textBoxSuperieurSupprimer
			// 
			this->textBoxSuperieurSupprimer->Location = System::Drawing::Point(6, 258);
			this->textBoxSuperieurSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSuperieurSupprimer->Name = L"textBoxSuperieurSupprimer";
			this->textBoxSuperieurSupprimer->Size = System::Drawing::Size(207, 22);
			this->textBoxSuperieurSupprimer->TabIndex = 14;
			// 
			// labelSuperieurSupprimer
			// 
			this->labelSuperieurSupprimer->AutoSize = true;
			this->labelSuperieurSupprimer->Location = System::Drawing::Point(6, 240);
			this->labelSuperieurSupprimer->Name = L"labelSuperieurSupprimer";
			this->labelSuperieurSupprimer->Size = System::Drawing::Size(65, 16);
			this->labelSuperieurSupprimer->TabIndex = 14;
			this->labelSuperieurSupprimer->Text = L"Supérieur";
			// 
			// textBoxPrenomSupprimer
			// 
			this->textBoxPrenomSupprimer->Location = System::Drawing::Point(6, 142);
			this->textBoxPrenomSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrenomSupprimer->Name = L"textBoxPrenomSupprimer";
			this->textBoxPrenomSupprimer->Size = System::Drawing::Size(132, 22);
			this->textBoxPrenomSupprimer->TabIndex = 14;
			// 
			// labelPrenomSupprimer
			// 
			this->labelPrenomSupprimer->AutoSize = true;
			this->labelPrenomSupprimer->Location = System::Drawing::Point(6, 122);
			this->labelPrenomSupprimer->Name = L"labelPrenomSupprimer";
			this->labelPrenomSupprimer->Size = System::Drawing::Size(54, 16);
			this->labelPrenomSupprimer->TabIndex = 14;
			this->labelPrenomSupprimer->Text = L"Prenom";
			// 
			// textBoxNomSupprimer
			// 
			this->textBoxNomSupprimer->Location = System::Drawing::Point(6, 92);
			this->textBoxNomSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomSupprimer->Name = L"textBoxNomSupprimer";
			this->textBoxNomSupprimer->Size = System::Drawing::Size(133, 22);
			this->textBoxNomSupprimer->TabIndex = 14;
			// 
			// labelNomSupprimer
			// 
			this->labelNomSupprimer->AutoSize = true;
			this->labelNomSupprimer->Location = System::Drawing::Point(6, 73);
			this->labelNomSupprimer->Name = L"labelNomSupprimer";
			this->labelNomSupprimer->Size = System::Drawing::Size(36, 16);
			this->labelNomSupprimer->TabIndex = 14;
			this->labelNomSupprimer->Text = L"Nom";
			// 
			// textBoxIDSupprimer
			// 
			this->textBoxIDSupprimer->Location = System::Drawing::Point(6, 42);
			this->textBoxIDSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxIDSupprimer->Name = L"textBoxIDSupprimer";
			this->textBoxIDSupprimer->Size = System::Drawing::Size(55, 22);
			this->textBoxIDSupprimer->TabIndex = 14;
			// 
			// labelIDSupprimer
			// 
			this->labelIDSupprimer->AutoSize = true;
			this->labelIDSupprimer->Location = System::Drawing::Point(6, 22);
			this->labelIDSupprimer->Name = L"labelIDSupprimer";
			this->labelIDSupprimer->Size = System::Drawing::Size(20, 16);
			this->labelIDSupprimer->TabIndex = 14;
			this->labelIDSupprimer->Text = L"ID";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->Controls->Add(this->textBoxIDAfficher);
			this->groupBox2->Controls->Add(this->labelIDAfficher);
			this->groupBox2->Controls->Add(this->dgv_enr);
			this->groupBox2->Controls->Add(this->dateTimePickerDateAfficher);
			this->groupBox2->Controls->Add(this->buttonAfficher);
			this->groupBox2->Controls->Add(this->labelDateAfficher);
			this->groupBox2->Controls->Add(this->textBoxSuperieurAfficher);
			this->groupBox2->Controls->Add(this->labelSuperieurAfficher);
			this->groupBox2->Controls->Add(this->textBoxAdresseAfficher);
			this->groupBox2->Controls->Add(this->labelAdresseAfficher);
			this->groupBox2->Controls->Add(this->labelPrenomAfficher);
			this->groupBox2->Controls->Add(this->textBoxPrenomAfficher);
			this->groupBox2->Controls->Add(this->labelNomAfficher);
			this->groupBox2->Controls->Add(this->textBoxNomAfficher);
			this->groupBox2->Location = System::Drawing::Point(121, 545);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(1375, 479);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Afficher membre du personnel";
			// 
			// textBoxIDAfficher
			// 
			this->textBoxIDAfficher->Location = System::Drawing::Point(9, 71);
			this->textBoxIDAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxIDAfficher->Name = L"textBoxIDAfficher";
			this->textBoxIDAfficher->Size = System::Drawing::Size(133, 22);
			this->textBoxIDAfficher->TabIndex = 13;
			// 
			// labelIDAfficher
			// 
			this->labelIDAfficher->AutoSize = true;
			this->labelIDAfficher->Location = System::Drawing::Point(6, 53);
			this->labelIDAfficher->Name = L"labelIDAfficher";
			this->labelIDAfficher->Size = System::Drawing::Size(20, 16);
			this->labelIDAfficher->TabIndex = 12;
			this->labelIDAfficher->Text = L"ID";
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(247, 196);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(851, 246);
			this->dgv_enr->TabIndex = 0;
			// 
			// dateTimePickerDateAfficher
			// 
			this->dateTimePickerDateAfficher->Location = System::Drawing::Point(1065, 71);
			this->dateTimePickerDateAfficher->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerDateAfficher->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerDateAfficher->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePickerDateAfficher->Name = L"dateTimePickerDateAfficher";
			this->dateTimePickerDateAfficher->Size = System::Drawing::Size(291, 22);
			this->dateTimePickerDateAfficher->TabIndex = 11;
			// 
			// buttonAfficher
			// 
			this->buttonAfficher->Location = System::Drawing::Point(543, 131);
			this->buttonAfficher->Margin = System::Windows::Forms::Padding(4);
			this->buttonAfficher->Name = L"buttonAfficher";
			this->buttonAfficher->Size = System::Drawing::Size(221, 49);
			this->buttonAfficher->TabIndex = 11;
			this->buttonAfficher->Text = L"Afficher";
			this->buttonAfficher->UseVisualStyleBackColor = true;
			// 
			// labelDateAfficher
			// 
			this->labelDateAfficher->AutoSize = true;
			this->labelDateAfficher->Location = System::Drawing::Point(1062, 53);
			this->labelDateAfficher->Name = L"labelDateAfficher";
			this->labelDateAfficher->Size = System::Drawing::Size(114, 16);
			this->labelDateAfficher->TabIndex = 8;
			this->labelDateAfficher->Text = L"Date d\'embauche";
			// 
			// textBoxSuperieurAfficher
			// 
			this->textBoxSuperieurAfficher->Location = System::Drawing::Point(527, 71);
			this->textBoxSuperieurAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSuperieurAfficher->Name = L"textBoxSuperieurAfficher";
			this->textBoxSuperieurAfficher->Size = System::Drawing::Size(207, 22);
			this->textBoxSuperieurAfficher->TabIndex = 7;
			// 
			// labelSuperieurAfficher
			// 
			this->labelSuperieurAfficher->AutoSize = true;
			this->labelSuperieurAfficher->Location = System::Drawing::Point(524, 53);
			this->labelSuperieurAfficher->Name = L"labelSuperieurAfficher";
			this->labelSuperieurAfficher->Size = System::Drawing::Size(65, 16);
			this->labelSuperieurAfficher->TabIndex = 6;
			this->labelSuperieurAfficher->Text = L"Supérieur";
			// 
			// textBoxAdresseAfficher
			// 
			this->textBoxAdresseAfficher->Location = System::Drawing::Point(775, 71);
			this->textBoxAdresseAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdresseAfficher->Name = L"textBoxAdresseAfficher";
			this->textBoxAdresseAfficher->Size = System::Drawing::Size(252, 22);
			this->textBoxAdresseAfficher->TabIndex = 5;
			this->textBoxAdresseAfficher->Visible = false;
			// 
			// labelAdresseAfficher
			// 
			this->labelAdresseAfficher->AutoSize = true;
			this->labelAdresseAfficher->Location = System::Drawing::Point(772, 53);
			this->labelAdresseAfficher->Name = L"labelAdresseAfficher";
			this->labelAdresseAfficher->Size = System::Drawing::Size(58, 16);
			this->labelAdresseAfficher->TabIndex = 4;
			this->labelAdresseAfficher->Text = L"Adresse";
			// 
			// labelPrenomAfficher
			// 
			this->labelPrenomAfficher->AutoSize = true;
			this->labelPrenomAfficher->Location = System::Drawing::Point(350, 53);
			this->labelPrenomAfficher->Name = L"labelPrenomAfficher";
			this->labelPrenomAfficher->Size = System::Drawing::Size(54, 16);
			this->labelPrenomAfficher->TabIndex = 3;
			this->labelPrenomAfficher->Text = L"Prenom";
			// 
			// textBoxPrenomAfficher
			// 
			this->textBoxPrenomAfficher->Location = System::Drawing::Point(353, 71);
			this->textBoxPrenomAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrenomAfficher->Name = L"textBoxPrenomAfficher";
			this->textBoxPrenomAfficher->Size = System::Drawing::Size(132, 22);
			this->textBoxPrenomAfficher->TabIndex = 2;
			// 
			// labelNomAfficher
			// 
			this->labelNomAfficher->AutoSize = true;
			this->labelNomAfficher->Location = System::Drawing::Point(176, 53);
			this->labelNomAfficher->Name = L"labelNomAfficher";
			this->labelNomAfficher->Size = System::Drawing::Size(36, 16);
			this->labelNomAfficher->TabIndex = 1;
			this->labelNomAfficher->Text = L"Nom";
			// 
			// textBoxNomAfficher
			// 
			this->textBoxNomAfficher->Location = System::Drawing::Point(179, 71);
			this->textBoxNomAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomAfficher->Name = L"textBoxNomAfficher";
			this->textBoxNomAfficher->Size = System::Drawing::Size(133, 22);
			this->textBoxNomAfficher->TabIndex = 0;
			// 
			// GestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBoxCreerClient);
			this->Name = L"GestionClient";
			this->Text = L"GestionClient";
			this->groupBoxCreerClient->ResumeLayout(false);
			this->groupBoxCreerClient->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBoxCritSelect->ResumeLayout(false);
			this->groupBoxCritSelect->PerformLayout();
			this->groupBoxCritères->ResumeLayout(false);
			this->groupBoxCritères->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
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
