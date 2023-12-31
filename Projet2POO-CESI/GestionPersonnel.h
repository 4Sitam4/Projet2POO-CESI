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
	/// Description r�sum�e de GestionPersonnel
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
		/// Nettoyage des ressources utilis�es.
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
		  
	private: System::Data::DataSet^ oDs;






		   /// <summary>
		   /// 
		   /// </summary>
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::Label^ labelPersoNom;
	private: System::Windows::Forms::TextBox^ textBoxPersoNom;
	private: System::Windows::Forms::Label^ labelPersoPrenom;
	private: System::Windows::Forms::TextBox^ textBoxPersoPrenom;
	private: System::Windows::Forms::Label^ labelDateEmbauche;
	private: System::Windows::Forms::DateTimePicker^ TimePickerDateEmbauche;



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
	private: System::Windows::Forms::DateTimePicker^ TimePickerDateEmbaucheAfficher;


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
private: System::Windows::Forms::DateTimePicker^ TimePickerDateEmbaucheSupprimer;




	private: System::Windows::Forms::Button^ buttonSupprimer;
	private: System::Windows::Forms::TextBox^ textBoxAdresseSupprimer;

	private: System::Windows::Forms::Label^ labelAdresseSupprimer;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ labelDateModifier;
private: System::Windows::Forms::DateTimePicker^ TimePickerDateEmbaucheCritSelectModif;



	private: System::Windows::Forms::Button^ buttonModifier;
private: System::Windows::Forms::TextBox^ textBoxAdresseCritSelectModif;





	private: System::Windows::Forms::Label^ labelAdresseModifier;
private: System::Windows::Forms::TextBox^ textBoxSuperieurCritSelectModif;




	private: System::Windows::Forms::Label^ labelSuperieurModifier;
private: System::Windows::Forms::TextBox^ textBoxPrenomCritSelectModif;



	private: System::Windows::Forms::Label^ labelPrenomModifier;
private: System::Windows::Forms::TextBox^ textBoxNomCritSelectModif;

	private: System::Windows::Forms::Label^ labelNomModifier;
private: System::Windows::Forms::TextBox^ textBoxIDCritSelectModif;

	private: System::Windows::Forms::Label^ labelIDModifier;
private: System::Windows::Forms::GroupBox^ groupBoxCrit�res;
private: System::Windows::Forms::GroupBox^ groupBoxCritSelect;




private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ textBoxPrenomNewModif;


private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBoxNomNewModif;
private: System::Windows::Forms::TextBox^ textBoxAdresseNewModif;




private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::DateTimePicker^ TimePickerDateEmbaucheNewModif;


private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ textBoxSuperieurNewModif;

