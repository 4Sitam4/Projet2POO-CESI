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

	private: System::Windows::Forms::TextBox^ textBoxIdModifClient;

	private: System::Windows::Forms::Label^ labelIDModifier;








	private: System::Windows::Forms::GroupBox^ groupBoxCritères;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerNouvNaissanceModifClient;
	private: System::Windows::Forms::DateTimePicker^ TimePickerNouvDateNewModif;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxNouvPrenomModifClient;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxNouvNomModifClient;


	private: System::Windows::Forms::Button^ buttonModifier;
	private: System::Windows::Forms::TextBox^ textBoxNouvAdresseModifClient;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ buttonSupprimerClient;
	private: System::Windows::Forms::TextBox^ textBoxIdClientSupprimer;
	private: System::Windows::Forms::Label^ labelIDSupprimer;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerAnniversaireAfficherClient;

	private: System::Windows::Forms::TextBox^ textBoxIdAfficherClient;

	private: System::Windows::Forms::Label^ labelIDAfficher;
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerAchatAfficherClient;

	private: System::Windows::Forms::Button^ buttonAfficher;
	private: System::Windows::Forms::Label^ labelDateAfficher;
	private: System::Windows::Forms::TextBox^ textBoxAdresseAfficherClient;

	private: System::Windows::Forms::Label^ labelSuperieurAfficher;
	private: System::Windows::Forms::Label^ labelAdresseAfficher;
	private: System::Windows::Forms::Label^ labelPrenomAfficher;
	private: System::Windows::Forms::TextBox^ textBoxPrenomAfficherClient;

	private: System::Windows::Forms::Label^ labelNomAfficher;
	private: System::Windows::Forms::TextBox^ textBoxNomAfficherClient;

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionClient::typeid));
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
			this->textBoxIdModifClient = (gcnew System::Windows::Forms::TextBox());
			this->labelIDModifier = (gcnew System::Windows::Forms::Label());
			this->groupBoxCritères = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxNouvAdresseModifClient = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerNouvNaissanceModifClient = (gcnew System::Windows::Forms::DateTimePicker());
			this->TimePickerNouvDateNewModif = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxNouvPrenomModifClient = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxNouvNomModifClient = (gcnew System::Windows::Forms::TextBox());
			this->buttonModifier = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSupprimerClient = (gcnew System::Windows::Forms::Button());
			this->textBoxIdClientSupprimer = (gcnew System::Windows::Forms::TextBox());
			this->labelIDSupprimer = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePickerAnniversaireAfficherClient = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBoxIdAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->labelIDAfficher = (gcnew System::Windows::Forms::Label());
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->dateTimePickerAchatAfficherClient = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonAfficher = (gcnew System::Windows::Forms::Button());
			this->labelDateAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->labelSuperieurAfficher = (gcnew System::Windows::Forms::Label());
			this->labelAdresseAfficher = (gcnew System::Windows::Forms::Label());
			this->labelPrenomAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxPrenomAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->labelNomAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxNomAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
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
			this->groupBoxCreerClient->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBoxCreerClient.BackgroundImage")));
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
			this->groupBoxCreerClient->ForeColor = System::Drawing::Color::White;
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
			this->labelAdressseFacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelAdressseFacturation->ForeColor = System::Drawing::Color::White;
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
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::White;
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
			this->buttonCreerClient->ForeColor = System::Drawing::Color::Black;
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
			this->labelDateNaissance->BackColor = System::Drawing::Color::Transparent;
			this->labelDateNaissance->ForeColor = System::Drawing::Color::White;
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
			this->labelPersoPrenom->BackColor = System::Drawing::Color::Transparent;
			this->labelPersoPrenom->ForeColor = System::Drawing::Color::White;
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
			this->labelPersoNom->BackColor = System::Drawing::Color::Transparent;
			this->labelPersoNom->ForeColor = System::Drawing::Color::White;
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
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->groupBoxCritSelect);
			this->groupBox4->Controls->Add(this->groupBoxCritères);
			this->groupBox4->Controls->Add(this->buttonModifier);
			this->groupBox4->ForeColor = System::Drawing::Color::White;
			this->groupBox4->Location = System::Drawing::Point(364, 28);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(800, 493);
			this->groupBox4->TabIndex = 16;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Modifier un client";
			// 
			// groupBoxCritSelect
			// 
			this->groupBoxCritSelect->BackColor = System::Drawing::Color::Transparent;
			this->groupBoxCritSelect->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBoxCritSelect.BackgroundImage")));
			this->groupBoxCritSelect->Controls->Add(this->textBoxIdModifClient);
			this->groupBoxCritSelect->Controls->Add(this->labelIDModifier);
			this->groupBoxCritSelect->ForeColor = System::Drawing::Color::White;
			this->groupBoxCritSelect->Location = System::Drawing::Point(25, 42);
			this->groupBoxCritSelect->Name = L"groupBoxCritSelect";
			this->groupBoxCritSelect->Size = System::Drawing::Size(236, 126);
			this->groupBoxCritSelect->TabIndex = 16;
			this->groupBoxCritSelect->TabStop = false;
			this->groupBoxCritSelect->Text = L"Critères de sélection";
			// 
			// textBoxIdModifClient
			// 
			this->textBoxIdModifClient->Location = System::Drawing::Point(7, 50);
			this->textBoxIdModifClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxIdModifClient->Name = L"textBoxIdModifClient";
			this->textBoxIdModifClient->Size = System::Drawing::Size(55, 22);
			this->textBoxIdModifClient->TabIndex = 14;
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
			// groupBoxCritères
			// 
			this->groupBoxCritères->BackColor = System::Drawing::Color::White;
			this->groupBoxCritères->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBoxCritères.BackgroundImage")));
			this->groupBoxCritères->Controls->Add(this->textBoxNouvAdresseModifClient);
			this->groupBoxCritères->Controls->Add(this->dateTimePickerNouvNaissanceModifClient);
			this->groupBoxCritères->Controls->Add(this->TimePickerNouvDateNewModif);
			this->groupBoxCritères->Controls->Add(this->label6);
			this->groupBoxCritères->Controls->Add(this->label5);
			this->groupBoxCritères->Controls->Add(this->label4);
			this->groupBoxCritères->Controls->Add(this->label3);
			this->groupBoxCritères->Controls->Add(this->textBoxNouvPrenomModifClient);
			this->groupBoxCritères->Controls->Add(this->label2);
			this->groupBoxCritères->Controls->Add(this->textBoxNouvNomModifClient);
			this->groupBoxCritères->ForeColor = System::Drawing::Color::White;
			this->groupBoxCritères->Location = System::Drawing::Point(425, 42);
			this->groupBoxCritères->Name = L"groupBoxCritères";
			this->groupBoxCritères->Size = System::Drawing::Size(331, 363);
			this->groupBoxCritères->TabIndex = 15;
			this->groupBoxCritères->TabStop = false;
			this->groupBoxCritères->Text = L"Nouvelles valeures";
			// 
			// textBoxNouvAdresseModifClient
			// 
			this->textBoxNouvAdresseModifClient->Location = System::Drawing::Point(4, 185);
			this->textBoxNouvAdresseModifClient->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNouvAdresseModifClient->Name = L"textBoxNouvAdresseModifClient";
			this->textBoxNouvAdresseModifClient->Size = System::Drawing::Size(281, 22);
			this->textBoxNouvAdresseModifClient->TabIndex = 13;
			// 
			// dateTimePickerNouvNaissanceModifClient
			// 
			this->dateTimePickerNouvNaissanceModifClient->CustomFormat = L"";
			this->dateTimePickerNouvNaissanceModifClient->Location = System::Drawing::Point(4, 239);
			this->dateTimePickerNouvNaissanceModifClient->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerNouvNaissanceModifClient->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerNouvNaissanceModifClient->Name = L"dateTimePickerNouvNaissanceModifClient";
			this->dateTimePickerNouvNaissanceModifClient->Size = System::Drawing::Size(291, 22);
			this->dateTimePickerNouvNaissanceModifClient->TabIndex = 16;
			this->dateTimePickerNouvNaissanceModifClient->Value = System::DateTime(1753, 1, 1, 0, 0, 0, 0);
			// 
			// TimePickerNouvDateNewModif
			// 
			this->TimePickerNouvDateNewModif->CustomFormat = L"";
			this->TimePickerNouvDateNewModif->Location = System::Drawing::Point(6, 290);
			this->TimePickerNouvDateNewModif->Margin = System::Windows::Forms::Padding(4);
			this->TimePickerNouvDateNewModif->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->TimePickerNouvDateNewModif->Name = L"TimePickerNouvDateNewModif";
			this->TimePickerNouvDateNewModif->Size = System::Drawing::Size(291, 22);
			this->TimePickerNouvDateNewModif->TabIndex = 15;
			this->TimePickerNouvDateNewModif->Value = System::DateTime(1753, 1, 1, 0, 0, 0, 0);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(3, 270);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Date premier achat";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(3, 219);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Date naissance";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(3, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Adresse de facturation";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(3, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Prenom";
			// 
			// textBoxNouvPrenomModifClient
			// 
			this->textBoxNouvPrenomModifClient->Location = System::Drawing::Point(6, 132);
			this->textBoxNouvPrenomModifClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNouvPrenomModifClient->Name = L"textBoxNouvPrenomModifClient";
			this->textBoxNouvPrenomModifClient->Size = System::Drawing::Size(132, 22);
			this->textBoxNouvPrenomModifClient->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(3, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nom";
			// 
			// textBoxNouvNomModifClient
			// 
			this->textBoxNouvNomModifClient->Location = System::Drawing::Point(6, 71);
			this->textBoxNouvNomModifClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNouvNomModifClient->Name = L"textBoxNouvNomModifClient";
			this->textBoxNouvNomModifClient->Size = System::Drawing::Size(133, 22);
			this->textBoxNouvNomModifClient->TabIndex = 15;
			// 
			// buttonModifier
			// 
			this->buttonModifier->ForeColor = System::Drawing::Color::Black;
			this->buttonModifier->Location = System::Drawing::Point(340, 442);
			this->buttonModifier->Margin = System::Windows::Forms::Padding(4);
			this->buttonModifier->Name = L"buttonModifier";
			this->buttonModifier->Size = System::Drawing::Size(105, 28);
			this->buttonModifier->TabIndex = 14;
			this->buttonModifier->Text = L"Modifier";
			this->buttonModifier->UseVisualStyleBackColor = true;
			this->buttonModifier->Click += gcnew System::EventHandler(this, &GestionClient::buttonModifier_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox3.BackgroundImage")));
			this->groupBox3->Controls->Add(this->buttonSupprimerClient);
			this->groupBox3->Controls->Add(this->textBoxIdClientSupprimer);
			this->groupBox3->Controls->Add(this->labelIDSupprimer);
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(1204, 28);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(311, 135);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Supprimer un client";
			// 
			// buttonSupprimerClient
			// 
			this->buttonSupprimerClient->ForeColor = System::Drawing::Color::Black;
			this->buttonSupprimerClient->Location = System::Drawing::Point(98, 93);
			this->buttonSupprimerClient->Margin = System::Windows::Forms::Padding(4);
			this->buttonSupprimerClient->Name = L"buttonSupprimerClient";
			this->buttonSupprimerClient->Size = System::Drawing::Size(96, 28);
			this->buttonSupprimerClient->TabIndex = 14;
			this->buttonSupprimerClient->Text = L"Supprimer";
			this->buttonSupprimerClient->UseVisualStyleBackColor = true;
			this->buttonSupprimerClient->Click += gcnew System::EventHandler(this, &GestionClient::buttonSupprimerClient_Click);
			// 
			// textBoxIdClientSupprimer
			// 
			this->textBoxIdClientSupprimer->Location = System::Drawing::Point(23, 56);
			this->textBoxIdClientSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxIdClientSupprimer->Name = L"textBoxIdClientSupprimer";
			this->textBoxIdClientSupprimer->Size = System::Drawing::Size(55, 22);
			this->textBoxIdClientSupprimer->TabIndex = 14;
			// 
			// labelIDSupprimer
			// 
			this->labelIDSupprimer->AutoSize = true;
			this->labelIDSupprimer->BackColor = System::Drawing::Color::Transparent;
			this->labelIDSupprimer->ForeColor = System::Drawing::Color::White;
			this->labelIDSupprimer->Location = System::Drawing::Point(23, 36);
			this->labelIDSupprimer->Name = L"labelIDSupprimer";
			this->labelIDSupprimer->Size = System::Drawing::Size(56, 16);
			this->labelIDSupprimer->TabIndex = 14;
			this->labelIDSupprimer->Text = L"ID Client";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox2.BackgroundImage")));
			this->groupBox2->Controls->Add(this->dateTimePickerAnniversaireAfficherClient);
			this->groupBox2->Controls->Add(this->textBoxIdAfficherClient);
			this->groupBox2->Controls->Add(this->labelIDAfficher);
			this->groupBox2->Controls->Add(this->dgv_enr);
			this->groupBox2->Controls->Add(this->dateTimePickerAchatAfficherClient);
			this->groupBox2->Controls->Add(this->buttonAfficher);
			this->groupBox2->Controls->Add(this->labelDateAfficher);
			this->groupBox2->Controls->Add(this->textBoxAdresseAfficherClient);
			this->groupBox2->Controls->Add(this->labelSuperieurAfficher);
			this->groupBox2->Controls->Add(this->labelAdresseAfficher);
			this->groupBox2->Controls->Add(this->labelPrenomAfficher);
			this->groupBox2->Controls->Add(this->textBoxPrenomAfficherClient);
			this->groupBox2->Controls->Add(this->labelNomAfficher);
			this->groupBox2->Controls->Add(this->textBoxNomAfficherClient);
			this->groupBox2->ForeColor = System::Drawing::Color::Gray;
			this->groupBox2->Location = System::Drawing::Point(43, 554);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(1375, 448);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Afficher Clients";
			// 
			// dateTimePickerAnniversaireAfficherClient
			// 
			this->dateTimePickerAnniversaireAfficherClient->Location = System::Drawing::Point(752, 73);
			this->dateTimePickerAnniversaireAfficherClient->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerAnniversaireAfficherClient->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerAnniversaireAfficherClient->Name = L"dateTimePickerAnniversaireAfficherClient";
			this->dateTimePickerAnniversaireAfficherClient->Size = System::Drawing::Size(291, 22);
			this->dateTimePickerAnniversaireAfficherClient->TabIndex = 14;
			this->dateTimePickerAnniversaireAfficherClient->Value = System::DateTime(1753, 1, 1, 0, 0, 0, 0);
			// 
			// textBoxIdAfficherClient
			// 
			this->textBoxIdAfficherClient->Location = System::Drawing::Point(9, 71);
			this->textBoxIdAfficherClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxIdAfficherClient->Name = L"textBoxIdAfficherClient";
			this->textBoxIdAfficherClient->Size = System::Drawing::Size(133, 22);
			this->textBoxIdAfficherClient->TabIndex = 13;
			// 
			// labelIDAfficher
			// 
			this->labelIDAfficher->AutoSize = true;
			this->labelIDAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelIDAfficher->ForeColor = System::Drawing::Color::White;
			this->labelIDAfficher->Location = System::Drawing::Point(6, 53);
			this->labelIDAfficher->Name = L"labelIDAfficher";
			this->labelIDAfficher->Size = System::Drawing::Size(20, 16);
			this->labelIDAfficher->TabIndex = 12;
			this->labelIDAfficher->Text = L"ID";
			// 
			// dgv_enr
			// 
			this->dgv_enr->BackgroundColor = System::Drawing::Color::White;
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->GridColor = System::Drawing::Color::Black;
			this->dgv_enr->Location = System::Drawing::Point(247, 196);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(851, 234);
			this->dgv_enr->TabIndex = 0;
			// 
			// dateTimePickerAchatAfficherClient
			// 
			this->dateTimePickerAchatAfficherClient->Location = System::Drawing::Point(1065, 71);
			this->dateTimePickerAchatAfficherClient->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerAchatAfficherClient->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerAchatAfficherClient->Name = L"dateTimePickerAchatAfficherClient";
			this->dateTimePickerAchatAfficherClient->Size = System::Drawing::Size(291, 22);
			this->dateTimePickerAchatAfficherClient->TabIndex = 11;
			this->dateTimePickerAchatAfficherClient->Value = System::DateTime(1753, 1, 1, 0, 0, 0, 0);
			// 
			// buttonAfficher
			// 
			this->buttonAfficher->ForeColor = System::Drawing::Color::Black;
			this->buttonAfficher->Location = System::Drawing::Point(543, 131);
			this->buttonAfficher->Margin = System::Windows::Forms::Padding(4);
			this->buttonAfficher->Name = L"buttonAfficher";
			this->buttonAfficher->Size = System::Drawing::Size(221, 49);
			this->buttonAfficher->TabIndex = 11;
			this->buttonAfficher->Text = L"Afficher";
			this->buttonAfficher->UseVisualStyleBackColor = true;
			this->buttonAfficher->Click += gcnew System::EventHandler(this, &GestionClient::buttonAfficher_Click);
			// 
			// labelDateAfficher
			// 
			this->labelDateAfficher->AutoSize = true;
			this->labelDateAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelDateAfficher->ForeColor = System::Drawing::Color::White;
			this->labelDateAfficher->Location = System::Drawing::Point(1062, 53);
			this->labelDateAfficher->Name = L"labelDateAfficher";
			this->labelDateAfficher->Size = System::Drawing::Size(139, 16);
			this->labelDateAfficher->TabIndex = 8;
			this->labelDateAfficher->Text = L"Date du premier achat";
			// 
			// textBoxAdresseAfficherClient
			// 
			this->textBoxAdresseAfficherClient->Location = System::Drawing::Point(527, 71);
			this->textBoxAdresseAfficherClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdresseAfficherClient->Name = L"textBoxAdresseAfficherClient";
			this->textBoxAdresseAfficherClient->Size = System::Drawing::Size(207, 22);
			this->textBoxAdresseAfficherClient->TabIndex = 7;
			// 
			// labelSuperieurAfficher
			// 
			this->labelSuperieurAfficher->AutoSize = true;
			this->labelSuperieurAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelSuperieurAfficher->ForeColor = System::Drawing::Color::White;
			this->labelSuperieurAfficher->Location = System::Drawing::Point(524, 53);
			this->labelSuperieurAfficher->Name = L"labelSuperieurAfficher";
			this->labelSuperieurAfficher->Size = System::Drawing::Size(58, 16);
			this->labelSuperieurAfficher->TabIndex = 6;
			this->labelSuperieurAfficher->Text = L"Adresse";
			// 
			// labelAdresseAfficher
			// 
			this->labelAdresseAfficher->AutoSize = true;
			this->labelAdresseAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelAdresseAfficher->ForeColor = System::Drawing::Color::White;
			this->labelAdresseAfficher->Location = System::Drawing::Point(772, 53);
			this->labelAdresseAfficher->Name = L"labelAdresseAfficher";
			this->labelAdresseAfficher->Size = System::Drawing::Size(114, 16);
			this->labelAdresseAfficher->TabIndex = 4;
			this->labelAdresseAfficher->Text = L"Date Anniversaire";
			// 
			// labelPrenomAfficher
			// 
			this->labelPrenomAfficher->AutoSize = true;
			this->labelPrenomAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelPrenomAfficher->ForeColor = System::Drawing::Color::White;
			this->labelPrenomAfficher->Location = System::Drawing::Point(350, 53);
			this->labelPrenomAfficher->Name = L"labelPrenomAfficher";
			this->labelPrenomAfficher->Size = System::Drawing::Size(54, 16);
			this->labelPrenomAfficher->TabIndex = 3;
			this->labelPrenomAfficher->Text = L"Prenom";
			// 
			// textBoxPrenomAfficherClient
			// 
			this->textBoxPrenomAfficherClient->Location = System::Drawing::Point(353, 71);
			this->textBoxPrenomAfficherClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrenomAfficherClient->Name = L"textBoxPrenomAfficherClient";
			this->textBoxPrenomAfficherClient->Size = System::Drawing::Size(132, 22);
			this->textBoxPrenomAfficherClient->TabIndex = 2;
			// 
			// labelNomAfficher
			// 
			this->labelNomAfficher->AutoSize = true;
			this->labelNomAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelNomAfficher->ForeColor = System::Drawing::Color::White;
			this->labelNomAfficher->Location = System::Drawing::Point(176, 53);
			this->labelNomAfficher->Name = L"labelNomAfficher";
			this->labelNomAfficher->Size = System::Drawing::Size(36, 16);
			this->labelNomAfficher->TabIndex = 1;
			this->labelNomAfficher->Text = L"Nom";
			// 
			// textBoxNomAfficherClient
			// 
			this->textBoxNomAfficherClient->Location = System::Drawing::Point(179, 71);
			this->textBoxNomAfficherClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomAfficherClient->Name = L"textBoxNomAfficherClient";
			this->textBoxNomAfficherClient->Size = System::Drawing::Size(133, 22);
			this->textBoxNomAfficherClient->TabIndex = 0;
			// 
			// GestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(1567, 1055);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBoxCreerClient);
			this->Name = L"GestionClient";
			this->Text = L"GestionClient";
			this->Load += gcnew System::EventHandler(this, &GestionClient::GestionClient_Load);
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

	private: System::Void GestionClient_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oCli = gcnew NS_Comp_Client::Client();
	}

	private: System::Void buttonCreerClient_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBoxClientNom->Text->Length == 0 || this->textBoxClientPrenom->Text->Length == 0 || this->textBoxAdresseFacturation->Text->Length == 0) {
			MessageBox::Show("Une des données est vide, merci d'entrer toutes les données.");
		}
		else {
			this->oCli->creerClient(this->textBoxClientNom->Text, this->textBoxClientPrenom->Text, this->textBoxAdresseFacturation->Text, this->dateTimePickerDateNaissance->Value, this->dateTimePickerDatePremierAchat->Value);
			MessageBox::Show("Client insérer dans la base de donnée");
		}
	}
	private: System::Void buttonModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIdModifClient->Text->Length == 0) {
			MessageBox::Show("Entrez un ID de client valide");
		}
		else {
			this->oCli->modifierClient(this->textBoxIdModifClient->Text, this->textBoxNouvNomModifClient->Text, this->textBoxNouvPrenomModifClient->Text, this->textBoxNouvAdresseModifClient->Text, this->dateTimePickerNouvNaissanceModifClient->Value, this->TimePickerNouvDateNewModif->Value);
			this->dateTimePickerNouvNaissanceModifClient->Value = DateTime(1753,1,1);
			this->TimePickerNouvDateNewModif->Value = DateTime(1753,1,1);
			MessageBox::Show("Informations relatives au client modifiées");
		}
	}
	private: System::Void buttonSupprimerClient_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIdClientSupprimer->Text->Length == 0) {
			MessageBox::Show("Entrez un ID de client valide");
		}
		else {
			this->oCli->supprimerClient(this->textBoxIdClientSupprimer->Text);
			MessageBox::Show("Client supprimé");
		}
	}
	private: System::Void buttonAfficher_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		this->oDs = this->oCli->afficherClient(this->textBoxIdAfficherClient->Text, this->textBoxNomAfficherClient->Text, this->textBoxPrenomAfficherClient->Text, this->textBoxAdresseAfficherClient->Text, this->dateTimePickerAnniversaireAfficherClient->Value, this->dateTimePickerAchatAfficherClient->Value, "Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
		this->dateTimePickerAnniversaireAfficherClient->Value = DateTime(1753, 1, 1);
		this->dateTimePickerAchatAfficherClient->Value = DateTime(1753, 1, 1);
	}
};
}
