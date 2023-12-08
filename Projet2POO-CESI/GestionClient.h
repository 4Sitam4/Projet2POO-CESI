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
	private: System::Windows::Forms::TextBox^ textBoxAdresseFactureCreer;


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
	private: System::Windows::Forms::TextBox^ textBoxAdrFactureNewModifClient;


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
	private: System::Windows::Forms::TextBox^ textBoxAdresseFactureAfficherClient;
	private: System::Windows::Forms::Label^ labelAdresseFactureAfficher;



	private: System::Windows::Forms::Label^ labelAdresseAfficher;
	private: System::Windows::Forms::Label^ labelPrenomAfficher;
	private: System::Windows::Forms::TextBox^ textBoxPrenomAfficherClient;

	private: System::Windows::Forms::Label^ labelNomAfficher;
	private: System::Windows::Forms::TextBox^ textBoxNomAfficherClient;

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ labelFacturation;
	private: System::Windows::Forms::Label^ labelVilleFacturation;
private: System::Windows::Forms::TextBox^ textBoxAdrVilleFactureNewModifClient;
private: System::Windows::Forms::TextBox^ textBoxAdrCPFactureNewModifClient;




private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ labelLivraison;
private: System::Windows::Forms::TextBox^ textBoxAdrCPLivreNewModifClient;


private: System::Windows::Forms::Label^ labelCodePostalLivraison;
private: System::Windows::Forms::TextBox^ textBoxAdrVilleLivreNewModifClient;

private: System::Windows::Forms::Label^ labelVilleLivraison;
private: System::Windows::Forms::Label^ labelAdresseLivraison;
private: System::Windows::Forms::TextBox^ textBoxAdrLivreNewModifClient;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBoxAdresseLivreCreer;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ textBoxAdrCPFactureCreer;

private: System::Windows::Forms::TextBox^ textBoxAdrVilleFactureCreer;

private: System::Windows::Forms::Label^ labelVilleFactureCreer;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ textBoxAdrVilleLivreCreer;
private: System::Windows::Forms::Label^ labelCPLivreCreer;
private: System::Windows::Forms::TextBox^ textBoxAdrCPLivreCreer;
private: System::Windows::Forms::Label^ labelVilleLivreCreer;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ textBoxAdrCPFactureAfficherClient;
private: System::Windows::Forms::TextBox^ textBoxAdrVilleFactureAfficherClient;



