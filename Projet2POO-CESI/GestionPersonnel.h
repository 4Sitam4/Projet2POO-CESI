#pragma once
#include "Personnel.h"

namespace Projet2POOCESI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de GestionPersonnel
	/// </summary>
	public ref class GestionPersonnel : public System::Windows::Forms::Form
	{
	public:
		GestionPersonnel(void)
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
		~GestionPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	/// <summary>
	/// 
	/// </summary>
	private: NS_Comp_Personnel::Personnel^ oPers;
	//private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ oDs;






	/// <summary>
	/// 
	/// </summary>
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ labelPersoNom;
	private: System::Windows::Forms::TextBox^ textBoxPersoNom;
	private: System::Windows::Forms::Label^ labelPersoPrenom;
	private: System::Windows::Forms::TextBox^ textBoxPersoPrenom;
	private: System::Windows::Forms::Label^ labelDateEmbauche;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDateEmbauche;


	private: System::Windows::Forms::Label^ labelPersoAdresse;
	private: System::Windows::Forms::TextBox^ textBoxPersoAdresse;
	private: System::Windows::Forms::Button^ buttonEmbaucher;
	private: System::Windows::Forms::Label^ labelSuperieur;
	private: System::Windows::Forms::TextBox^ textBoxSuperieur;




	private: System::Windows::Forms::GroupBox^ groupBox2;
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
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerDateAfficher;
	private: System::Windows::Forms::TextBox^ textBoxIDAfficher;
	private: System::Windows::Forms::Label^ labelIDAfficher;






	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBoxSuperieurSupprimer;
	private: System::Windows::Forms::Label^ labelSuperieurSupprimer;


	private: System::Windows::Forms::TextBox^ textBoxPrenomSupprimer;


	private: System::Windows::Forms::Label^ labelPrenomSupprimer;

	private: System::Windows::Forms::TextBox^ textBoxNomSupprimer;
	private: System::Windows::Forms::Label^ labelNomSupprimer;


	private: System::Windows::Forms::TextBox^ textBoxIDSupprimer;
	private: System::Windows::Forms::Label^ labelIDSupprimer;
private: System::Windows::Forms::Label^ labelDateSupprimer;
private: System::Windows::Forms::DateTimePicker^ TimePickerDateSupprimer;



private: System::Windows::Forms::Button^ buttonSupprimer;
private: System::Windows::Forms::TextBox^ textBoxAdresseSupprimer;

private: System::Windows::Forms::Label^ labelAdresseSupprimer;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::Label^ labelDateModifier;
private: System::Windows::Forms::DateTimePicker^ TimePickerDateModifier;
private: System::Windows::Forms::Button^ buttonModifier;



private: System::Windows::Forms::TextBox^ textBoxAdresseModifier;

private: System::Windows::Forms::Label^ labelAdresseModifier;
private: System::Windows::Forms::TextBox^ textBoxSuperieurModifier;


private: System::Windows::Forms::Label^ labelSuperieurModifier;

private: System::Windows::Forms::TextBox^ textBoxPrenomModifier;

private: System::Windows::Forms::Label^ labelPrenomModifier;
private: System::Windows::Forms::TextBox^ textBoxNomModifier;
private: System::Windows::Forms::Label^ labelNomModifier;
private: System::Windows::Forms::TextBox^ textBoxIDModifier;
private: System::Windows::Forms::Label^ labelIDModifier;












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
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelSuperieur = (gcnew System::Windows::Forms::Label());
			this->textBoxSuperieur = (gcnew System::Windows::Forms::TextBox());
			this->buttonEmbaucher = (gcnew System::Windows::Forms::Button());
			this->labelDateEmbauche = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerDateEmbauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelPersoAdresse = (gcnew System::Windows::Forms::Label());
			this->textBoxPersoAdresse = (gcnew System::Windows::Forms::TextBox());
			this->labelPersoPrenom = (gcnew System::Windows::Forms::Label());
			this->textBoxPersoPrenom = (gcnew System::Windows::Forms::TextBox());
			this->labelPersoNom = (gcnew System::Windows::Forms::Label());
			this->textBoxPersoNom = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxIDAfficher = (gcnew System::Windows::Forms::TextBox());
			this->labelIDAfficher = (gcnew System::Windows::Forms::Label());
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
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->labelDateModifier = (gcnew System::Windows::Forms::Label());
			this->TimePickerDateModifier = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonModifier = (gcnew System::Windows::Forms::Button());
			this->textBoxAdresseModifier = (gcnew System::Windows::Forms::TextBox());
			this->labelAdresseModifier = (gcnew System::Windows::Forms::Label());
			this->textBoxSuperieurModifier = (gcnew System::Windows::Forms::TextBox());
			this->labelSuperieurModifier = (gcnew System::Windows::Forms::Label());
			this->textBoxPrenomModifier = (gcnew System::Windows::Forms::TextBox());
			this->labelPrenomModifier = (gcnew System::Windows::Forms::Label());
			this->textBoxNomModifier = (gcnew System::Windows::Forms::TextBox());
			this->labelNomModifier = (gcnew System::Windows::Forms::Label());
			this->textBoxIDModifier = (gcnew System::Windows::Forms::TextBox());
			this->labelIDModifier = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(9, 205);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(704, 234);
			this->dgv_enr->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Controls->Add(this->labelSuperieur);
			this->groupBox1->Controls->Add(this->textBoxSuperieur);
			this->groupBox1->Controls->Add(this->buttonEmbaucher);
			this->groupBox1->Controls->Add(this->labelDateEmbauche);
			this->groupBox1->Controls->Add(this->dateTimePickerDateEmbauche);
			this->groupBox1->Controls->Add(this->labelPersoAdresse);
			this->groupBox1->Controls->Add(this->textBoxPersoAdresse);
			this->groupBox1->Controls->Add(this->labelPersoPrenom);
			this->groupBox1->Controls->Add(this->textBoxPersoPrenom);
			this->groupBox1->Controls->Add(this->labelPersoNom);
			this->groupBox1->Controls->Add(this->textBoxPersoNom);
			this->groupBox1->Location = System::Drawing::Point(16, 15);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(312, 276);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ajout membre du personnel";
			// 
			// labelSuperieur
			// 
			this->labelSuperieur->AutoSize = true;
			this->labelSuperieur->Location = System::Drawing::Point(8, 122);
			this->labelSuperieur->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSuperieur->Name = L"labelSuperieur";
			this->labelSuperieur->Size = System::Drawing::Size(65, 16);
			this->labelSuperieur->TabIndex = 10;
			this->labelSuperieur->Text = L"Supérieur";
			// 
			// textBoxSuperieur
			// 
			this->textBoxSuperieur->Location = System::Drawing::Point(8, 142);
			this->textBoxSuperieur->Margin = System::Windows::Forms::Padding(4);
			this->textBoxSuperieur->Name = L"textBoxSuperieur";
			this->textBoxSuperieur->Size = System::Drawing::Size(291, 22);
			this->textBoxSuperieur->TabIndex = 9;
			// 
			// buttonEmbaucher
			// 
			this->buttonEmbaucher->Location = System::Drawing::Point(99, 240);
			this->buttonEmbaucher->Margin = System::Windows::Forms::Padding(4);
			this->buttonEmbaucher->Name = L"buttonEmbaucher";
			this->buttonEmbaucher->Size = System::Drawing::Size(100, 28);
			this->buttonEmbaucher->TabIndex = 8;
			this->buttonEmbaucher->Text = L"Embaucher";
			this->buttonEmbaucher->UseVisualStyleBackColor = true;
			this->buttonEmbaucher->Click += gcnew System::EventHandler(this, &GestionPersonnel::buttonEmbaucher_Click);
			// 
			// labelDateEmbauche
			// 
			this->labelDateEmbauche->AutoSize = true;
			this->labelDateEmbauche->Location = System::Drawing::Point(8, 181);
			this->labelDateEmbauche->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDateEmbauche->Name = L"labelDateEmbauche";
			this->labelDateEmbauche->Size = System::Drawing::Size(114, 16);
			this->labelDateEmbauche->TabIndex = 7;
			this->labelDateEmbauche->Text = L"Date d\'embauche";
			// 
			// dateTimePickerDateEmbauche
			// 
			this->dateTimePickerDateEmbauche->Location = System::Drawing::Point(8, 201);
			this->dateTimePickerDateEmbauche->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerDateEmbauche->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerDateEmbauche->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePickerDateEmbauche->Name = L"dateTimePickerDateEmbauche";
			this->dateTimePickerDateEmbauche->Size = System::Drawing::Size(291, 22);
			this->dateTimePickerDateEmbauche->TabIndex = 6;
			// 
			// labelPersoAdresse
			// 
			this->labelPersoAdresse->AutoSize = true;
			this->labelPersoAdresse->Location = System::Drawing::Point(4, 73);
			this->labelPersoAdresse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPersoAdresse->Name = L"labelPersoAdresse";
			this->labelPersoAdresse->Size = System::Drawing::Size(58, 16);
			this->labelPersoAdresse->TabIndex = 5;
			this->labelPersoAdresse->Text = L"Adresse";
			// 
			// textBoxPersoAdresse
			// 
			this->textBoxPersoAdresse->Location = System::Drawing::Point(8, 92);
			this->textBoxPersoAdresse->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPersoAdresse->Name = L"textBoxPersoAdresse";
			this->textBoxPersoAdresse->Size = System::Drawing::Size(291, 22);
			this->textBoxPersoAdresse->TabIndex = 4;
			// 
			// labelPersoPrenom
			// 
			this->labelPersoPrenom->AutoSize = true;
			this->labelPersoPrenom->Location = System::Drawing::Point(163, 22);
			this->labelPersoPrenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPersoPrenom->Name = L"labelPersoPrenom";
			this->labelPersoPrenom->Size = System::Drawing::Size(54, 16);
			this->labelPersoPrenom->TabIndex = 3;
			this->labelPersoPrenom->Text = L"Prénom";
			// 
			// textBoxPersoPrenom
			// 
			this->textBoxPersoPrenom->Location = System::Drawing::Point(167, 42);
			this->textBoxPersoPrenom->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPersoPrenom->Name = L"textBoxPersoPrenom";
			this->textBoxPersoPrenom->Size = System::Drawing::Size(132, 22);
			this->textBoxPersoPrenom->TabIndex = 2;
			// 
			// labelPersoNom
			// 
			this->labelPersoNom->AutoSize = true;
			this->labelPersoNom->Location = System::Drawing::Point(4, 22);
			this->labelPersoNom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPersoNom->Name = L"labelPersoNom";
			this->labelPersoNom->Size = System::Drawing::Size(36, 16);
			this->labelPersoNom->TabIndex = 1;
			this->labelPersoNom->Text = L"Nom";
			// 
			// textBoxPersoNom
			// 
			this->textBoxPersoNom->Location = System::Drawing::Point(8, 42);
			this->textBoxPersoNom->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPersoNom->Name = L"textBoxPersoNom";
			this->textBoxPersoNom->Size = System::Drawing::Size(132, 22);
			this->textBoxPersoNom->TabIndex = 0;
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
			this->groupBox2->Location = System::Drawing::Point(363, 14);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(722, 448);
			this->groupBox2->TabIndex = 5;
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
			// dateTimePickerDateAfficher
			// 
			this->dateTimePickerDateAfficher->Location = System::Drawing::Point(422, 143);
			this->dateTimePickerDateAfficher->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerDateAfficher->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePickerDateAfficher->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePickerDateAfficher->Name = L"dateTimePickerDateAfficher";
			this->dateTimePickerDateAfficher->Size = System::Drawing::Size(291, 22);
			this->dateTimePickerDateAfficher->TabIndex = 11;
			// 
			// buttonAfficher
			// 
			this->buttonAfficher->Location = System::Drawing::Point(290, 170);
			this->buttonAfficher->Margin = System::Windows::Forms::Padding(4);
			this->buttonAfficher->Name = L"buttonAfficher";
			this->buttonAfficher->Size = System::Drawing::Size(100, 28);
			this->buttonAfficher->TabIndex = 11;
			this->buttonAfficher->Text = L"Afficher";
			this->buttonAfficher->UseVisualStyleBackColor = true;
			this->buttonAfficher->Click += gcnew System::EventHandler(this, &GestionPersonnel::buttonAfficher_Click);
			// 
			// labelDateAfficher
			// 
			this->labelDateAfficher->AutoSize = true;
			this->labelDateAfficher->Location = System::Drawing::Point(419, 123);
			this->labelDateAfficher->Name = L"labelDateAfficher";
			this->labelDateAfficher->Size = System::Drawing::Size(114, 16);
			this->labelDateAfficher->TabIndex = 8;
			this->labelDateAfficher->Text = L"Date d\'embauche";
			// 
			// textBoxSuperieurAfficher
			// 
			this->textBoxSuperieurAfficher->Location = System::Drawing::Point(506, 71);
			this->textBoxSuperieurAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSuperieurAfficher->Name = L"textBoxSuperieurAfficher";
			this->textBoxSuperieurAfficher->Size = System::Drawing::Size(207, 22);
			this->textBoxSuperieurAfficher->TabIndex = 7;
			// 
			// labelSuperieurAfficher
			// 
			this->labelSuperieurAfficher->AutoSize = true;
			this->labelSuperieurAfficher->Location = System::Drawing::Point(503, 53);
			this->labelSuperieurAfficher->Name = L"labelSuperieurAfficher";
			this->labelSuperieurAfficher->Size = System::Drawing::Size(65, 16);
			this->labelSuperieurAfficher->TabIndex = 6;
			this->labelSuperieurAfficher->Text = L"Supérieur";
			// 
			// textBoxAdresseAfficher
			// 
			this->textBoxAdresseAfficher->Location = System::Drawing::Point(9, 143);
			this->textBoxAdresseAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdresseAfficher->Name = L"textBoxAdresseAfficher";
			this->textBoxAdresseAfficher->Size = System::Drawing::Size(252, 22);
			this->textBoxAdresseAfficher->TabIndex = 5;
			this->textBoxAdresseAfficher->Visible = false;
			// 
			// labelAdresseAfficher
			// 
			this->labelAdresseAfficher->AutoSize = true;
			this->labelAdresseAfficher->Location = System::Drawing::Point(6, 123);
			this->labelAdresseAfficher->Name = L"labelAdresseAfficher";
			this->labelAdresseAfficher->Size = System::Drawing::Size(58, 16);
			this->labelAdresseAfficher->TabIndex = 4;
			this->labelAdresseAfficher->Text = L"Adresse";
			// 
			// labelPrenomAfficher
			// 
			this->labelPrenomAfficher->AutoSize = true;
			this->labelPrenomAfficher->Location = System::Drawing::Point(326, 53);
			this->labelPrenomAfficher->Name = L"labelPrenomAfficher";
			this->labelPrenomAfficher->Size = System::Drawing::Size(54, 16);
			this->labelPrenomAfficher->TabIndex = 3;
			this->labelPrenomAfficher->Text = L"Prenom";
			// 
			// textBoxPrenomAfficher
			// 
			this->textBoxPrenomAfficher->Location = System::Drawing::Point(329, 71);
			this->textBoxPrenomAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrenomAfficher->Name = L"textBoxPrenomAfficher";
			this->textBoxPrenomAfficher->Size = System::Drawing::Size(132, 22);
			this->textBoxPrenomAfficher->TabIndex = 2;
			// 
			// labelNomAfficher
			// 
			this->labelNomAfficher->AutoSize = true;
			this->labelNomAfficher->Location = System::Drawing::Point(163, 53);
			this->labelNomAfficher->Name = L"labelNomAfficher";
			this->labelNomAfficher->Size = System::Drawing::Size(36, 16);
			this->labelNomAfficher->TabIndex = 1;
			this->labelNomAfficher->Text = L"Nom";
			// 
			// textBoxNomAfficher
			// 
			this->textBoxNomAfficher->Location = System::Drawing::Point(166, 71);
			this->textBoxNomAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomAfficher->Name = L"textBoxNomAfficher";
			this->textBoxNomAfficher->Size = System::Drawing::Size(133, 22);
			this->textBoxNomAfficher->TabIndex = 0;
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
			this->groupBox3->Location = System::Drawing::Point(1515, 15);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(311, 447);
			this->groupBox3->TabIndex = 6;
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
			this->buttonSupprimer->Click += gcnew System::EventHandler(this, &GestionPersonnel::buttonSupprimer_Click);
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
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox4->Controls->Add(this->labelDateModifier);
			this->groupBox4->Controls->Add(this->TimePickerDateModifier);
			this->groupBox4->Controls->Add(this->buttonModifier);
			this->groupBox4->Controls->Add(this->textBoxAdresseModifier);
			this->groupBox4->Controls->Add(this->labelAdresseModifier);
			this->groupBox4->Controls->Add(this->textBoxSuperieurModifier);
			this->groupBox4->Controls->Add(this->labelSuperieurModifier);
			this->groupBox4->Controls->Add(this->textBoxPrenomModifier);
			this->groupBox4->Controls->Add(this->labelPrenomModifier);
			this->groupBox4->Controls->Add(this->textBoxNomModifier);
			this->groupBox4->Controls->Add(this->labelNomModifier);
			this->groupBox4->Controls->Add(this->textBoxIDModifier);
			this->groupBox4->Controls->Add(this->labelIDModifier);
			this->groupBox4->Location = System::Drawing::Point(1138, 15);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(311, 447);
			this->groupBox4->TabIndex = 15;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Modifier membre du personnel";
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
			// TimePickerDateModifier
			// 
			this->TimePickerDateModifier->Location = System::Drawing::Point(9, 319);
			this->TimePickerDateModifier->Margin = System::Windows::Forms::Padding(4);
			this->TimePickerDateModifier->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->TimePickerDateModifier->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->TimePickerDateModifier->Name = L"TimePickerDateModifier";
			this->TimePickerDateModifier->Size = System::Drawing::Size(291, 22);
			this->TimePickerDateModifier->TabIndex = 14;
			// 
			// buttonModifier
			// 
			this->buttonModifier->Location = System::Drawing::Point(101, 377);
			this->buttonModifier->Margin = System::Windows::Forms::Padding(4);
			this->buttonModifier->Name = L"buttonModifier";
			this->buttonModifier->Size = System::Drawing::Size(96, 28);
			this->buttonModifier->TabIndex = 14;
			this->buttonModifier->Text = L"Modifier";
			this->buttonModifier->UseVisualStyleBackColor = true;
			// 
			// textBoxAdresseModifier
			// 
			this->textBoxAdresseModifier->Location = System::Drawing::Point(6, 203);
			this->textBoxAdresseModifier->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdresseModifier->Name = L"textBoxAdresseModifier";
			this->textBoxAdresseModifier->Size = System::Drawing::Size(252, 22);
			this->textBoxAdresseModifier->TabIndex = 14;
			this->textBoxAdresseModifier->Visible = false;
			// 
			// labelAdresseModifier
			// 
			this->labelAdresseModifier->AutoSize = true;
			this->labelAdresseModifier->Location = System::Drawing::Point(6, 181);
			this->labelAdresseModifier->Name = L"labelAdresseModifier";
			this->labelAdresseModifier->Size = System::Drawing::Size(58, 16);
			this->labelAdresseModifier->TabIndex = 14;
			this->labelAdresseModifier->Text = L"Adresse";
			// 
			// textBoxSuperieurModifier
			// 
			this->textBoxSuperieurModifier->Location = System::Drawing::Point(6, 258);
			this->textBoxSuperieurModifier->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSuperieurModifier->Name = L"textBoxSuperieurModifier";
			this->textBoxSuperieurModifier->Size = System::Drawing::Size(207, 22);
			this->textBoxSuperieurModifier->TabIndex = 14;
			// 
			// labelSuperieurModifier
			// 
			this->labelSuperieurModifier->AutoSize = true;
			this->labelSuperieurModifier->Location = System::Drawing::Point(6, 240);
			this->labelSuperieurModifier->Name = L"labelSuperieurModifier";
			this->labelSuperieurModifier->Size = System::Drawing::Size(65, 16);
			this->labelSuperieurModifier->TabIndex = 14;
			this->labelSuperieurModifier->Text = L"Supérieur";
			// 
			// textBoxPrenomModifier
			// 
			this->textBoxPrenomModifier->Location = System::Drawing::Point(6, 142);
			this->textBoxPrenomModifier->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrenomModifier->Name = L"textBoxPrenomModifier";
			this->textBoxPrenomModifier->Size = System::Drawing::Size(132, 22);
			this->textBoxPrenomModifier->TabIndex = 14;
			// 
			// labelPrenomModifier
			// 
			this->labelPrenomModifier->AutoSize = true;
			this->labelPrenomModifier->Location = System::Drawing::Point(6, 122);
			this->labelPrenomModifier->Name = L"labelPrenomModifier";
			this->labelPrenomModifier->Size = System::Drawing::Size(54, 16);
			this->labelPrenomModifier->TabIndex = 14;
			this->labelPrenomModifier->Text = L"Prenom";
			// 
			// textBoxNomModifier
			// 
			this->textBoxNomModifier->Location = System::Drawing::Point(6, 92);
			this->textBoxNomModifier->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomModifier->Name = L"textBoxNomModifier";
			this->textBoxNomModifier->Size = System::Drawing::Size(133, 22);
			this->textBoxNomModifier->TabIndex = 14;
			// 
			// labelNomModifier
			// 
			this->labelNomModifier->AutoSize = true;
			this->labelNomModifier->Location = System::Drawing::Point(6, 73);
			this->labelNomModifier->Name = L"labelNomModifier";
			this->labelNomModifier->Size = System::Drawing::Size(36, 16);
			this->labelNomModifier->TabIndex = 14;
			this->labelNomModifier->Text = L"Nom";
			// 
			// textBoxIDModifier
			// 
			this->textBoxIDModifier->Location = System::Drawing::Point(6, 42);
			this->textBoxIDModifier->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxIDModifier->Name = L"textBoxIDModifier";
			this->textBoxIDModifier->Size = System::Drawing::Size(55, 22);
			this->textBoxIDModifier->TabIndex = 14;
			// 
			// labelIDModifier
			// 
			this->labelIDModifier->AutoSize = true;
			this->labelIDModifier->Location = System::Drawing::Point(6, 22);
			this->labelIDModifier->Name = L"labelIDModifier";
			this->labelIDModifier->Size = System::Drawing::Size(20, 16);
			this->labelIDModifier->TabIndex = 14;
			this->labelIDModifier->Text = L"ID";
			// 
			// GestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 546);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GestionPersonnel";
			this->Text = L"Gestion du Personnel";
			this->Load += gcnew System::EventHandler(this, &GestionPersonnel::GestionPersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oPers = gcnew NS_Comp_Personnel::Personnel();
	}

	private: System::Void buttonEmbaucher_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->textBoxPersoNom->Text->Length == 0 || this->textBoxPersoPrenom->Text->Length == 0 || this->textBoxPersoAdresse->Text->Length == 0 || this->textBoxSuperieur->Text->Length == 0) {
			MessageBox::Show("Une des données est vide, merci d'entrer toutes les données.");
		}
		else {
			this->oPers->creerPersonnel(this->textBoxPersoNom->Text, this->textBoxPersoPrenom->Text, this->textBoxSuperieur->Text, this->textBoxPersoAdresse->Text, this->dateTimePickerDateEmbauche->Value);
			MessageBox::Show("Personnel insérer dans la base de donnée");
		}
	}

private: System::Void buttonAfficher_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oPers->afficherPersonnel( this->textBoxNomAfficher->Text, this->textBoxPrenomAfficher->Text, this->textBoxSuperieurAfficher->Text, this->textBoxAdresseAfficher->Text, this->dateTimePickerDateAfficher->Value,"Rsl");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Rsl";
}


private: System::Void buttonSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Les données de toute personne correspondant à ses critères vont être supprimer : \n\t" + this->textBoxIDSupprimer->Text + "\n\t" + this->textBoxNomSupprimer->Text + "\n\t" + this->textBoxPrenomSupprimer->Text + "\n\t" + this->textBoxAdresseSupprimer->Text + "\n\t" + this->textBoxSuperieurSupprimer->Text + "\n\t" + this->textBoxAdresseSupprimer->Text + "\n\t" + this->TimePickerDateSupprimer->Value);
	this->oPers->supprimerPersonnel(this->textBoxNomSupprimer->Text, this->textBoxPrenomSupprimer->Text, this->textBoxSuperieurSupprimer->Text, this->textBoxAdresseSupprimer->Text, this->TimePickerDateSupprimer->Value);
}
};
}
