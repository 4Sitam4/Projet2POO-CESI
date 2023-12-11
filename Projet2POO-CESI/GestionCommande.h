#pragma once
#include "Commande.h"

namespace Projet2POOCESI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionCommande
	/// </summary>
	public ref class GestionCommande : public System::Windows::Forms::Form
	{
	public:
		GestionCommande(void)
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
		~GestionCommande()
		{
			if (components)
			{
				delete components;
			}
		}

	private: NS_Comp_Commande::Commande^ oComm;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ dsArticles;
	private: System::Data::DataSet^ dsClients;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ labelSuperieur;



	private: System::Windows::Forms::Label^ labelDateEmbauche;

	private: System::Windows::Forms::Label^ labelPersoAdresse;



	private: System::Windows::Forms::Label^ labelPersoNom;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDateCommande;




	private: System::Windows::Forms::ComboBox^ comboBoxMoyenPaiement;

	private: System::Windows::Forms::DateTimePicker^ dateTimePickerLivraison;




	private: System::Windows::Forms::Button^ buttonAjouterArticle;


	private: System::Windows::Forms::NumericUpDown^ numericUpDownNombreArticle;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownRemise;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ labelPrixHT;

	private: System::Windows::Forms::DataGridView^ dataGridViewArticles;
	private: System::Windows::Forms::DataGridView^ dataGridViewClientCommande;
	private: System::Windows::Forms::Button^ buttonCreerCommande;
	private: System::Windows::Forms::TextBox^ textBoxVilleLivraison;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ buttonDetails;
	private: System::Windows::Forms::Button^ buttonLoadCommande;
	private: System::Windows::Forms::DataGridView^ dataGridViewCommande;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::TextBox^ textBoxIdCommande;
	private: System::Windows::Forms::Button^ buttonSupprimer;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxFiltreIdCommande;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBoxFiltreRemise;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBoxFiltreMoyenPaiement;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBoxFiltreReference;
	private: System::Windows::Forms::DataGridView^ dataGridViewDetailCommande;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDateLivraison;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDateEmission;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBoxFiltreNumClient;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBoxFiltreMontantHt;
private: System::ComponentModel::BackgroundWorker^ backgroundWorker3;








	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxVilleLivraison = (gcnew System::Windows::Forms::TextBox());
			this->buttonCreerCommande = (gcnew System::Windows::Forms::Button());
			this->dataGridViewClientCommande = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewArticles = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelPrixHT = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownRemise = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownNombreArticle = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonAjouterArticle = (gcnew System::Windows::Forms::Button());
			this->comboBoxMoyenPaiement = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePickerLivraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerDateCommande = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelSuperieur = (gcnew System::Windows::Forms::Label());
			this->labelDateEmbauche = (gcnew System::Windows::Forms::Label());
			this->labelPersoAdresse = (gcnew System::Windows::Forms::Label());
			this->labelPersoNom = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewDetailCommande = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePickerDateLivraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerDateEmission = (gcnew System::Windows::Forms::DateTimePicker());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBoxFiltreNumClient = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBoxFiltreMontantHt = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxFiltreRemise = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxFiltreMoyenPaiement = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxFiltreReference = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxFiltreIdCommande = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewCommande = (gcnew System::Windows::Forms::DataGridView());
			this->buttonDetails = (gcnew System::Windows::Forms::Button());
			this->buttonLoadCommande = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonSupprimer = (gcnew System::Windows::Forms::Button());
			this->textBoxIdCommande = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker3 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClientCommande))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArticles))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRemise))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownNombreArticle))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDetailCommande))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommande))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Controls->Add(this->textBoxVilleLivraison);
			this->groupBox1->Controls->Add(this->buttonCreerCommande);
			this->groupBox1->Controls->Add(this->dataGridViewClientCommande);
			this->groupBox1->Controls->Add(this->dataGridViewArticles);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->labelPrixHT);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->numericUpDownRemise);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->numericUpDownNombreArticle);
			this->groupBox1->Controls->Add(this->buttonAjouterArticle);
			this->groupBox1->Controls->Add(this->comboBoxMoyenPaiement);
			this->groupBox1->Controls->Add(this->dateTimePickerLivraison);
			this->groupBox1->Controls->Add(this->dateTimePickerDateCommande);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->labelSuperieur);
			this->groupBox1->Controls->Add(this->labelDateEmbauche);
			this->groupBox1->Controls->Add(this->labelPersoAdresse);
			this->groupBox1->Controls->Add(this->labelPersoNom);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(861, 485);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Créer commande";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &GestionCommande::groupBox1_Enter);
			// 
			// textBoxVilleLivraison
			// 
			this->textBoxVilleLivraison->Location = System::Drawing::Point(31, 331);
			this->textBoxVilleLivraison->Name = L"textBoxVilleLivraison";
			this->textBoxVilleLivraison->Size = System::Drawing::Size(279, 22);
			this->textBoxVilleLivraison->TabIndex = 33;
			// 
			// buttonCreerCommande
			// 
			this->buttonCreerCommande->Location = System::Drawing::Point(592, 410);
			this->buttonCreerCommande->Name = L"buttonCreerCommande";
			this->buttonCreerCommande->Size = System::Drawing::Size(215, 38);
			this->buttonCreerCommande->TabIndex = 32;
			this->buttonCreerCommande->Text = L"Créer Commande";
			this->buttonCreerCommande->UseVisualStyleBackColor = true;
			this->buttonCreerCommande->Click += gcnew System::EventHandler(this, &GestionCommande::buttonCreerCommande_Click);
			// 
			// dataGridViewClientCommande
			// 
			this->dataGridViewClientCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewClientCommande->Location = System::Drawing::Point(31, 61);
			this->dataGridViewClientCommande->Name = L"dataGridViewClientCommande";
			this->dataGridViewClientCommande->RowHeadersWidth = 51;
			this->dataGridViewClientCommande->RowTemplate->Height = 24;
			this->dataGridViewClientCommande->Size = System::Drawing::Size(318, 98);
			this->dataGridViewClientCommande->TabIndex = 31;
			// 
			// dataGridViewArticles
			// 
			this->dataGridViewArticles->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewArticles->Location = System::Drawing::Point(402, 61);
			this->dataGridViewArticles->Name = L"dataGridViewArticles";
			this->dataGridViewArticles->RowHeadersWidth = 51;
			this->dataGridViewArticles->RowTemplate->Height = 24;
			this->dataGridViewArticles->Size = System::Drawing::Size(406, 151);
			this->dataGridViewArticles->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(472, 374);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 16);
			this->label7->TabIndex = 29;
			this->label7->Text = L"0,00";
			// 
			// labelPrixHT
			// 
			this->labelPrixHT->AutoSize = true;
			this->labelPrixHT->Location = System::Drawing::Point(464, 331);
			this->labelPrixHT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPrixHT->Name = L"labelPrixHT";
			this->labelPrixHT->Size = System::Drawing::Size(31, 16);
			this->labelPrixHT->TabIndex = 28;
			this->labelPrixHT->Text = L"0,00";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(400, 374);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 16);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Prix TTC : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(400, 331);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 16);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Prix HT : ";
			// 
			// numericUpDownRemise
			// 
			this->numericUpDownRemise->Location = System::Drawing::Point(503, 285);
			this->numericUpDownRemise->Name = L"numericUpDownRemise";
			this->numericUpDownRemise->Size = System::Drawing::Size(55, 22);
			this->numericUpDownRemise->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(400, 287);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 16);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Remise  en % :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(400, 36);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Articles";
			// 
			// numericUpDownNombreArticle
			// 
			this->numericUpDownNombreArticle->Location = System::Drawing::Point(438, 227);
			this->numericUpDownNombreArticle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownNombreArticle->Name = L"numericUpDownNombreArticle";
			this->numericUpDownNombreArticle->Size = System::Drawing::Size(120, 22);
			this->numericUpDownNombreArticle->TabIndex = 21;
			this->numericUpDownNombreArticle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// buttonAjouterArticle
			// 
			this->buttonAjouterArticle->Location = System::Drawing::Point(619, 223);
			this->buttonAjouterArticle->Margin = System::Windows::Forms::Padding(4);
			this->buttonAjouterArticle->Name = L"buttonAjouterArticle";
			this->buttonAjouterArticle->Size = System::Drawing::Size(189, 28);
			this->buttonAjouterArticle->TabIndex = 19;
			this->buttonAjouterArticle->Text = L"Ajouter à la commande";
			this->buttonAjouterArticle->UseVisualStyleBackColor = true;
			this->buttonAjouterArticle->Click += gcnew System::EventHandler(this, &GestionCommande::buttonAjouterArticle_Click);
			// 
			// comboBoxMoyenPaiement
			// 
			this->comboBoxMoyenPaiement->FormattingEnabled = true;
			this->comboBoxMoyenPaiement->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Carte Bancaire", L"Paypal", L"Bitcoin" });
			this->comboBoxMoyenPaiement->Location = System::Drawing::Point(34, 393);
			this->comboBoxMoyenPaiement->Name = L"comboBoxMoyenPaiement";
			this->comboBoxMoyenPaiement->Size = System::Drawing::Size(223, 24);
			this->comboBoxMoyenPaiement->TabIndex = 16;
			// 
			// dateTimePickerLivraison
			// 
			this->dateTimePickerLivraison->Location = System::Drawing::Point(31, 269);
			this->dateTimePickerLivraison->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerLivraison->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerLivraison->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePickerLivraison->Name = L"dateTimePickerLivraison";
			this->dateTimePickerLivraison->Size = System::Drawing::Size(291, 22);
			this->dateTimePickerLivraison->TabIndex = 14;
			// 
			// dateTimePickerDateCommande
			// 
			this->dateTimePickerDateCommande->Location = System::Drawing::Point(31, 211);
			this->dateTimePickerDateCommande->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerDateCommande->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerDateCommande->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePickerDateCommande->Name = L"dateTimePickerDateCommande";
			this->dateTimePickerDateCommande->Size = System::Drawing::Size(291, 22);
			this->dateTimePickerDateCommande->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 36);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Client";
			this->label1->Click += gcnew System::EventHandler(this, &GestionCommande::label1_Click);
			// 
			// labelSuperieur
			// 
			this->labelSuperieur->AutoSize = true;
			this->labelSuperieur->Location = System::Drawing::Point(35, 306);
			this->labelSuperieur->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSuperieur->Name = L"labelSuperieur";
			this->labelSuperieur->Size = System::Drawing::Size(105, 16);
			this->labelSuperieur->TabIndex = 10;
			this->labelSuperieur->Text = L"Ville de livraison";
			// 
			// labelDateEmbauche
			// 
			this->labelDateEmbauche->AutoSize = true;
			this->labelDateEmbauche->Location = System::Drawing::Point(35, 374);
			this->labelDateEmbauche->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDateEmbauche->Name = L"labelDateEmbauche";
			this->labelDateEmbauche->Size = System::Drawing::Size(107, 16);
			this->labelDateEmbauche->TabIndex = 7;
			this->labelDateEmbauche->Text = L"Moyen paiement";
			// 
			// labelPersoAdresse
			// 
			this->labelPersoAdresse->AutoSize = true;
			this->labelPersoAdresse->Location = System::Drawing::Point(31, 246);
			this->labelPersoAdresse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPersoAdresse->Name = L"labelPersoAdresse";
			this->labelPersoAdresse->Size = System::Drawing::Size(108, 16);
			this->labelPersoAdresse->TabIndex = 5;
			this->labelPersoAdresse->Text = L"Date de livraison";
			// 
			// labelPersoNom
			// 
			this->labelPersoNom->AutoSize = true;
			this->labelPersoNom->Location = System::Drawing::Point(31, 181);
			this->labelPersoNom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPersoNom->Name = L"labelPersoNom";
			this->labelPersoNom->Size = System::Drawing::Size(140, 16);
			this->labelPersoNom->TabIndex = 1;
			this->labelPersoNom->Text = L"Date de la commande";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->dataGridViewDetailCommande);
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->dataGridViewCommande);
			this->groupBox2->Controls->Add(this->buttonDetails);
			this->groupBox2->Controls->Add(this->buttonLoadCommande);
			this->groupBox2->Location = System::Drawing::Point(911, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(877, 739);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Afficher les commandes";
			// 
			// dataGridViewDetailCommande
			// 
			this->dataGridViewDetailCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDetailCommande->Location = System::Drawing::Point(417, 373);
			this->dataGridViewDetailCommande->Name = L"dataGridViewDetailCommande";
			this->dataGridViewDetailCommande->RowHeadersWidth = 51;
			this->dataGridViewDetailCommande->RowTemplate->Height = 24;
			this->dataGridViewDetailCommande->Size = System::Drawing::Size(435, 316);
			this->dataGridViewDetailCommande->TabIndex = 5;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->dateTimePickerDateLivraison);
			this->groupBox4->Controls->Add(this->dateTimePickerDateEmission);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->textBoxFiltreNumClient);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->textBoxFiltreMontantHt);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->textBoxFiltreRemise);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->textBoxFiltreMoyenPaiement);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->textBoxFiltreReference);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->textBoxFiltreIdCommande);
			this->groupBox4->Location = System::Drawing::Point(21, 271);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(375, 418);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Filtres";
			// 
			// dateTimePickerDateLivraison
			// 
			this->dateTimePickerDateLivraison->Location = System::Drawing::Point(153, 269);
			this->dateTimePickerDateLivraison->Name = L"dateTimePickerDateLivraison";
			this->dateTimePickerDateLivraison->Size = System::Drawing::Size(180, 22);
			this->dateTimePickerDateLivraison->TabIndex = 13;
			this->dateTimePickerDateLivraison->Value = System::DateTime(1753, 1, 1, 0, 0, 0, 0);
			// 
			// dateTimePickerDateEmission
			// 
			this->dateTimePickerDateEmission->Location = System::Drawing::Point(153, 130);
			this->dateTimePickerDateEmission->Name = L"dateTimePickerDateEmission";
			this->dateTimePickerDateEmission->Size = System::Drawing::Size(180, 22);
			this->dateTimePickerDateEmission->TabIndex = 12;
			this->dateTimePickerDateEmission->Value = System::DateTime(1753, 1, 1, 0, 0, 0, 0);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 379);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(91, 16);
			this->label15->TabIndex = 11;
			this->label15->Text = L"Numéro Client";
			// 
			// textBoxFiltreNumClient
			// 
			this->textBoxFiltreNumClient->Location = System::Drawing::Point(153, 373);
			this->textBoxFiltreNumClient->Name = L"textBoxFiltreNumClient";
			this->textBoxFiltreNumClient->Size = System::Drawing::Size(180, 22);
			this->textBoxFiltreNumClient->TabIndex = 10;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 325);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(76, 16);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Montant HT";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 274);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(108, 16);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Date de livraison";
			// 
			// textBoxFiltreMontantHt
			// 
			this->textBoxFiltreMontantHt->Location = System::Drawing::Point(153, 317);
			this->textBoxFiltreMontantHt->Name = L"textBoxFiltreMontantHt";
			this->textBoxFiltreMontantHt->Size = System::Drawing::Size(180, 22);
			this->textBoxFiltreMontantHt->TabIndex = 6;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 225);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 16);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Remise";
			// 
			// textBoxFiltreRemise
			// 
			this->textBoxFiltreRemise->Location = System::Drawing::Point(153, 217);
			this->textBoxFiltreRemise->Name = L"textBoxFiltreRemise";
			this->textBoxFiltreRemise->Size = System::Drawing::Size(180, 22);
			this->textBoxFiltreRemise->TabIndex = 8;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 176);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(126, 16);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Moyen de paiement";
			// 
			// textBoxFiltreMoyenPaiement
			// 
			this->textBoxFiltreMoyenPaiement->Location = System::Drawing::Point(153, 170);
			this->textBoxFiltreMoyenPaiement->Name = L"textBoxFiltreMoyenPaiement";
			this->textBoxFiltreMoyenPaiement->Size = System::Drawing::Size(180, 22);
			this->textBoxFiltreMoyenPaiement->TabIndex = 6;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 130);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 16);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Date d\'émission";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 16);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Référence";
			// 
			// textBoxFiltreReference
			// 
			this->textBoxFiltreReference->Location = System::Drawing::Point(153, 80);
			this->textBoxFiltreReference->Name = L"textBoxFiltreReference";
			this->textBoxFiltreReference->Size = System::Drawing::Size(180, 22);
			this->textBoxFiltreReference->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 42);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(20, 16);
			this->label8->TabIndex = 1;
			this->label8->Text = L"ID";
			this->label8->Click += gcnew System::EventHandler(this, &GestionCommande::label8_Click);
			// 
			// textBoxFiltreIdCommande
			// 
			this->textBoxFiltreIdCommande->Location = System::Drawing::Point(153, 36);
			this->textBoxFiltreIdCommande->Name = L"textBoxFiltreIdCommande";
			this->textBoxFiltreIdCommande->Size = System::Drawing::Size(180, 22);
			this->textBoxFiltreIdCommande->TabIndex = 0;
			// 
			// dataGridViewCommande
			// 
			this->dataGridViewCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCommande->Location = System::Drawing::Point(17, 35);
			this->dataGridViewCommande->Name = L"dataGridViewCommande";
			this->dataGridViewCommande->RowHeadersWidth = 51;
			this->dataGridViewCommande->RowTemplate->Height = 24;
			this->dataGridViewCommande->Size = System::Drawing::Size(835, 218);
			this->dataGridViewCommande->TabIndex = 3;
			// 
			// buttonDetails
			// 
			this->buttonDetails->Location = System::Drawing::Point(566, 331);
			this->buttonDetails->Name = L"buttonDetails";
			this->buttonDetails->Size = System::Drawing::Size(148, 32);
			this->buttonDetails->TabIndex = 2;
			this->buttonDetails->Text = L"Afficher les détails";
			this->buttonDetails->UseVisualStyleBackColor = true;
			this->buttonDetails->Click += gcnew System::EventHandler(this, &GestionCommande::buttonDetails_Click);
			// 
			// buttonLoadCommande
			// 
			this->buttonLoadCommande->Location = System::Drawing::Point(533, 269);
			this->buttonLoadCommande->Name = L"buttonLoadCommande";
			this->buttonLoadCommande->Size = System::Drawing::Size(210, 47);
			this->buttonLoadCommande->TabIndex = 1;
			this->buttonLoadCommande->Text = L"Charger les commandes";
			this->buttonLoadCommande->UseVisualStyleBackColor = true;
			this->buttonLoadCommande->Click += gcnew System::EventHandler(this, &GestionCommande::buttonLoadCommande_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::White;
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->buttonSupprimer);
			this->groupBox3->Controls->Add(this->textBoxIdCommande);
			this->groupBox3->Location = System::Drawing::Point(26, 536);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(285, 244);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Supprimer une commande";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 47);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 16);
			this->label6->TabIndex = 3;
			this->label6->Text = L"ID Commande";
			// 
			// buttonSupprimer
			// 
			this->buttonSupprimer->Location = System::Drawing::Point(86, 150);
			this->buttonSupprimer->Name = L"buttonSupprimer";
			this->buttonSupprimer->Size = System::Drawing::Size(103, 38);
			this->buttonSupprimer->TabIndex = 2;
			this->buttonSupprimer->Text = L"Supprimer";
			this->buttonSupprimer->UseVisualStyleBackColor = true;
			this->buttonSupprimer->Click += gcnew System::EventHandler(this, &GestionCommande::buttonSupprimer_Click);
			// 
			// textBoxIdCommande
			// 
			this->textBoxIdCommande->Location = System::Drawing::Point(36, 76);
			this->textBoxIdCommande->Name = L"textBoxIdCommande";
			this->textBoxIdCommande->Size = System::Drawing::Size(121, 22);
			this->textBoxIdCommande->TabIndex = 0;
			// 
			// GestionCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1869, 862);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"GestionCommande";
			this->Text = L"GestionCommande";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClientCommande))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArticles))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownRemise))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownNombreArticle))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDetailCommande))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCommande))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void GestionCommande_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oComm = gcnew NS_Comp_Commande::Commande();
	}


	private: System::Void buttonEmbaucher_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->oComm = gcnew NS_Comp_Commande::Commande();

		this->dataGridViewArticles->Refresh();
		this->dsArticles = this->oComm->afficherArticle("Rsl");
		this->dataGridViewArticles->DataSource = this->dsArticles;
		this->dataGridViewArticles->DataMember = "Rsl";

		this->dataGridViewClientCommande->Refresh();
		this->dsClients = this->oComm->afficherClientCommande("Rsl");
		this->dataGridViewClientCommande->DataSource = this->dsClients;
		this->dataGridViewClientCommande->DataMember = "Rsl";


		/*
		this->comboBoxClient->Refresh();
		this->oDs = this->oComm->afficherClientCommande("RslC");
		this->comboBoxClient->DataSource = this->oDsC;
		this->comboBoxClient->DisplayMember = "RslC";
		*/
	}
	private: System::Void buttonAjouterArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridViewArticles->SelectedRows->Count > 0) {

			this->oComm->ajoutArticleCommande(System::Convert::ToString(this->dataGridViewArticles->SelectedRows[0]->Cells["reference_produit"]->Value), this->numericUpDownNombreArticle->Text);
			MessageBox::Show("Article(s) ajouté à la commande");
		}

		else {
			MessageBox::Show("Merci de selectionner la ligne de l'article à ajouter");
		}

		//affichage du prix du panier
		DataGridViewRow^ selectedRow = dataGridViewArticles->SelectedRows[0];
		System::String^ prixArticle = selectedRow->Cells["prix_ht"]->Value->ToString();
		System::String^ quantiteArticle = this->numericUpDownNombreArticle->Text;
		float prix_init = System::Convert::ToSingle(labelPrixHT->Text);
		float nouv_prix = prix_init + System::Convert::ToSingle(prixArticle) * System::Convert::ToInt32(quantiteArticle);
		labelPrixHT->Text = System::Convert::ToString(nouv_prix);

	}




	private: System::Void buttonCreerCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridViewClientCommande->SelectedRows->Count > 0) {
			System::String^ ref = this->dataGridViewClientCommande->SelectedRows[0]->Cells["prenom"]->Value->ToString()->Substring(0, 2)->ToUpper() + this->dataGridViewClientCommande->SelectedRows[0]->Cells["nom"]->Value->ToString()->Substring(0, 2)->ToUpper() + System::Convert::ToString(this->dateTimePickerDateCommande->Value.Year) + this->textBoxVilleLivraison->Text->Substring(0,3)->ToUpper();

			this->oComm->creerCommande(ref, this->dateTimePickerDateCommande->Value, this->comboBoxMoyenPaiement->Text, this->dateTimePickerLivraison->Value, this->numericUpDownRemise->Text, this->labelPrixHT->Text, this->dataGridViewClientCommande->SelectedRows[0]->Cells["num"]->Value->ToString());
			
			MessageBox::Show("Commande créée");
		}
		else {
			MessageBox::Show("Merci de selectionner la ligne du client");
		}
	}
	


	private: System::Void buttonLoadCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridViewCommande->Refresh();
		this->dsArticles = this->oComm->afficherCommande(this->textBoxFiltreIdCommande->Text, this->textBoxFiltreReference->Text, this->dateTimePickerDateEmission->Value, this->textBoxFiltreMoyenPaiement->Text, this->dateTimePickerDateLivraison->Value, this->textBoxFiltreRemise->Text, this->textBoxFiltreMontantHt->Text, this->textBoxFiltreNumClient->Text,  "Rsl");
		this->dataGridViewCommande->DataSource = this->dsArticles;
		this->dataGridViewCommande->DataMember = "Rsl";
	}

	private: System::Void buttonSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		
		

		// Vérifiez le résultat de la boîte de dialogue
		
		if (textBoxIdCommande->Text->Length == 0) {
			MessageBox::Show("Entrez un ID de commande valide");
		}
		else {
				System::Windows::Forms::DialogResult resultat = System::Windows::Forms::MessageBox::Show(
					"Voulez-vous vraiment supprimer cette commande ?",
					"Confirmation de suppression",
					System::Windows::Forms::MessageBoxButtons::YesNo,
					System::Windows::Forms::MessageBoxIcon::Exclamation
				);
				if (resultat == System::Windows::Forms::DialogResult::Yes) {
					this->oComm->supprimerCommande(this->textBoxIdCommande->Text);
					MessageBox::Show("Commande supprimmée");
				}
				else {
					MessageBox::Show("Suppression annulée");
				}
			}
		
	}

private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void buttonDetails_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridViewDetailCommande->Refresh();
		MessageBox::Show(this->dataGridViewCommande->SelectedRows[0]->Cells["id"]->Value->ToString());
		this->dsClients = this->oComm->afficherDetailCommande(this->dataGridViewCommande->SelectedRows[0]->Cells["id"]->Value->ToString(), "Rsl");
		this->dataGridViewDetailCommande->DataSource = this->dsClients;
		this->dataGridViewDetailCommande->DataMember = "Rsl";
	}
};
}