private: System::Windows::Forms::Label^ labelVilleFactureAfficher;
private: System::Windows::Forms::Label^ labelCPFactureAfficher;
private: System::Windows::Forms::Label^ labelVilleLivreAfficher;
private: System::Windows::Forms::Label^ labelCPLivreAfficher;
private: System::Windows::Forms::TextBox^ textBoxAdrCPLivreAfficherClient;
private: System::Windows::Forms::TextBox^ textBoxAdrVilleLivreAfficherClient;
private: System::Windows::Forms::Label^ labelAdresseLivreAfficher;
private: System::Windows::Forms::TextBox^ textBoxAdresseLivreAfficherClient;
private: System::Windows::Forms::Label^ label13;





















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
			this->labelCPLivreCreer = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrCPLivreCreer = (gcnew System::Windows::Forms::TextBox());
			this->labelVilleLivreCreer = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrVilleLivreCreer = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseLivreCreer = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrCPFactureCreer = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdrVilleFactureCreer = (gcnew System::Windows::Forms::TextBox());
			this->labelVilleFactureCreer = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->labelAdressseFacturation = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseFactureCreer = (gcnew System::Windows::Forms::TextBox());
			this->labelLivraison = (gcnew System::Windows::Forms::Label());
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
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrCPLivreNewModifClient = (gcnew System::Windows::Forms::TextBox());
			this->labelCodePostalLivraison = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrVilleLivreNewModifClient = (gcnew System::Windows::Forms::TextBox());
			this->labelVilleLivraison = (gcnew System::Windows::Forms::Label());
			this->labelAdresseLivraison = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrLivreNewModifClient = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdrCPFactureNewModifClient = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrVilleFactureNewModifClient = (gcnew System::Windows::Forms::TextBox());
			this->labelVilleFacturation = (gcnew System::Windows::Forms::Label());
			this->labelFacturation = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrFactureNewModifClient = (gcnew System::Windows::Forms::TextBox());
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
			this->labelVilleLivreAfficher = (gcnew System::Windows::Forms::Label());
			this->labelCPLivreAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrCPLivreAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdrVilleLivreAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->labelAdresseLivreAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseLivreAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->labelVilleFactureAfficher = (gcnew System::Windows::Forms::Label());
			this->labelCPFactureAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxAdrCPFactureAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdrVilleFactureAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerAnniversaireAfficherClient = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBoxIdAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->labelIDAfficher = (gcnew System::Windows::Forms::Label());
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->dateTimePickerAchatAfficherClient = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonAfficher = (gcnew System::Windows::Forms::Button());
			this->labelDateAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseFactureAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->labelAdresseFactureAfficher = (gcnew System::Windows::Forms::Label());
			this->labelAdresseAfficher = (gcnew System::Windows::Forms::Label());
			this->labelPrenomAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxPrenomAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->labelNomAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxNomAfficherClient = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
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
			this->groupBoxCreerClient->Controls->Add(this->labelCPLivreCreer);
			this->groupBoxCreerClient->Controls->Add(this->textBoxAdrCPLivreCreer);
			this->groupBoxCreerClient->Controls->Add(this->labelVilleLivreCreer);
			this->groupBoxCreerClient->Controls->Add(this->textBoxAdrVilleLivreCreer);
			this->groupBoxCreerClient->Controls->Add(this->label11);
			this->groupBoxCreerClient->Controls->Add(this->textBoxAdresseLivreCreer);
			this->groupBoxCreerClient->Controls->Add(this->label9);
			this->groupBoxCreerClient->Controls->Add(this->textBoxAdrCPFactureCreer);
			this->groupBoxCreerClient->Controls->Add(this->textBoxAdrVilleFactureCreer);
			this->groupBoxCreerClient->Controls->Add(this->labelVilleFactureCreer);
			this->groupBoxCreerClient->Controls->Add(this->label8);
			this->groupBoxCreerClient->Controls->Add(this->labelAdressseFacturation);
			this->groupBoxCreerClient->Controls->Add(this->textBoxAdresseFactureCreer);
			this->groupBoxCreerClient->Controls->Add(this->labelLivraison);
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
			this->groupBoxCreerClient->Size = System::Drawing::Size(644, 505);
			this->groupBoxCreerClient->TabIndex = 2;
			this->groupBoxCreerClient->TabStop = false;
			this->groupBoxCreerClient->Text = L"Ajout d\'un client";
			// 
			// labelCPLivreCreer
			// 
			this->labelCPLivreCreer->AutoSize = true;
			this->labelCPLivreCreer->BackColor = System::Drawing::Color::Transparent;
			this->labelCPLivreCreer->ForeColor = System::Drawing::Color::White;
			this->labelCPLivreCreer->Location = System::Drawing::Point(480, 250);
			this->labelCPLivreCreer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCPLivreCreer->Name = L"labelCPLivreCreer";
			this->labelCPLivreCreer->Size = System::Drawing::Size(80, 16);
			this->labelCPLivreCreer->TabIndex = 39;
			this->labelCPLivreCreer->Text = L"Code postal";
			// 
			// textBoxAdrCPLivreCreer
			// 
			this->textBoxAdrCPLivreCreer->Location = System::Drawing::Point(483, 270);
			this->textBoxAdrCPLivreCreer->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdrCPLivreCreer->Name = L"textBoxAdrCPLivreCreer";
			this->textBoxAdrCPLivreCreer->Size = System::Drawing::Size(96, 22);
			this->textBoxAdrCPLivreCreer->TabIndex = 38;
			// 
			// labelVilleLivreCreer
			// 
			this->labelVilleLivreCreer->AutoSize = true;
			this->labelVilleLivreCreer->BackColor = System::Drawing::Color::Transparent;
			this->labelVilleLivreCreer->ForeColor = System::Drawing::Color::White;
			this->labelVilleLivreCreer->Location = System::Drawing::Point(294, 250);
			this->labelVilleLivreCreer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelVilleLivreCreer->Name = L"labelVilleLivreCreer";
			this->labelVilleLivreCreer->Size = System::Drawing::Size(33, 16);
			this->labelVilleLivreCreer->TabIndex = 37;
			this->labelVilleLivreCreer->Text = L"Ville";
			// 
			// textBoxAdrVilleLivreCreer
			// 
			this->textBoxAdrVilleLivreCreer->Location = System::Drawing::Point(297, 270);
			this->textBoxAdrVilleLivreCreer->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdrVilleLivreCreer->Name = L"textBoxAdrVilleLivreCreer";
			this->textBoxAdrVilleLivreCreer->Size = System::Drawing::Size(113, 22);
			this->textBoxAdrVilleLivreCreer->TabIndex = 36;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(42, 250);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(130, 16);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Adresse de livraison";
			// 
			// textBoxAdresseLivreCreer
			// 
			this->textBoxAdresseLivreCreer->Location = System::Drawing::Point(45, 270);
			this->textBoxAdresseLivreCreer->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdresseLivreCreer->Name = L"textBoxAdresseLivreCreer";
			this->textBoxAdresseLivreCreer->Size = System::Drawing::Size(185, 22);
			this->textBoxAdresseLivreCreer->TabIndex = 34;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(480, 138);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 16);
			this->label9->TabIndex = 33;
			this->label9->Text = L"Code postal";
			// 
			// textBoxAdrCPFactureCreer
			// 
			this->textBoxAdrCPFactureCreer->Location = System::Drawing::Point(483, 158);
			this->textBoxAdrCPFactureCreer->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdrCPFactureCreer->Name = L"textBoxAdrCPFactureCreer";
			this->textBoxAdrCPFactureCreer->Size = System::Drawing::Size(96, 22);
			this->textBoxAdrCPFactureCreer->TabIndex = 32;
			// 
			// textBoxAdrVilleFactureCreer
			// 
			this->textBoxAdrVilleFactureCreer->Location = System::Drawing::Point(297, 158);
			this->textBoxAdrVilleFactureCreer->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdrVilleFactureCreer->Name = L"textBoxAdrVilleFactureCreer";
			this->textBoxAdrVilleFactureCreer->Size = System::Drawing::Size(113, 22);
			this->textBoxAdrVilleFactureCreer->TabIndex = 31;
			// 
			// labelVilleFactureCreer
			// 
			this->labelVilleFactureCreer->AutoSize = true;
			this->labelVilleFactureCreer->BackColor = System::Drawing::Color::Transparent;
			this->labelVilleFactureCreer->ForeColor = System::Drawing::Color::White;
			this->labelVilleFactureCreer->Location = System::Drawing::Point(294, 138);
			this->labelVilleFactureCreer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelVilleFactureCreer->Name = L"labelVilleFactureCreer";
			this->labelVilleFactureCreer->Size = System::Drawing::Size(33, 16);
			this->labelVilleFactureCreer->TabIndex = 30;
			this->labelVilleFactureCreer->Text = L"Ville";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label8->Location = System::Drawing::Point(-4, 99);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(780, 19);
			this->label8->TabIndex = 29;
			this->label8->Text = L"__Facturation ___________________________________________________________________"
				L"_______";
			// 
			// labelAdressseFacturation
			// 
			this->labelAdressseFacturation->AutoSize = true;
			this->labelAdressseFacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelAdressseFacturation->ForeColor = System::Drawing::Color::White;
			this->labelAdressseFacturation->Location = System::Drawing::Point(42, 138);
			this->labelAdressseFacturation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAdressseFacturation->Name = L"labelAdressseFacturation";
			this->labelAdressseFacturation->Size = System::Drawing::Size(141, 16);
			this->labelAdressseFacturation->TabIndex = 12;
			this->labelAdressseFacturation->Text = L"Adresse de facturation";
			// 
			// textBoxAdresseFactureCreer
			// 
			this->textBoxAdresseFactureCreer->Location = System::Drawing::Point(45, 158);
			this->textBoxAdresseFactureCreer->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdresseFactureCreer->Name = L"textBoxAdresseFactureCreer";
			this->textBoxAdresseFactureCreer->Size = System::Drawing::Size(185, 22);
			this->textBoxAdresseFactureCreer->TabIndex = 11;
			// 
			// labelLivraison
			// 
			this->labelLivraison->AutoSize = true;
			this->labelLivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelLivraison->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelLivraison->Location = System::Drawing::Point(-4, 214);
			this->labelLivraison->Name = L"labelLivraison";
			this->labelLivraison->Size = System::Drawing::Size(736, 19);
			this->labelLivraison->TabIndex = 22;
			this->labelLivraison->Text = L"__Livraison _____________________________________________________________________"
				L"__";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(334, 345);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Date de premier achat";
			// 
			// dateTimePickerDatePremierAchat
			// 
			this->dateTimePickerDatePremierAchat->Location = System::Drawing::Point(337, 365);
			this->dateTimePickerDatePremierAchat->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerDatePremierAchat->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerDatePremierAchat->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePickerDatePremierAchat->Name = L"dateTimePickerDatePremierAchat";
			this->dateTimePickerDatePremierAchat->Size = System::Drawing::Size(242, 22);
			this->dateTimePickerDatePremierAchat->TabIndex = 9;
			// 
			// buttonCreerClient
			// 
			this->buttonCreerClient->ForeColor = System::Drawing::Color::Black;
			this->buttonCreerClient->Location = System::Drawing::Point(251, 431);
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
			this->labelDateNaissance->Location = System::Drawing::Point(42, 345);
			this->labelDateNaissance->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDateNaissance->Name = L"labelDateNaissance";
			this->labelDateNaissance->Size = System::Drawing::Size(120, 16);
			this->labelDateNaissance->TabIndex = 7;
			this->labelDateNaissance->Text = L"Date de naissance";
			// 
			// dateTimePickerDateNaissance
			// 
			this->dateTimePickerDateNaissance->Location = System::Drawing::Point(45, 365);
			this->dateTimePickerDateNaissance->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerDateNaissance->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerDateNaissance->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePickerDateNaissance->Name = L"dateTimePickerDateNaissance";
			this->dateTimePickerDateNaissance->Size = System::Drawing::Size(231, 22);
			this->dateTimePickerDateNaissance->TabIndex = 6;
			// 
			// labelPersoPrenom
			// 
			this->labelPersoPrenom->AutoSize = true;
			this->labelPersoPrenom->BackColor = System::Drawing::Color::Transparent;
			this->labelPersoPrenom->ForeColor = System::Drawing::Color::White;
			this->labelPersoPrenom->Location = System::Drawing::Point(386, 36);
			this->labelPersoPrenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPersoPrenom->Name = L"labelPersoPrenom";
			this->labelPersoPrenom->Size = System::Drawing::Size(54, 16);
			this->labelPersoPrenom->TabIndex = 3;
			this->labelPersoPrenom->Text = L"Prénom";
			// 
			// textBoxClientPrenom
			// 
			this->textBoxClientPrenom->Location = System::Drawing::Point(389, 56);
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
			this->labelPersoNom->Location = System::Drawing::Point(87, 36);
			this->labelPersoNom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPersoNom->Name = L"labelPersoNom";
			this->labelPersoNom->Size = System::Drawing::Size(36, 16);
			this->labelPersoNom->TabIndex = 1;
			this->labelPersoNom->Text = L"Nom";
			// 
			// textBoxClientNom
			// 
			this->textBoxClientNom->Location = System::Drawing::Point(90, 56);
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
			this->groupBox4->Location = System::Drawing::Point(712, 40);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1144, 493);
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
			this->groupBoxCritères->Controls->Add(this->label10);
			this->groupBoxCritères->Controls->Add(this->textBoxAdrCPLivreNewModifClient);
			this->groupBoxCritères->Controls->Add(this->labelCodePostalLivraison);
			this->groupBoxCritères->Controls->Add(this->textBoxAdrVilleLivreNewModifClient);
			this->groupBoxCritères->Controls->Add(this->labelVilleLivraison);
			this->groupBoxCritères->Controls->Add(this->labelAdresseLivraison);
			this->groupBoxCritères->Controls->Add(this->textBoxAdrLivreNewModifClient);
			this->groupBoxCritères->Controls->Add(this->textBoxAdrCPFactureNewModifClient);
			this->groupBoxCritères->Controls->Add(this->label7);
			this->groupBoxCritères->Controls->Add(this->textBoxAdrVilleFactureNewModifClient);
			this->groupBoxCritères->Controls->Add(this->labelVilleFacturation);
			this->groupBoxCritères->Controls->Add(this->labelFacturation);
			this->groupBoxCritères->Controls->Add(this->textBoxAdrFactureNewModifClient);
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
			this->groupBoxCritères->Location = System::Drawing::Point(340, 36);
			this->groupBoxCritères->Name = L"groupBoxCritères";
			this->groupBoxCritères->Size = System::Drawing::Size(718, 399);
			this->groupBoxCritères->TabIndex = 15;
			this->groupBoxCritères->TabStop = false;
			this->groupBoxCritères->Text = L"Nouvelles valeures";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label10->Location = System::Drawing::Point(-9, 190);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(736, 19);
			this->label10->TabIndex = 29;
			this->label10->Text = L"__Livraison _____________________________________________________________________"
				L"__";
			// 
			// textBoxAdrCPLivreNewModifClient
			// 
			this->textBoxAdrCPLivreNewModifClient->Location = System::Drawing::Point(407, 255);
			this->textBoxAdrCPLivreNewModifClient->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdrCPLivreNewModifClient->Name = L"textBoxAdrCPLivreNewModifClient";
			this->textBoxAdrCPLivreNewModifClient->Size = System::Drawing::Size(112, 22);
			this->textBoxAdrCPLivreNewModifClient->TabIndex = 28;
			// 
			// labelCodePostalLivraison
			// 
			this->labelCodePostalLivraison->AutoSize = true;
			this->labelCodePostalLivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelCodePostalLivraison->Location = System::Drawing::Point(404, 235);
			this->labelCodePostalLivraison->Name = L"labelCodePostalLivraison";
			this->labelCodePostalLivraison->Size = System::Drawing::Size(80, 16);
			this->labelCodePostalLivraison->TabIndex = 27;
			this->labelCodePostalLivraison->Text = L"Code postal";
			// 
			// textBoxAdrVilleLivreNewModifClient
			// 
			this->textBoxAdrVilleLivreNewModifClient->Location = System::Drawing::Point(229, 255);
			this->textBoxAdrVilleLivreNewModifClient->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdrVilleLivreNewModifClient->Name = L"textBoxAdrVilleLivreNewModifClient";
			this->textBoxAdrVilleLivreNewModifClient->Size = System::Drawing::Size(112, 22);
			this->textBoxAdrVilleLivreNewModifClient->TabIndex = 26;
			// 
			// labelVilleLivraison
			// 
			this->labelVilleLivraison->AutoSize = true;
			this->labelVilleLivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelVilleLivraison->Location = System::Drawing::Point(226, 235);
			this->labelVilleLivraison->Name = L"labelVilleLivraison";
			this->labelVilleLivraison->Size = System::Drawing::Size(33, 16);
			this->labelVilleLivraison->TabIndex = 25;
			this->labelVilleLivraison->Text = L"Ville";
			// 
			// labelAdresseLivraison
			// 
			this->labelAdresseLivraison->AutoSize = true;
			this->labelAdresseLivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelAdresseLivraison->Location = System::Drawing::Point(24, 235);
			this->labelAdresseLivraison->Name = L"labelAdresseLivraison";
			this->labelAdresseLivraison->Size = System::Drawing::Size(130, 16);
			this->labelAdresseLivraison->TabIndex = 24;
			this->labelAdresseLivraison->Text = L"Adresse de livraison";
			// 
			// textBoxAdrLivreNewModifClient
			// 
			this->textBoxAdrLivreNewModifClient->Location = System::Drawing::Point(27, 255);
			this->textBoxAdrLivreNewModifClient->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdrLivreNewModifClient->Name = L"textBoxAdrLivreNewModifClient";
			this->textBoxAdrLivreNewModifClient->Size = System::Drawing::Size(164, 22);
			this->textBoxAdrLivreNewModifClient->TabIndex = 23;
			// 
			// textBoxAdrCPFactureNewModifClient
			// 
			this->textBoxAdrCPFactureNewModifClient->Location = System::Drawing::Point(407, 153);
			this->textBoxAdrCPFactureNewModifClient->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdrCPFactureNewModifClient->Name = L"textBoxAdrCPFactureNewModifClient";
			this->textBoxAdrCPFactureNewModifClient->Size = System::Drawing::Size(112, 22);
			this->textBoxAdrCPFactureNewModifClient->TabIndex = 21;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(404, 133);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 16);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Code postal";
			// 
			// textBoxAdrVilleFactureNewModifClient
			// 
			this->textBoxAdrVilleFactureNewModifClient->Location = System::Drawing::Point(229, 154);
			this->textBoxAdrVilleFactureNewModifClient->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdrVilleFactureNewModifClient->Name = L"textBoxAdrVilleFactureNewModifClient";
			this->textBoxAdrVilleFactureNewModifClient->Size = System::Drawing::Size(112, 22);
			this->textBoxAdrVilleFactureNewModifClient->TabIndex = 19;
			// 
			// labelVilleFacturation
			// 
			this->labelVilleFacturation->AutoSize = true;
			this->labelVilleFacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelVilleFacturation->Location = System::Drawing::Point(226, 133);
			this->labelVilleFacturation->Name = L"labelVilleFacturation";
			this->labelVilleFacturation->Size = System::Drawing::Size(33, 16);
			this->labelVilleFacturation->TabIndex = 18;
			this->labelVilleFacturation->Text = L"Ville";
			// 
			// labelFacturation
			// 
			this->labelFacturation->AutoSize = true;
			this->labelFacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelFacturation->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelFacturation->Location = System::Drawing::Point(-4, 99);
			this->labelFacturation->Name = L"labelFacturation";
			this->labelFacturation->Size = System::Drawing::Size(780, 19);
			this->labelFacturation->TabIndex = 17;
			this->labelFacturation->Text = L"__Facturation ___________________________________________________________________"
				L"_______";
			// 
			// textBoxAdrFactureNewModifClient
			// 
			this->textBoxAdrFactureNewModifClient->Location = System::Drawing::Point(27, 154);
			this->textBoxAdrFactureNewModifClient->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAdrFactureNewModifClient->Name = L"textBoxAdrFactureNewModifClient";
			this->textBoxAdrFactureNewModifClient->Size = System::Drawing::Size(164, 22);
			this->textBoxAdrFactureNewModifClient->TabIndex = 13;
			// 
			// dateTimePickerNouvNaissanceModifClient
			// 
			this->dateTimePickerNouvNaissanceModifClient->CustomFormat = L"";
			this->dateTimePickerNouvNaissanceModifClient->Location = System::Drawing::Point(27, 343);
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
			this->TimePickerNouvDateNewModif->Location = System::Drawing::Point(386, 343);
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
			this->label6->Location = System::Drawing::Point(383, 322);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Date premier achat";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(24, 322);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Date naissance";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(24, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Adresse de facturation";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(369, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Prenom";
			// 
			// textBoxNouvPrenomModifClient
			// 
			this->textBoxNouvPrenomModifClient->Location = System::Drawing::Point(372, 51);
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
			this->label2->Location = System::Drawing::Point(88, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nom";
			// 
			// textBoxNouvNomModifClient
			// 
			this->textBoxNouvNomModifClient->Location = System::Drawing::Point(92, 51);
			this->textBoxNouvNomModifClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNouvNomModifClient->Name = L"textBoxNouvNomModifClient";
			this->textBoxNouvNomModifClient->Size = System::Drawing::Size(133, 22);
			this->textBoxNouvNomModifClient->TabIndex = 15;
			// 
			// buttonModifier
			// 
			this->buttonModifier->ForeColor = System::Drawing::Color::Black;
			this->buttonModifier->Location = System::Drawing::Point(59, 291);
			this->buttonModifier->Margin = System::Windows::Forms::Padding(4);
			this->buttonModifier->Name = L"buttonModifier";
			this->buttonModifier->Size = System::Drawing::Size(123, 48);
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
			this->groupBox3->Location = System::Drawing::Point(1601, 598);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(255, 167);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Supprimer un client";
			// 
			// buttonSupprimerClient
			// 
			this->buttonSupprimerClient->ForeColor = System::Drawing::Color::Black;
			this->buttonSupprimerClient->Location = System::Drawing::Point(73, 111);
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
			this->groupBox2->Controls->Add(this->labelVilleLivreAfficher);
			this->groupBox2->Controls->Add(this->labelCPLivreAfficher);
			this->groupBox2->Controls->Add(this->textBoxAdrCPLivreAfficherClient);
			this->groupBox2->Controls->Add(this->textBoxAdrVilleLivreAfficherClient);
			this->groupBox2->Controls->Add(this->labelAdresseLivreAfficher);
			this->groupBox2->Controls->Add(this->textBoxAdresseLivreAfficherClient);
			this->groupBox2->Controls->Add(this->labelVilleFactureAfficher);
			this->groupBox2->Controls->Add(this->labelCPFactureAfficher);
			this->groupBox2->Controls->Add(this->textBoxAdrCPFactureAfficherClient);
			this->groupBox2->Controls->Add(this->textBoxAdrVilleFactureAfficherClient);
			this->groupBox2->Controls->Add(this->dateTimePickerAnniversaireAfficherClient);
			this->groupBox2->Controls->Add(this->textBoxIdAfficherClient);
			this->groupBox2->Controls->Add(this->labelIDAfficher);
			this->groupBox2->Controls->Add(this->dgv_enr);
			this->groupBox2->Controls->Add(this->dateTimePickerAchatAfficherClient);
			this->groupBox2->Controls->Add(this->buttonAfficher);
			this->groupBox2->Controls->Add(this->labelDateAfficher);
			this->groupBox2->Controls->Add(this->textBoxAdresseFactureAfficherClient);
			this->groupBox2->Controls->Add(this->labelAdresseFactureAfficher);
			this->groupBox2->Controls->Add(this->labelAdresseAfficher);
			this->groupBox2->Controls->Add(this->labelPrenomAfficher);
			this->groupBox2->Controls->Add(this->textBoxPrenomAfficherClient);
			this->groupBox2->Controls->Add(this->labelNomAfficher);
			this->groupBox2->Controls->Add(this->textBoxNomAfficherClient);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->ForeColor = System::Drawing::Color::Gray;
			this->groupBox2->Location = System::Drawing::Point(22, 559);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(1552, 448);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Afficher Clients";
			// 
			// labelVilleLivreAfficher
			// 
			this->labelVilleLivreAfficher->AutoSize = true;
			this->labelVilleLivreAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelVilleLivreAfficher->ForeColor = System::Drawing::Color::White;
			this->labelVilleLivreAfficher->Location = System::Drawing::Point(250, 361);
			this->labelVilleLivreAfficher->Name = L"labelVilleLivreAfficher";
			this->labelVilleLivreAfficher->Size = System::Drawing::Size(33, 16);
			this->labelVilleLivreAfficher->TabIndex = 40;
			this->labelVilleLivreAfficher->Text = L"Ville";
			// 
			// labelCPLivreAfficher
			// 
			this->labelCPLivreAfficher->AutoSize = true;
			this->labelCPLivreAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelCPLivreAfficher->ForeColor = System::Drawing::Color::White;
			this->labelCPLivreAfficher->Location = System::Drawing::Point(477, 361);
			this->labelCPLivreAfficher->Name = L"labelCPLivreAfficher";
			this->labelCPLivreAfficher->Size = System::Drawing::Size(80, 16);
			this->labelCPLivreAfficher->TabIndex = 39;
			this->labelCPLivreAfficher->Text = L"Code postal";
			// 
			// textBoxAdrCPLivreAfficherClient
			// 
			this->textBoxAdrCPLivreAfficherClient->Location = System::Drawing::Point(480, 379);
			this->textBoxAdrCPLivreAfficherClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdrCPLivreAfficherClient->Name = L"textBoxAdrCPLivreAfficherClient";
			this->textBoxAdrCPLivreAfficherClient->Size = System::Drawing::Size(108, 22);
			this->textBoxAdrCPLivreAfficherClient->TabIndex = 38;
			// 
			// textBoxAdrVilleLivreAfficherClient
			// 
			this->textBoxAdrVilleLivreAfficherClient->Location = System::Drawing::Point(253, 379);
			this->textBoxAdrVilleLivreAfficherClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdrVilleLivreAfficherClient->Name = L"textBoxAdrVilleLivreAfficherClient";
			this->textBoxAdrVilleLivreAfficherClient->Size = System::Drawing::Size(155, 22);
			this->textBoxAdrVilleLivreAfficherClient->TabIndex = 37;
			// 
			// labelAdresseLivreAfficher
			// 
			this->labelAdresseLivreAfficher->AutoSize = true;
			this->labelAdresseLivreAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelAdresseLivreAfficher->ForeColor = System::Drawing::Color::White;
			this->labelAdresseLivreAfficher->Location = System::Drawing::Point(16, 361);
			this->labelAdresseLivreAfficher->Name = L"labelAdresseLivreAfficher";
			this->labelAdresseLivreAfficher->Size = System::Drawing::Size(58, 16);
			this->labelAdresseLivreAfficher->TabIndex = 36;
			this->labelAdresseLivreAfficher->Text = L"Adresse";
			// 
			// textBoxAdresseLivreAfficherClient
			// 
			this->textBoxAdresseLivreAfficherClient->Location = System::Drawing::Point(19, 379);
			this->textBoxAdresseLivreAfficherClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdresseLivreAfficherClient->Name = L"textBoxAdresseLivreAfficherClient";
			this->textBoxAdresseLivreAfficherClient->Size = System::Drawing::Size(177, 22);
			this->textBoxAdresseLivreAfficherClient->TabIndex = 35;
			// 
			// labelVilleFactureAfficher
			// 
			this->labelVilleFactureAfficher->AutoSize = true;
			this->labelVilleFactureAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelVilleFactureAfficher->ForeColor = System::Drawing::Color::White;
			this->labelVilleFactureAfficher->Location = System::Drawing::Point(250, 226);
			this->labelVilleFactureAfficher->Name = L"labelVilleFactureAfficher";
			this->labelVilleFactureAfficher->Size = System::Drawing::Size(33, 16);
			this->labelVilleFactureAfficher->TabIndex = 34;
			this->labelVilleFactureAfficher->Text = L"Ville";
			// 
			// labelCPFactureAfficher
			// 
			this->labelCPFactureAfficher->AutoSize = true;
			this->labelCPFactureAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelCPFactureAfficher->ForeColor = System::Drawing::Color::White;
			this->labelCPFactureAfficher->Location = System::Drawing::Point(477, 226);
			this->labelCPFactureAfficher->Name = L"labelCPFactureAfficher";
			this->labelCPFactureAfficher->Size = System::Drawing::Size(80, 16);
			this->labelCPFactureAfficher->TabIndex = 33;
			this->labelCPFactureAfficher->Text = L"Code postal";
			// 
			// textBoxAdrCPFactureAfficherClient
			// 
			this->textBoxAdrCPFactureAfficherClient->Location = System::Drawing::Point(480, 244);
			this->textBoxAdrCPFactureAfficherClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdrCPFactureAfficherClient->Name = L"textBoxAdrCPFactureAfficherClient";
			this->textBoxAdrCPFactureAfficherClient->Size = System::Drawing::Size(108, 22);
			this->textBoxAdrCPFactureAfficherClient->TabIndex = 32;
			// 
			// textBoxAdrVilleFactureAfficherClient
			// 
			this->textBoxAdrVilleFactureAfficherClient->Location = System::Drawing::Point(253, 244);
			this->textBoxAdrVilleFactureAfficherClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdrVilleFactureAfficherClient->Name = L"textBoxAdrVilleFactureAfficherClient";
			this->textBoxAdrVilleFactureAfficherClient->Size = System::Drawing::Size(155, 22);
			this->textBoxAdrVilleFactureAfficherClient->TabIndex = 31;
			// 
			// dateTimePickerAnniversaireAfficherClient
			// 
			this->dateTimePickerAnniversaireAfficherClient->Location = System::Drawing::Point(19, 134);
			this->dateTimePickerAnniversaireAfficherClient->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerAnniversaireAfficherClient->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerAnniversaireAfficherClient->Name = L"dateTimePickerAnniversaireAfficherClient";
			this->dateTimePickerAnniversaireAfficherClient->Size = System::Drawing::Size(228, 22);
			this->dateTimePickerAnniversaireAfficherClient->TabIndex = 14;
			this->dateTimePickerAnniversaireAfficherClient->Value = System::DateTime(1753, 1, 1, 0, 0, 0, 0);
			// 
			// textBoxIdAfficherClient
			// 
			this->textBoxIdAfficherClient->Location = System::Drawing::Point(19, 57);
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
			this->labelIDAfficher->Location = System::Drawing::Point(16, 39);
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
			this->dgv_enr->Location = System::Drawing::Point(657, 187);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(851, 234);
			this->dgv_enr->TabIndex = 0;
			// 
			// dateTimePickerAchatAfficherClient
			// 
			this->dateTimePickerAchatAfficherClient->Location = System::Drawing::Point(337, 134);
			this->dateTimePickerAchatAfficherClient->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerAchatAfficherClient->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerAchatAfficherClient->Name = L"dateTimePickerAchatAfficherClient";
			this->dateTimePickerAchatAfficherClient->Size = System::Drawing::Size(242, 22);
			this->dateTimePickerAchatAfficherClient->TabIndex = 11;
			this->dateTimePickerAchatAfficherClient->Value = System::DateTime(1753, 1, 1, 0, 0, 0, 0);
			// 
			// buttonAfficher
			// 
			this->buttonAfficher->ForeColor = System::Drawing::Color::Black;
			this->buttonAfficher->Location = System::Drawing::Point(954, 73);
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
			this->labelDateAfficher->Location = System::Drawing::Point(334, 114);
			this->labelDateAfficher->Name = L"labelDateAfficher";
			this->labelDateAfficher->Size = System::Drawing::Size(139, 16);
			this->labelDateAfficher->TabIndex = 8;
			this->labelDateAfficher->Text = L"Date du premier achat";
			// 
			// textBoxAdresseFactureAfficherClient
			// 
			this->textBoxAdresseFactureAfficherClient->Location = System::Drawing::Point(19, 244);
			this->textBoxAdresseFactureAfficherClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdresseFactureAfficherClient->Name = L"textBoxAdresseFactureAfficherClient";
			this->textBoxAdresseFactureAfficherClient->Size = System::Drawing::Size(177, 22);
			this->textBoxAdresseFactureAfficherClient->TabIndex = 7;
			// 
			// labelAdresseFactureAfficher
			// 
			this->labelAdresseFactureAfficher->AutoSize = true;
			this->labelAdresseFactureAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelAdresseFactureAfficher->ForeColor = System::Drawing::Color::White;
			this->labelAdresseFactureAfficher->Location = System::Drawing::Point(16, 226);
			this->labelAdresseFactureAfficher->Name = L"labelAdresseFactureAfficher";
			this->labelAdresseFactureAfficher->Size = System::Drawing::Size(58, 16);
			this->labelAdresseFactureAfficher->TabIndex = 6;
			this->labelAdresseFactureAfficher->Text = L"Adresse";
			// 
			// labelAdresseAfficher
			// 
			this->labelAdresseAfficher->AutoSize = true;
			this->labelAdresseAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelAdresseAfficher->ForeColor = System::Drawing::Color::White;
			this->labelAdresseAfficher->Location = System::Drawing::Point(16, 114);
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
			this->labelPrenomAfficher->Location = System::Drawing::Point(422, 39);
			this->labelPrenomAfficher->Name = L"labelPrenomAfficher";
			this->labelPrenomAfficher->Size = System::Drawing::Size(54, 16);
			this->labelPrenomAfficher->TabIndex = 3;
			this->labelPrenomAfficher->Text = L"Prenom";
			// 
			// textBoxPrenomAfficherClient
			// 
			this->textBoxPrenomAfficherClient->Location = System::Drawing::Point(425, 57);
			this->textBoxPrenomAfficherClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrenomAfficherClient->Name = L"textBoxPrenomAfficherClient";
			this->textBoxPrenomAfficherClient->Size = System::Drawing::Size(154, 22);
			this->textBoxPrenomAfficherClient->TabIndex = 2;
			// 
			// labelNomAfficher
			// 
			this->labelNomAfficher->AutoSize = true;
			this->labelNomAfficher->BackColor = System::Drawing::Color::Transparent;
			this->labelNomAfficher->ForeColor = System::Drawing::Color::White;
			this->labelNomAfficher->Location = System::Drawing::Point(211, 39);
			this->labelNomAfficher->Name = L"labelNomAfficher";
			this->labelNomAfficher->Size = System::Drawing::Size(36, 16);
			this->labelNomAfficher->TabIndex = 1;
			this->labelNomAfficher->Text = L"Nom";
			// 
			// textBoxNomAfficherClient
			// 
			this->textBoxNomAfficherClient->Location = System::Drawing::Point(214, 57);
			this->textBoxNomAfficherClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomAfficherClient->Name = L"textBoxNomAfficherClient";
			this->textBoxNomAfficherClient->Size = System::Drawing::Size(133, 22);
			this->textBoxNomAfficherClient->TabIndex = 0;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label12->ForeColor = System::Drawing::Color::Transparent;
			this->label12->Location = System::Drawing::Point(-4, 187);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(879, 19);
			this->label12->TabIndex = 30;
			this->label12->Text = L"_____________Facturation ________________________________________________________"
				L"__________________";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label13->ForeColor = System::Drawing::Color::Transparent;
			this->label13->Location = System::Drawing::Point(0, 319);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(835, 19);
			this->label13->TabIndex = 30;
			this->label13->Text = L"_____________Livraison __________________________________________________________"
				L"_____________";
			// 
			// GestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(1924, 1055);
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
		if (this->textBoxClientNom->Text->Length == 0 || this->textBoxClientPrenom->Text->Length == 0 || this->textBoxAdresseFactureCreer->Text->Length == 0 || this->textBoxAdrVilleFactureCreer->Text->Length == 0 || this->textBoxAdrCPFactureCreer->Text->Length == 0 || this->textBoxAdresseLivreCreer->Text->Length == 0 || this->textBoxAdrVilleLivreCreer->Text->Length == 0 || this->textBoxAdrCPLivreCreer->Text->Length == 0) {
			MessageBox::Show("Une des données est vide, merci d'entrer toutes les données.");
		}
		else {
			this->oCli->creerClient(this->textBoxClientNom->Text, this->textBoxClientPrenom->Text, this->textBoxAdresseFactureCreer->Text, this->textBoxAdrVilleFactureCreer->Text, this->textBoxAdrCPFactureCreer->Text, this->textBoxAdresseLivreCreer->Text, this->textBoxAdrVilleLivreCreer->Text, this->textBoxAdrCPLivreCreer->Text, this->dateTimePickerDateNaissance->Value, this->dateTimePickerDatePremierAchat->Value);
			MessageBox::Show("Client insérer dans la base de donnée");
		}
	}
	private: System::Void buttonModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxIdModifClient->Text->Length == 0) {
			MessageBox::Show("Entrez un ID de client valide");
		}
		else {
			this->oCli->modifierClient(this->textBoxIdModifClient->Text, this->textBoxNouvNomModifClient->Text, this->textBoxNouvPrenomModifClient->Text, this->textBoxAdrFactureNewModifClient->Text,this->textBoxAdrVilleFactureNewModifClient->Text, this->textBoxAdrCPFactureNewModifClient->Text, this->textBoxAdrLivreNewModifClient->Text, this->textBoxAdrVilleLivreNewModifClient->Text, this->textBoxAdrCPLivreNewModifClient->Text, this->dateTimePickerNouvNaissanceModifClient->Value, this->TimePickerNouvDateNewModif->Value);
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
		this->oDs = this->oCli->afficherClient(this->textBoxIdAfficherClient->Text, this->textBoxNomAfficherClient->Text, this->textBoxPrenomAfficherClient->Text, this->textBoxAdresseLivreAfficherClient->Text, this->textBoxAdrVilleLivreAfficherClient->Text, this->textBoxAdrCPLivreAfficherClient->Text, this->textBoxAdresseFactureAfficherClient->Text, this->textBoxAdrVilleFactureAfficherClient->Text, this->textBoxAdrCPFactureAfficherClient->Text, this->dateTimePickerAnniversaireAfficherClient->Value, this->dateTimePickerAchatAfficherClient->Value, "Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
		this->dateTimePickerAnniversaireAfficherClient->Value = DateTime(1753, 1, 1);
		this->dateTimePickerAchatAfficherClient->Value = DateTime(1753, 1, 1);
	}


};
}