private: System::Windows::Forms::Label^ label5;
private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;














	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GestionPersonnel::typeid));
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelSuperieur = (gcnew System::Windows::Forms::Label());
			this->textBoxSuperieur = (gcnew System::Windows::Forms::TextBox());
			this->buttonEmbaucher = (gcnew System::Windows::Forms::Button());
			this->labelDateEmbauche = (gcnew System::Windows::Forms::Label());
			this->TimePickerDateEmbauche = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->TimePickerDateEmbaucheAfficher = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->TimePickerDateEmbaucheSupprimer = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->groupBoxCritSelect = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxIDCritSelectModif = (gcnew System::Windows::Forms::TextBox());
			this->TimePickerDateEmbaucheCritSelectModif = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->groupBoxCrit�res = (gcnew System::Windows::Forms::GroupBox());
			this->TimePickerDateEmbaucheNewModif = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxSuperieurNewModif = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxAdresseNewModif = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrenomNewModif = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxNomNewModif = (gcnew System::Windows::Forms::TextBox());
			this->buttonModifier = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBoxCritSelect->SuspendLayout();
			this->groupBoxCrit�res->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(104, 185);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(1209, 246);
			this->dgv_enr->TabIndex = 0;
			this->dgv_enr->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionPersonnel::dgv_enr_CellContentClick);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Controls->Add(this->labelSuperieur);
			this->groupBox1->Controls->Add(this->textBoxSuperieur);
			this->groupBox1->Controls->Add(this->buttonEmbaucher);
			this->groupBox1->Controls->Add(this->labelDateEmbauche);
			this->groupBox1->Controls->Add(this->TimePickerDateEmbauche);
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
			this->groupBox1->Size = System::Drawing::Size(312, 494);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ajout membre du personnel";
			// 
			// labelSuperieur
			// 
			this->labelSuperieur->AutoSize = true;
			this->labelSuperieur->Location = System::Drawing::Point(5, 288);
			this->labelSuperieur->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSuperieur->Name = L"labelSuperieur";
			this->labelSuperieur->Size = System::Drawing::Size(65, 16);
			this->labelSuperieur->TabIndex = 10;
			this->labelSuperieur->Text = L"Sup�rieur";
			// 
			// textBoxSuperieur
			// 
			this->textBoxSuperieur->Location = System::Drawing::Point(7, 308);
			this->textBoxSuperieur->Margin = System::Windows::Forms::Padding(4);
			this->textBoxSuperieur->Name = L"textBoxSuperieur";
			this->textBoxSuperieur->Size = System::Drawing::Size(182, 22);
			this->textBoxSuperieur->TabIndex = 9;
			// 
			// buttonEmbaucher
			// 
			this->buttonEmbaucher->Location = System::Drawing::Point(89, 442);
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
			this->labelDateEmbauche->Location = System::Drawing::Point(5, 363);
			this->labelDateEmbauche->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelDateEmbauche->Name = L"labelDateEmbauche";
			this->labelDateEmbauche->Size = System::Drawing::Size(114, 16);
			this->labelDateEmbauche->TabIndex = 7;
			this->labelDateEmbauche->Text = L"Date d\'embauche";
			// 
			// TimePickerDateEmbauche
			// 
			this->TimePickerDateEmbauche->Location = System::Drawing::Point(8, 383);
			this->TimePickerDateEmbauche->Margin = System::Windows::Forms::Padding(4);
			this->TimePickerDateEmbauche->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->TimePickerDateEmbauche->Name = L"TimePickerDateEmbauche";
			this->TimePickerDateEmbauche->Size = System::Drawing::Size(235, 22);
			this->TimePickerDateEmbauche->TabIndex = 6;
			// 
			// labelPersoAdresse
			// 
			this->labelPersoAdresse->AutoSize = true;
			this->labelPersoAdresse->Location = System::Drawing::Point(5, 209);
			this->labelPersoAdresse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPersoAdresse->Name = L"labelPersoAdresse";
			this->labelPersoAdresse->Size = System::Drawing::Size(58, 16);
			this->labelPersoAdresse->TabIndex = 5;
			this->labelPersoAdresse->Text = L"Adresse";
			// 
			// textBoxPersoAdresse
			// 
			this->textBoxPersoAdresse->Location = System::Drawing::Point(7, 229);
			this->textBoxPersoAdresse->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPersoAdresse->Name = L"textBoxPersoAdresse";
			this->textBoxPersoAdresse->Size = System::Drawing::Size(182, 22);
			this->textBoxPersoAdresse->TabIndex = 4;
			// 
			// labelPersoPrenom
			// 
			this->labelPersoPrenom->AutoSize = true;
			this->labelPersoPrenom->Location = System::Drawing::Point(4, 125);
			this->labelPersoPrenom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPersoPrenom->Name = L"labelPersoPrenom";
			this->labelPersoPrenom->Size = System::Drawing::Size(54, 16);
			this->labelPersoPrenom->TabIndex = 3;
			this->labelPersoPrenom->Text = L"Pr�nom";
			// 
			// textBoxPersoPrenom
			// 
			this->textBoxPersoPrenom->Location = System::Drawing::Point(7, 145);
			this->textBoxPersoPrenom->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPersoPrenom->Name = L"textBoxPersoPrenom";
			this->textBoxPersoPrenom->Size = System::Drawing::Size(132, 22);
			this->textBoxPersoPrenom->TabIndex = 2;
			// 
			// labelPersoNom
			// 
			this->labelPersoNom->AutoSize = true;
			this->labelPersoNom->Location = System::Drawing::Point(4, 48);
			this->labelPersoNom->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPersoNom->Name = L"labelPersoNom";
			this->labelPersoNom->Size = System::Drawing::Size(36, 16);
			this->labelPersoNom->TabIndex = 1;
			this->labelPersoNom->Text = L"Nom";
			// 
			// textBoxPersoNom
			// 
			this->textBoxPersoNom->Location = System::Drawing::Point(7, 68);
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
			this->groupBox2->Controls->Add(this->TimePickerDateEmbaucheAfficher);
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
			this->groupBox2->Location = System::Drawing::Point(16, 523);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(1492, 479);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Afficher membre du personnel";
			// 
			// textBoxIDAfficher
			// 
			this->textBoxIDAfficher->Location = System::Drawing::Point(55, 71);
			this->textBoxIDAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxIDAfficher->Name = L"textBoxIDAfficher";
			this->textBoxIDAfficher->Size = System::Drawing::Size(84, 22);
			this->textBoxIDAfficher->TabIndex = 13;
			// 
			// labelIDAfficher
			// 
			this->labelIDAfficher->AutoSize = true;
			this->labelIDAfficher->Location = System::Drawing::Point(52, 53);
			this->labelIDAfficher->Name = L"labelIDAfficher";
			this->labelIDAfficher->Size = System::Drawing::Size(20, 16);
			this->labelIDAfficher->TabIndex = 12;
			this->labelIDAfficher->Text = L"ID";
			// 
			// TimePickerDateEmbaucheAfficher
			// 
			this->TimePickerDateEmbaucheAfficher->Location = System::Drawing::Point(1154, 73);
			this->TimePickerDateEmbaucheAfficher->Margin = System::Windows::Forms::Padding(4);
			this->TimePickerDateEmbaucheAfficher->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->TimePickerDateEmbaucheAfficher->Name = L"TimePickerDateEmbaucheAfficher";
			this->TimePickerDateEmbaucheAfficher->Size = System::Drawing::Size(236, 22);
			this->TimePickerDateEmbaucheAfficher->TabIndex = 11;
			// 
			// buttonAfficher
			// 
			this->buttonAfficher->Location = System::Drawing::Point(596, 122);
			this->buttonAfficher->Margin = System::Windows::Forms::Padding(4);
			this->buttonAfficher->Name = L"buttonAfficher";
			this->buttonAfficher->Size = System::Drawing::Size(177, 44);
			this->buttonAfficher->TabIndex = 11;
			this->buttonAfficher->Text = L"Afficher";
			this->buttonAfficher->UseVisualStyleBackColor = true;
			this->buttonAfficher->Click += gcnew System::EventHandler(this, &GestionPersonnel::buttonAfficher_Click);
			// 
			// labelDateAfficher
			// 
			this->labelDateAfficher->AutoSize = true;
			this->labelDateAfficher->Location = System::Drawing::Point(1151, 53);
			this->labelDateAfficher->Name = L"labelDateAfficher";
			this->labelDateAfficher->Size = System::Drawing::Size(114, 16);
			this->labelDateAfficher->TabIndex = 8;
			this->labelDateAfficher->Text = L"Date d\'embauche";
			// 
			// textBoxSuperieurAfficher
			// 
			this->textBoxSuperieurAfficher->Location = System::Drawing::Point(596, 71);
			this->textBoxSuperieurAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSuperieurAfficher->Name = L"textBoxSuperieurAfficher";
			this->textBoxSuperieurAfficher->Size = System::Drawing::Size(194, 22);
			this->textBoxSuperieurAfficher->TabIndex = 7;
			// 
			// labelSuperieurAfficher
			// 
			this->labelSuperieurAfficher->AutoSize = true;
			this->labelSuperieurAfficher->Location = System::Drawing::Point(593, 53);
			this->labelSuperieurAfficher->Name = L"labelSuperieurAfficher";
			this->labelSuperieurAfficher->Size = System::Drawing::Size(65, 16);
			this->labelSuperieurAfficher->TabIndex = 6;
			this->labelSuperieurAfficher->Text = L"Sup�rieur";
			// 
			// textBoxAdresseAfficher
			// 
			this->textBoxAdresseAfficher->Location = System::Drawing::Point(870, 71);
			this->textBoxAdresseAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdresseAfficher->Name = L"textBoxAdresseAfficher";
			this->textBoxAdresseAfficher->Size = System::Drawing::Size(205, 22);
			this->textBoxAdresseAfficher->TabIndex = 5;
			// 
			// labelAdresseAfficher
			// 
			this->labelAdresseAfficher->AutoSize = true;
			this->labelAdresseAfficher->Location = System::Drawing::Point(867, 53);
			this->labelAdresseAfficher->Name = L"labelAdresseAfficher";
			this->labelAdresseAfficher->Size = System::Drawing::Size(58, 16);
			this->labelAdresseAfficher->TabIndex = 4;
			this->labelAdresseAfficher->Text = L"Adresse";
			// 
			// labelPrenomAfficher
			// 
			this->labelPrenomAfficher->AutoSize = true;
			this->labelPrenomAfficher->Location = System::Drawing::Point(387, 53);
			this->labelPrenomAfficher->Name = L"labelPrenomAfficher";
			this->labelPrenomAfficher->Size = System::Drawing::Size(54, 16);
			this->labelPrenomAfficher->TabIndex = 3;
			this->labelPrenomAfficher->Text = L"Prenom";
			// 
			// textBoxPrenomAfficher
			// 
			this->textBoxPrenomAfficher->Location = System::Drawing::Point(390, 71);
			this->textBoxPrenomAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrenomAfficher->Name = L"textBoxPrenomAfficher";
			this->textBoxPrenomAfficher->Size = System::Drawing::Size(132, 22);
			this->textBoxPrenomAfficher->TabIndex = 2;
			// 
			// labelNomAfficher
			// 
			this->labelNomAfficher->AutoSize = true;
			this->labelNomAfficher->Location = System::Drawing::Point(193, 53);
			this->labelNomAfficher->Name = L"labelNomAfficher";
			this->labelNomAfficher->Size = System::Drawing::Size(36, 16);
			this->labelNomAfficher->TabIndex = 1;
			this->labelNomAfficher->Text = L"Nom";
			// 
			// textBoxNomAfficher
			// 
			this->textBoxNomAfficher->Location = System::Drawing::Point(196, 71);
			this->textBoxNomAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomAfficher->Name = L"textBoxNomAfficher";
			this->textBoxNomAfficher->Size = System::Drawing::Size(133, 22);
			this->textBoxNomAfficher->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox3->Controls->Add(this->labelDateSupprimer);
			this->groupBox3->Controls->Add(this->TimePickerDateEmbaucheSupprimer);
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
			this->groupBox3->Location = System::Drawing::Point(1197, 15);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(311, 494);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Supprimer membre du personnel";
			// 
			// labelDateSupprimer
			// 
			this->labelDateSupprimer->AutoSize = true;
			this->labelDateSupprimer->Location = System::Drawing::Point(18, 361);
			this->labelDateSupprimer->Name = L"labelDateSupprimer";
			this->labelDateSupprimer->Size = System::Drawing::Size(114, 16);
			this->labelDateSupprimer->TabIndex = 14;
			this->labelDateSupprimer->Text = L"Date d\'embauche";
			// 
			// TimePickerDateEmbaucheSupprimer
			// 
			this->TimePickerDateEmbaucheSupprimer->Location = System::Drawing::Point(21, 383);
			this->TimePickerDateEmbaucheSupprimer->Margin = System::Windows::Forms::Padding(4);
			this->TimePickerDateEmbaucheSupprimer->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->TimePickerDateEmbaucheSupprimer->Name = L"TimePickerDateEmbaucheSupprimer";
			this->TimePickerDateEmbaucheSupprimer->Size = System::Drawing::Size(250, 22);
			this->TimePickerDateEmbaucheSupprimer->TabIndex = 14;
			// 
			// buttonSupprimer
			// 
			this->buttonSupprimer->Location = System::Drawing::Point(90, 442);
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
			this->textBoxAdresseSupprimer->Location = System::Drawing::Point(15, 248);
			this->textBoxAdresseSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdresseSupprimer->Name = L"textBoxAdresseSupprimer";
			this->textBoxAdresseSupprimer->Size = System::Drawing::Size(252, 22);
			this->textBoxAdresseSupprimer->TabIndex = 14;
			// 
			// labelAdresseSupprimer
			// 
			this->labelAdresseSupprimer->AutoSize = true;
			this->labelAdresseSupprimer->Location = System::Drawing::Point(16, 230);
			this->labelAdresseSupprimer->Name = L"labelAdresseSupprimer";
			this->labelAdresseSupprimer->Size = System::Drawing::Size(58, 16);
			this->labelAdresseSupprimer->TabIndex = 14;
			this->labelAdresseSupprimer->Text = L"Adresse";
			// 
			// textBoxSuperieurSupprimer
			// 
			this->textBoxSuperieurSupprimer->Location = System::Drawing::Point(19, 314);
			this->textBoxSuperieurSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSuperieurSupprimer->Name = L"textBoxSuperieurSupprimer";
			this->textBoxSuperieurSupprimer->Size = System::Drawing::Size(207, 22);
			this->textBoxSuperieurSupprimer->TabIndex = 14;
			// 
			// labelSuperieurSupprimer
			// 
			this->labelSuperieurSupprimer->AutoSize = true;
			this->labelSuperieurSupprimer->Location = System::Drawing::Point(18, 296);
			this->labelSuperieurSupprimer->Name = L"labelSuperieurSupprimer";
			this->labelSuperieurSupprimer->Size = System::Drawing::Size(65, 16);
			this->labelSuperieurSupprimer->TabIndex = 14;
			this->labelSuperieurSupprimer->Text = L"Sup�rieur";
			// 
			// textBoxPrenomSupprimer
			// 
			this->textBoxPrenomSupprimer->Location = System::Drawing::Point(15, 187);
			this->textBoxPrenomSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrenomSupprimer->Name = L"textBoxPrenomSupprimer";
			this->textBoxPrenomSupprimer->Size = System::Drawing::Size(132, 22);
			this->textBoxPrenomSupprimer->TabIndex = 14;
			// 
			// labelPrenomSupprimer
			// 
			this->labelPrenomSupprimer->AutoSize = true;
			this->labelPrenomSupprimer->Location = System::Drawing::Point(12, 169);
			this->labelPrenomSupprimer->Name = L"labelPrenomSupprimer";
			this->labelPrenomSupprimer->Size = System::Drawing::Size(54, 16);
			this->labelPrenomSupprimer->TabIndex = 14;
			this->labelPrenomSupprimer->Text = L"Prenom";
			// 
			// textBoxNomSupprimer
			// 
			this->textBoxNomSupprimer->Location = System::Drawing::Point(15, 124);
			this->textBoxNomSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomSupprimer->Name = L"textBoxNomSupprimer";
			this->textBoxNomSupprimer->Size = System::Drawing::Size(133, 22);
			this->textBoxNomSupprimer->TabIndex = 14;
			// 
			// labelNomSupprimer
			// 
			this->labelNomSupprimer->AutoSize = true;
			this->labelNomSupprimer->Location = System::Drawing::Point(12, 106);
			this->labelNomSupprimer->Name = L"labelNomSupprimer";
			this->labelNomSupprimer->Size = System::Drawing::Size(36, 16);
			this->labelNomSupprimer->TabIndex = 14;
			this->labelNomSupprimer->Text = L"Nom";
			// 
			// textBoxIDSupprimer
			// 
			this->textBoxIDSupprimer->Location = System::Drawing::Point(15, 55);
			this->textBoxIDSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxIDSupprimer->Name = L"textBoxIDSupprimer";
			this->textBoxIDSupprimer->Size = System::Drawing::Size(55, 22);
			this->textBoxIDSupprimer->TabIndex = 14;
			// 
			// labelIDSupprimer
			// 
			this->labelIDSupprimer->AutoSize = true;
			this->labelIDSupprimer->Location = System::Drawing::Point(12, 37);
			this->labelIDSupprimer->Name = L"labelIDSupprimer";
			this->labelIDSupprimer->Size = System::Drawing::Size(20, 16);
			this->labelIDSupprimer->TabIndex = 14;
			this->labelIDSupprimer->Text = L"ID";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox4->Controls->Add(this->groupBoxCritSelect);
			this->groupBox4->Controls->Add(this->groupBoxCrit�res);
			this->groupBox4->Controls->Add(this->buttonModifier);
			this->groupBox4->Location = System::Drawing::Point(361, 15);
			this->groupBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Size = System::Drawing::Size(800, 494);
			this->groupBox4->TabIndex = 15;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Modifier membre du personnel";
			// 
			// groupBoxCritSelect
			// 
			this->groupBoxCritSelect->BackColor = System::Drawing::SystemColors::MenuBar;
			this->groupBoxCritSelect->Controls->Add(this->textBoxIDCritSelectModif);
			this->groupBoxCritSelect->Controls->Add(this->TimePickerDateEmbaucheCritSelectModif);
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
			this->groupBoxCritSelect->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBoxCritSelect->Name = L"groupBoxCritSelect";
			this->groupBoxCritSelect->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBoxCritSelect->Size = System::Drawing::Size(325, 363);
			this->groupBoxCritSelect->TabIndex = 16;
			this->groupBoxCritSelect->TabStop = false;
			this->groupBoxCritSelect->Text = L"Crit�res de s�lection";
			// 
			// textBoxIDCritSelectModif
			// 
			this->textBoxIDCritSelectModif->Location = System::Drawing::Point(7, 50);
			this->textBoxIDCritSelectModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxIDCritSelectModif->Name = L"textBoxIDCritSelectModif";
			this->textBoxIDCritSelectModif->Size = System::Drawing::Size(55, 22);
			this->textBoxIDCritSelectModif->TabIndex = 14;
			// 
			// TimePickerDateEmbaucheCritSelectModif
			// 
			this->TimePickerDateEmbaucheCritSelectModif->Location = System::Drawing::Point(7, 319);
			this->TimePickerDateEmbaucheCritSelectModif->Margin = System::Windows::Forms::Padding(4);
			this->TimePickerDateEmbaucheCritSelectModif->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->TimePickerDateEmbaucheCritSelectModif->Name = L"TimePickerDateEmbaucheCritSelectModif";
			this->TimePickerDateEmbaucheCritSelectModif->Size = System::Drawing::Size(291, 22);
			this->TimePickerDateEmbaucheCritSelectModif->TabIndex = 14;
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
			this->labelDateModifier->Location = System::Drawing::Point(5, 299);
			this->labelDateModifier->Name = L"labelDateModifier";
			this->labelDateModifier->Size = System::Drawing::Size(114, 16);
			this->labelDateModifier->TabIndex = 14;
			this->labelDateModifier->Text = L"Date d\'embauche";
			// 
			// labelNomModifier
			// 
			this->labelNomModifier->AutoSize = true;
			this->labelNomModifier->Location = System::Drawing::Point(5, 82);
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
			this->labelPrenomModifier->Location = System::Drawing::Point(5, 139);
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
			// 
			// labelSuperieurModifier
			// 
			this->labelSuperieurModifier->AutoSize = true;
			this->labelSuperieurModifier->Location = System::Drawing::Point(5, 249);
			this->labelSuperieurModifier->Name = L"labelSuperieurModifier";
			this->labelSuperieurModifier->Size = System::Drawing::Size(65, 16);
			this->labelSuperieurModifier->TabIndex = 14;
			this->labelSuperieurModifier->Text = L"Sup�rieur";
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
			// groupBoxCrit�res
			// 
			this->groupBoxCrit�res->BackColor = System::Drawing::SystemColors::MenuBar;
			this->groupBoxCrit�res->Controls->Add(this->TimePickerDateEmbaucheNewModif);
			this->groupBoxCrit�res->Controls->Add(this->label6);
			this->groupBoxCrit�res->Controls->Add(this->textBoxSuperieurNewModif);
			this->groupBoxCrit�res->Controls->Add(this->label5);
			this->groupBoxCrit�res->Controls->Add(this->textBoxAdresseNewModif);
			this->groupBoxCrit�res->Controls->Add(this->label4);
			this->groupBoxCrit�res->Controls->Add(this->label3);
			this->groupBoxCrit�res->Controls->Add(this->textBoxPrenomNewModif);
			this->groupBoxCrit�res->Controls->Add(this->label2);
			this->groupBoxCrit�res->Controls->Add(this->textBoxNomNewModif);
			this->groupBoxCrit�res->Location = System::Drawing::Point(425, 42);
			this->groupBoxCrit�res->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBoxCrit�res->Name = L"groupBoxCrit�res";
			this->groupBoxCrit�res->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBoxCrit�res->Size = System::Drawing::Size(331, 363);
			this->groupBoxCrit�res->TabIndex = 15;
			this->groupBoxCrit�res->TabStop = false;
			this->groupBoxCrit�res->Text = L"Nouvelles valeures";
			// 
			// TimePickerDateEmbaucheNewModif
			// 
			this->TimePickerDateEmbaucheNewModif->Location = System::Drawing::Point(9, 319);
			this->TimePickerDateEmbaucheNewModif->Margin = System::Windows::Forms::Padding(4);
			this->TimePickerDateEmbaucheNewModif->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->TimePickerDateEmbaucheNewModif->Name = L"TimePickerDateEmbaucheNewModif";
			this->TimePickerDateEmbaucheNewModif->Size = System::Drawing::Size(291, 22);
			this->TimePickerDateEmbaucheNewModif->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(5, 299);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Date d\'embauche";
			// 
			// textBoxSuperieurNewModif
			// 
			this->textBoxSuperieurNewModif->Location = System::Drawing::Point(5, 251);
			this->textBoxSuperieurNewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSuperieurNewModif->Name = L"textBoxSuperieurNewModif";
			this->textBoxSuperieurNewModif->Size = System::Drawing::Size(207, 22);
			this->textBoxSuperieurNewModif->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Sup�rieur";
			// 
			// textBoxAdresseNewModif
			// 
			this->textBoxAdresseNewModif->Location = System::Drawing::Point(5, 185);
			this->textBoxAdresseNewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxAdresseNewModif->Name = L"textBoxAdresseNewModif";
			this->textBoxAdresseNewModif->Size = System::Drawing::Size(252, 22);
			this->textBoxAdresseNewModif->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Adresse";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Prenom";
			// 
			// textBoxPrenomNewModif
			// 
			this->textBoxPrenomNewModif->Location = System::Drawing::Point(9, 121);
			this->textBoxPrenomNewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrenomNewModif->Name = L"textBoxPrenomNewModif";
			this->textBoxPrenomNewModif->Size = System::Drawing::Size(132, 22);
			this->textBoxPrenomNewModif->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nom";
			// 
			// textBoxNomNewModif
			// 
			this->textBoxNomNewModif->Location = System::Drawing::Point(9, 50);
			this->textBoxNomNewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomNewModif->Name = L"textBoxNomNewModif";
			this->textBoxNomNewModif->Size = System::Drawing::Size(133, 22);
			this->textBoxNomNewModif->TabIndex = 15;
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
			this->buttonModifier->Click += gcnew System::EventHandler(this, &GestionPersonnel::buttonModifier_Click);
			// 
			// GestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1833, 1013);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
			this->groupBoxCritSelect->ResumeLayout(false);
			this->groupBoxCritSelect->PerformLayout();
			this->groupBoxCrit�res->ResumeLayout(false);
			this->groupBoxCrit�res->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oPers = gcnew NS_Comp_Personnel::Personnel();
	}

	private: System::Void buttonEmbaucher_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime datemin = DateTime(1753, 1, 1);
		if (this->textBoxPersoNom->Text->Length == 0 || this->textBoxPersoPrenom->Text->Length == 0 || this->textBoxPersoAdresse->Text->Length == 0 || this->TimePickerDateEmbauche->Value == datemin) {
			MessageBox::Show("Une des donn�es est vide, merci d'entrer toutes les donn�es.");
		}
		else {
			this->oPers->creerPersonnel(this->textBoxPersoNom->Text, this->textBoxPersoPrenom->Text, this->textBoxSuperieur->Text, this->textBoxPersoAdresse->Text, this->TimePickerDateEmbauche->Value);
			MessageBox::Show("Personnel ins�rer dans la base de donn�e");
		}
	}

	private: System::Void buttonAfficher_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv_enr->Refresh();
		MessageBox::Show("voila la date : \n\t" + System::Convert::ToString(this->TimePickerDateEmbaucheAfficher));
		this->oDs = this->oPers->afficherPersonnel(this->textBoxIDAfficher->Text, this->textBoxNomAfficher->Text, this->textBoxPrenomAfficher->Text, this->textBoxSuperieurAfficher->Text, this->textBoxAdresseAfficher->Text,this->TimePickerDateEmbaucheAfficher->Value, "Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
		this->TimePickerDateEmbaucheAfficher->Value = DateTime(1753, 1, 1);
	}


	private: System::Void buttonSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Les donn�es de toute personne correspondant � ses crit�res vont �tre supprimer : \n\t" + this->textBoxIDSupprimer->Text + "\n\t" + this->textBoxNomSupprimer->Text + "\n\t" + this->textBoxPrenomSupprimer->Text + "\n\t" + this->textBoxAdresseSupprimer->Text + "\n\t" + this->textBoxSuperieurSupprimer->Text + "\n\t" + this->textBoxAdresseSupprimer->Text + "\n\t" + this->TimePickerDateEmbaucheSupprimer->Value);
		this->oPers->supprimerPersonnel(this->textBoxIDSupprimer->Text, this->textBoxNomSupprimer->Text, this->textBoxPrenomSupprimer->Text, this->textBoxSuperieurSupprimer->Text, this->textBoxAdresseSupprimer->Text, this->TimePickerDateEmbaucheSupprimer->Value);
		this->TimePickerDateEmbaucheSupprimer->Value = DateTime(1753, 1, 1);
	}

	private: System::Void buttonModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		System::DateTime^ date = this->TimePickerDateEmbaucheNewModif->Value;
		if (this->textBoxNomNewModif->Text->Length == 0 && this->textBoxPrenomNewModif->Text->Length == 0 && this->textBoxAdresseNewModif->Text->Length == 0 && this->textBoxSuperieurNewModif->Text->Length == 0 && date->ToShortDateString() == "01/01/1753") {
			MessageBox::Show("Aucune nouvelle valeur n'a �t� rentr�e.\n Veuillez entrer au moins une nouvelle valeur pour effectuer l'op�ration.");
		}
		else {
			this->oPers->modifierPersonnel(this->textBoxIDCritSelectModif->Text, this->textBoxNomCritSelectModif->Text, this->textBoxPrenomCritSelectModif->Text, this->textBoxSuperieurCritSelectModif->Text, this->textBoxAdresseCritSelectModif->Text, this->TimePickerDateEmbaucheCritSelectModif->Value, this->textBoxNomNewModif->Text, this->textBoxPrenomNewModif->Text, this->textBoxSuperieurNewModif->Text, this->textBoxAdresseNewModif->Text, this->TimePickerDateEmbaucheNewModif->Value);
			MessageBox::Show("Informations relatives au personnel modifi�es");
			this->TimePickerDateEmbaucheCritSelectModif->Value = DateTime(1753, 1, 1);
			this->TimePickerDateEmbaucheNewModif->Value = DateTime(1753, 1, 1);
		}
	}


private: System::Void dgv_enr_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}