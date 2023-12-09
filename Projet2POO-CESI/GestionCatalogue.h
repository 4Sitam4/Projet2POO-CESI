#pragma once
#include "Catalogue.h"

namespace Projet2POOCESI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionCatalogue
	/// </summary>
	public ref class GestionCatalogue : public System::Windows::Forms::Form
	{
	public:
		GestionCatalogue(void)
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
		~GestionCatalogue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ labelTVAAjout;
	private: System::Windows::Forms::TextBox^ textBoxTVAAjout;
	private: System::Windows::Forms::Button^ buttonAjouter;
	protected:


	private: NS_Comp_Catalogue::Catalogue^ oCat;
	private: System::Data::DataSet^ oDs;


	private: System::Windows::Forms::Label^ labelReapproAjoout;

	private: System::Windows::Forms::TextBox^ textBoxReapproAjout;


	private: System::Windows::Forms::Label^ labelStockAjout;
	private: System::Windows::Forms::TextBox^ textBoxStockAjout;



	private: System::Windows::Forms::Label^ labelNomProduitAjout;

	private: System::Windows::Forms::TextBox^ textBoxNomProduitAjout;
	private: System::Windows::Forms::Label^ labelPrixAjout;
	private: System::Windows::Forms::TextBox^ textBoxPrixAjout;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBoxIDAfficher;
	private: System::Windows::Forms::Label^ labelIDAfficher;
	private: System::Windows::Forms::DataGridView^ dgv_enr;

	private: System::Windows::Forms::Button^ buttonAfficher;
	private: System::Windows::Forms::Label^ labelTVAAfficher;
	private: System::Windows::Forms::TextBox^ textBoxPrixAfficher;




	private: System::Windows::Forms::Label^ labelPrixAfficher;





	private: System::Windows::Forms::Label^ labelNomProduitAfficher;
	private: System::Windows::Forms::TextBox^ textBoxNomProduitAfficher;
	private: System::Windows::Forms::TextBox^ textBoxTVAAfficher;



	private: System::Windows::Forms::Label^ labelReapprovisionnementAfficher;
	private: System::Windows::Forms::TextBox^ textBoxReapprovisionnementAfficher;

	private: System::Windows::Forms::Label^ labelStockAfficher;

	private: System::Windows::Forms::TextBox^ textBoxStockAfficher;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBoxCritSelect;
	private: System::Windows::Forms::TextBox^ textBoxIDCritSelectModif;

	private: System::Windows::Forms::Label^ labelIDModifier;
	private: System::Windows::Forms::Label^ labelDateModifier;
	private: System::Windows::Forms::Label^ labelNomModifier;
	private: System::Windows::Forms::TextBox^ textBoxNomProduitCritSelectModif;

	private: System::Windows::Forms::Label^ labelPrenomModifier;
	private: System::Windows::Forms::TextBox^ textBoxPrixCritSelectModif;

	private: System::Windows::Forms::TextBox^ textBoxReapproCritSelectModif;

	private: System::Windows::Forms::Label^ labelSuperieurModifier;
	private: System::Windows::Forms::TextBox^ textBoxStockCritSelectModif;

	private: System::Windows::Forms::Label^ labelAdresseModifier;
	private: System::Windows::Forms::GroupBox^ groupBoxCritères;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxPrixNewModif;

	private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBoxReapproNewModif;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ textBoxStockNewModif;

	private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBoxNomProduitNewModif;

	private: System::Windows::Forms::Button^ buttonModifier;
private: System::Windows::Forms::TextBox^ textBoxTVACritSelectModif;
private: System::Windows::Forms::TextBox^ textBoxTVANewModif;
private: System::Windows::Forms::GroupBox^ groupBox3;
private: System::Windows::Forms::TextBox^ textBoxTVASupprimer;

private: System::Windows::Forms::Label^ labelDateSupprimer;
private: System::Windows::Forms::Button^ buttonSupprimer;
private: System::Windows::Forms::TextBox^ textBoxReapprovisionnementSupprimer;

private: System::Windows::Forms::Label^ labelAdresseSupprimer;
private: System::Windows::Forms::TextBox^ textBoxPrixSupprimer;

private: System::Windows::Forms::Label^ labelSuperieurSupprimer;
private: System::Windows::Forms::TextBox^ textBoxStockSupprimer;

private: System::Windows::Forms::Label^ labelPrenomSupprimer;
private: System::Windows::Forms::TextBox^ textBoxNomProduitSupprimer;


private: System::Windows::Forms::Label^ labelNomSupprimer;
private: System::Windows::Forms::TextBox^ textBoxIDSupprimer;
private: System::Windows::Forms::Label^ labelIDSupprimer;






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
			this->labelPrixAjout = (gcnew System::Windows::Forms::Label());
			this->textBoxPrixAjout = (gcnew System::Windows::Forms::TextBox());
			this->labelTVAAjout = (gcnew System::Windows::Forms::Label());
			this->textBoxTVAAjout = (gcnew System::Windows::Forms::TextBox());
			this->buttonAjouter = (gcnew System::Windows::Forms::Button());
			this->labelReapproAjoout = (gcnew System::Windows::Forms::Label());
			this->textBoxReapproAjout = (gcnew System::Windows::Forms::TextBox());
			this->labelStockAjout = (gcnew System::Windows::Forms::Label());
			this->textBoxStockAjout = (gcnew System::Windows::Forms::TextBox());
			this->labelNomProduitAjout = (gcnew System::Windows::Forms::Label());
			this->textBoxNomProduitAjout = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->labelReapprovisionnementAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxReapprovisionnementAfficher = (gcnew System::Windows::Forms::TextBox());
			this->labelStockAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxStockAfficher = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTVAAfficher = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIDAfficher = (gcnew System::Windows::Forms::TextBox());
			this->labelIDAfficher = (gcnew System::Windows::Forms::Label());
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->buttonAfficher = (gcnew System::Windows::Forms::Button());
			this->labelTVAAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxPrixAfficher = (gcnew System::Windows::Forms::TextBox());
			this->labelPrixAfficher = (gcnew System::Windows::Forms::Label());
			this->labelNomProduitAfficher = (gcnew System::Windows::Forms::Label());
			this->textBoxNomProduitAfficher = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxCritSelect = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxIDCritSelectModif = (gcnew System::Windows::Forms::TextBox());
			this->labelIDModifier = (gcnew System::Windows::Forms::Label());
			this->labelDateModifier = (gcnew System::Windows::Forms::Label());
			this->labelNomModifier = (gcnew System::Windows::Forms::Label());
			this->textBoxNomProduitCritSelectModif = (gcnew System::Windows::Forms::TextBox());
			this->labelPrenomModifier = (gcnew System::Windows::Forms::Label());
			this->textBoxPrixCritSelectModif = (gcnew System::Windows::Forms::TextBox());
			this->textBoxReapproCritSelectModif = (gcnew System::Windows::Forms::TextBox());
			this->labelSuperieurModifier = (gcnew System::Windows::Forms::Label());
			this->textBoxStockCritSelectModif = (gcnew System::Windows::Forms::TextBox());
			this->labelAdresseModifier = (gcnew System::Windows::Forms::Label());
			this->groupBoxCritères = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrixNewModif = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxReapproNewModif = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxStockNewModif = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxNomProduitNewModif = (gcnew System::Windows::Forms::TextBox());
			this->buttonModifier = (gcnew System::Windows::Forms::Button());
			this->textBoxTVACritSelectModif = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTVANewModif = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->labelDateSupprimer = (gcnew System::Windows::Forms::Label());
			this->buttonSupprimer = (gcnew System::Windows::Forms::Button());
			this->textBoxReapprovisionnementSupprimer = (gcnew System::Windows::Forms::TextBox());
			this->labelAdresseSupprimer = (gcnew System::Windows::Forms::Label());
			this->textBoxPrixSupprimer = (gcnew System::Windows::Forms::TextBox());
			this->labelSuperieurSupprimer = (gcnew System::Windows::Forms::Label());
			this->textBoxStockSupprimer = (gcnew System::Windows::Forms::TextBox());
			this->labelPrenomSupprimer = (gcnew System::Windows::Forms::Label());
			this->textBoxNomProduitSupprimer = (gcnew System::Windows::Forms::TextBox());
			this->labelNomSupprimer = (gcnew System::Windows::Forms::Label());
			this->textBoxIDSupprimer = (gcnew System::Windows::Forms::TextBox());
			this->labelIDSupprimer = (gcnew System::Windows::Forms::Label());
			this->textBoxTVASupprimer = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBoxCritSelect->SuspendLayout();
			this->groupBoxCritères->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Controls->Add(this->labelPrixAjout);
			this->groupBox1->Controls->Add(this->textBoxPrixAjout);
			this->groupBox1->Controls->Add(this->labelTVAAjout);
			this->groupBox1->Controls->Add(this->textBoxTVAAjout);
			this->groupBox1->Controls->Add(this->buttonAjouter);
			this->groupBox1->Controls->Add(this->labelReapproAjoout);
			this->groupBox1->Controls->Add(this->textBoxReapproAjout);
			this->groupBox1->Controls->Add(this->labelStockAjout);
			this->groupBox1->Controls->Add(this->textBoxStockAjout);
			this->groupBox1->Controls->Add(this->labelNomProduitAjout);
			this->groupBox1->Controls->Add(this->textBoxNomProduitAjout);
			this->groupBox1->Location = System::Drawing::Point(23, 24);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(312, 376);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ajout membre d\'un produit";
			// 
			// labelPrixAjout
			// 
			this->labelPrixAjout->AutoSize = true;
			this->labelPrixAjout->Location = System::Drawing::Point(8, 240);
			this->labelPrixAjout->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPrixAjout->Name = L"labelPrixAjout";
			this->labelPrixAjout->Size = System::Drawing::Size(51, 16);
			this->labelPrixAjout->TabIndex = 12;
			this->labelPrixAjout->Text = L"Prix HT";
			// 
			// textBoxPrixAjout
			// 
			this->textBoxPrixAjout->Location = System::Drawing::Point(11, 260);
			this->textBoxPrixAjout->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPrixAjout->Name = L"textBoxPrixAjout";
			this->textBoxPrixAjout->Size = System::Drawing::Size(105, 22);
			this->textBoxPrixAjout->TabIndex = 11;
			// 
			// labelTVAAjout
			// 
			this->labelTVAAjout->AutoSize = true;
			this->labelTVAAjout->Location = System::Drawing::Point(155, 240);
			this->labelTVAAjout->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelTVAAjout->Name = L"labelTVAAjout";
			this->labelTVAAjout->Size = System::Drawing::Size(34, 16);
			this->labelTVAAjout->TabIndex = 10;
			this->labelTVAAjout->Text = L"TVA";
			// 
			// textBoxTVAAjout
			// 
			this->textBoxTVAAjout->Location = System::Drawing::Point(158, 260);
			this->textBoxTVAAjout->Margin = System::Windows::Forms::Padding(4);
			this->textBoxTVAAjout->Name = L"textBoxTVAAjout";
			this->textBoxTVAAjout->Size = System::Drawing::Size(109, 22);
			this->textBoxTVAAjout->TabIndex = 9;
			// 
			// buttonAjouter
			// 
			this->buttonAjouter->Location = System::Drawing::Point(83, 309);
			this->buttonAjouter->Margin = System::Windows::Forms::Padding(4);
			this->buttonAjouter->Name = L"buttonAjouter";
			this->buttonAjouter->Size = System::Drawing::Size(106, 43);
			this->buttonAjouter->TabIndex = 8;
			this->buttonAjouter->Text = L"Ajouter au catalogue";
			this->buttonAjouter->UseVisualStyleBackColor = true;
			this->buttonAjouter->Click += gcnew System::EventHandler(this, &GestionCatalogue::buttonAjouter_Click);
			// 
			// labelReapproAjoout
			// 
			this->labelReapproAjoout->AutoSize = true;
			this->labelReapproAjoout->Location = System::Drawing::Point(46, 174);
			this->labelReapproAjoout->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelReapproAjoout->Name = L"labelReapproAjoout";
			this->labelReapproAjoout->Size = System::Drawing::Size(186, 16);
			this->labelReapproAjoout->TabIndex = 5;
			this->labelReapproAjoout->Text = L"Seuil de réapprovisionnement";
			// 
			// textBoxReapproAjout
			// 
			this->textBoxReapproAjout->Location = System::Drawing::Point(49, 194);
			this->textBoxReapproAjout->Margin = System::Windows::Forms::Padding(4);
			this->textBoxReapproAjout->Name = L"textBoxReapproAjout";
			this->textBoxReapproAjout->Size = System::Drawing::Size(184, 22);
			this->textBoxReapproAjout->TabIndex = 4;
			// 
			// labelStockAjout
			// 
			this->labelStockAjout->AutoSize = true;
			this->labelStockAjout->Location = System::Drawing::Point(88, 111);
			this->labelStockAjout->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelStockAjout->Name = L"labelStockAjout";
			this->labelStockAjout->Size = System::Drawing::Size(80, 16);
			this->labelStockAjout->TabIndex = 3;
			this->labelStockAjout->Text = L"Stock actuel";
			// 
			// textBoxStockAjout
			// 
			this->textBoxStockAjout->Location = System::Drawing::Point(68, 131);
			this->textBoxStockAjout->Margin = System::Windows::Forms::Padding(4);
			this->textBoxStockAjout->Name = L"textBoxStockAjout";
			this->textBoxStockAjout->Size = System::Drawing::Size(132, 22);
			this->textBoxStockAjout->TabIndex = 2;
			// 
			// labelNomProduitAjout
			// 
			this->labelNomProduitAjout->AutoSize = true;
			this->labelNomProduitAjout->Location = System::Drawing::Point(88, 43);
			this->labelNomProduitAjout->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelNomProduitAjout->Name = L"labelNomProduitAjout";
			this->labelNomProduitAjout->Size = System::Drawing::Size(80, 16);
			this->labelNomProduitAjout->TabIndex = 1;
			this->labelNomProduitAjout->Text = L"Nom produit";
			// 
			// textBoxNomProduitAjout
			// 
			this->textBoxNomProduitAjout->Location = System::Drawing::Point(68, 63);
			this->textBoxNomProduitAjout->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNomProduitAjout->Name = L"textBoxNomProduitAjout";
			this->textBoxNomProduitAjout->Size = System::Drawing::Size(132, 22);
			this->textBoxNomProduitAjout->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->labelReapprovisionnementAfficher);
			this->groupBox2->Controls->Add(this->textBoxReapprovisionnementAfficher);
			this->groupBox2->Controls->Add(this->labelStockAfficher);
			this->groupBox2->Controls->Add(this->textBoxStockAfficher);
			this->groupBox2->Controls->Add(this->textBoxTVAAfficher);
			this->groupBox2->Controls->Add(this->textBoxIDAfficher);
			this->groupBox2->Controls->Add(this->labelIDAfficher);
			this->groupBox2->Controls->Add(this->dgv_enr);
			this->groupBox2->Controls->Add(this->buttonAfficher);
			this->groupBox2->Controls->Add(this->labelTVAAfficher);
			this->groupBox2->Controls->Add(this->textBoxPrixAfficher);
			this->groupBox2->Controls->Add(this->labelPrixAfficher);
			this->groupBox2->Controls->Add(this->labelNomProduitAfficher);
			this->groupBox2->Controls->Add(this->textBoxNomProduitAfficher);
			this->groupBox2->Location = System::Drawing::Point(66, 580);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(975, 479);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Afficher catalogue de produits";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(9, 136);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(232, 20);
			this->checkBox1->TabIndex = 19;
			this->checkBox1->Text = L"Réapprovisionnement nécessaire";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// labelReapprovisionnementAfficher
			// 
			this->labelReapprovisionnementAfficher->AutoSize = true;
			this->labelReapprovisionnementAfficher->Location = System::Drawing::Point(516, 53);
			this->labelReapprovisionnementAfficher->Name = L"labelReapprovisionnementAfficher";
			this->labelReapprovisionnementAfficher->Size = System::Drawing::Size(140, 16);
			this->labelReapprovisionnementAfficher->TabIndex = 18;
			this->labelReapprovisionnementAfficher->Text = L"Réapprovisionnement";
			// 
			// textBoxReapprovisionnementAfficher
			// 
			this->textBoxReapprovisionnementAfficher->Location = System::Drawing::Point(519, 71);
			this->textBoxReapprovisionnementAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxReapprovisionnementAfficher->Name = L"textBoxReapprovisionnementAfficher";
			this->textBoxReapprovisionnementAfficher->Size = System::Drawing::Size(102, 22);
			this->textBoxReapprovisionnementAfficher->TabIndex = 17;
			// 
			// labelStockAfficher
			// 
			this->labelStockAfficher->AutoSize = true;
			this->labelStockAfficher->Location = System::Drawing::Point(366, 53);
			this->labelStockAfficher->Name = L"labelStockAfficher";
			this->labelStockAfficher->Size = System::Drawing::Size(41, 16);
			this->labelStockAfficher->TabIndex = 16;
			this->labelStockAfficher->Text = L"Stock";
			// 
			// textBoxStockAfficher
			// 
			this->textBoxStockAfficher->Location = System::Drawing::Point(369, 71);
			this->textBoxStockAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxStockAfficher->Name = L"textBoxStockAfficher";
			this->textBoxStockAfficher->Size = System::Drawing::Size(102, 22);
			this->textBoxStockAfficher->TabIndex = 15;
			// 
			// textBoxTVAAfficher
			// 
			this->textBoxTVAAfficher->Location = System::Drawing::Point(865, 71);
			this->textBoxTVAAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTVAAfficher->Name = L"textBoxTVAAfficher";
			this->textBoxTVAAfficher->Size = System::Drawing::Size(74, 22);
			this->textBoxTVAAfficher->TabIndex = 14;
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
			this->dgv_enr->Location = System::Drawing::Point(57, 184);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(833, 246);
			this->dgv_enr->TabIndex = 0;
			// 
			// buttonAfficher
			// 
			this->buttonAfficher->Location = System::Drawing::Point(369, 127);
			this->buttonAfficher->Margin = System::Windows::Forms::Padding(4);
			this->buttonAfficher->Name = L"buttonAfficher";
			this->buttonAfficher->Size = System::Drawing::Size(191, 37);
			this->buttonAfficher->TabIndex = 11;
			this->buttonAfficher->Text = L"Afficher";
			this->buttonAfficher->UseVisualStyleBackColor = true;
			this->buttonAfficher->Click += gcnew System::EventHandler(this, &GestionCatalogue::buttonAfficher_Click);
			// 
			// labelTVAAfficher
			// 
			this->labelTVAAfficher->AutoSize = true;
			this->labelTVAAfficher->Location = System::Drawing::Point(862, 53);
			this->labelTVAAfficher->Name = L"labelTVAAfficher";
			this->labelTVAAfficher->Size = System::Drawing::Size(34, 16);
			this->labelTVAAfficher->TabIndex = 8;
			this->labelTVAAfficher->Text = L"TVA";
			// 
			// textBoxPrixAfficher
			// 
			this->textBoxPrixAfficher->Location = System::Drawing::Point(726, 71);
			this->textBoxPrixAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrixAfficher->Name = L"textBoxPrixAfficher";
			this->textBoxPrixAfficher->Size = System::Drawing::Size(74, 22);
			this->textBoxPrixAfficher->TabIndex = 5;
			// 
			// labelPrixAfficher
			// 
			this->labelPrixAfficher->AutoSize = true;
			this->labelPrixAfficher->Location = System::Drawing::Point(728, 53);
			this->labelPrixAfficher->Name = L"labelPrixAfficher";
			this->labelPrixAfficher->Size = System::Drawing::Size(29, 16);
			this->labelPrixAfficher->TabIndex = 4;
			this->labelPrixAfficher->Text = L"Prix";
			// 
			// labelNomProduitAfficher
			// 
			this->labelNomProduitAfficher->AutoSize = true;
			this->labelNomProduitAfficher->Location = System::Drawing::Point(176, 53);
			this->labelNomProduitAfficher->Name = L"labelNomProduitAfficher";
			this->labelNomProduitAfficher->Size = System::Drawing::Size(36, 16);
			this->labelNomProduitAfficher->TabIndex = 1;
			this->labelNomProduitAfficher->Text = L"Nom";
			// 
			// textBoxNomProduitAfficher
			// 
			this->textBoxNomProduitAfficher->Location = System::Drawing::Point(179, 71);
			this->textBoxNomProduitAfficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomProduitAfficher->Name = L"textBoxNomProduitAfficher";
			this->textBoxNomProduitAfficher->Size = System::Drawing::Size(133, 22);
			this->textBoxNomProduitAfficher->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox4->Controls->Add(this->groupBoxCritSelect);
			this->groupBox4->Controls->Add(this->groupBoxCritères);
			this->groupBox4->Controls->Add(this->buttonModifier);
			this->groupBox4->Location = System::Drawing::Point(403, 32);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(800, 493);
			this->groupBox4->TabIndex = 16;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Modifier produit";
			// 
			// groupBoxCritSelect
			// 
			this->groupBoxCritSelect->BackColor = System::Drawing::SystemColors::MenuBar;
			this->groupBoxCritSelect->Controls->Add(this->textBoxTVACritSelectModif);
			this->groupBoxCritSelect->Controls->Add(this->textBoxIDCritSelectModif);
			this->groupBoxCritSelect->Controls->Add(this->labelIDModifier);
			this->groupBoxCritSelect->Controls->Add(this->labelDateModifier);
			this->groupBoxCritSelect->Controls->Add(this->labelNomModifier);
			this->groupBoxCritSelect->Controls->Add(this->textBoxNomProduitCritSelectModif);
			this->groupBoxCritSelect->Controls->Add(this->labelPrenomModifier);
			this->groupBoxCritSelect->Controls->Add(this->textBoxPrixCritSelectModif);
			this->groupBoxCritSelect->Controls->Add(this->textBoxReapproCritSelectModif);
			this->groupBoxCritSelect->Controls->Add(this->labelSuperieurModifier);
			this->groupBoxCritSelect->Controls->Add(this->textBoxStockCritSelectModif);
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
			// labelIDModifier
			// 
			this->labelIDModifier->AutoSize = true;
			this->labelIDModifier->Location = System::Drawing::Point(4, 32);
			this->labelIDModifier->Name = L"labelIDModifier";
			this->labelIDModifier->Size = System::Drawing::Size(114, 16);
			this->labelIDModifier->TabIndex = 14;
			this->labelIDModifier->Text = L"Référence produit";
			// 
			// labelDateModifier
			// 
			this->labelDateModifier->AutoSize = true;
			this->labelDateModifier->Location = System::Drawing::Point(6, 299);
			this->labelDateModifier->Name = L"labelDateModifier";
			this->labelDateModifier->Size = System::Drawing::Size(34, 16);
			this->labelDateModifier->TabIndex = 14;
			this->labelDateModifier->Text = L"TVA";
			// 
			// labelNomModifier
			// 
			this->labelNomModifier->AutoSize = true;
			this->labelNomModifier->Location = System::Drawing::Point(6, 82);
			this->labelNomModifier->Name = L"labelNomModifier";
			this->labelNomModifier->Size = System::Drawing::Size(49, 16);
			this->labelNomModifier->TabIndex = 14;
			this->labelNomModifier->Text = L"Produit";
			// 
			// textBoxNomProduitCritSelectModif
			// 
			this->textBoxNomProduitCritSelectModif->Location = System::Drawing::Point(7, 100);
			this->textBoxNomProduitCritSelectModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomProduitCritSelectModif->Name = L"textBoxNomProduitCritSelectModif";
			this->textBoxNomProduitCritSelectModif->Size = System::Drawing::Size(133, 22);
			this->textBoxNomProduitCritSelectModif->TabIndex = 14;
			// 
			// labelPrenomModifier
			// 
			this->labelPrenomModifier->AutoSize = true;
			this->labelPrenomModifier->Location = System::Drawing::Point(6, 139);
			this->labelPrenomModifier->Name = L"labelPrenomModifier";
			this->labelPrenomModifier->Size = System::Drawing::Size(41, 16);
			this->labelPrenomModifier->TabIndex = 14;
			this->labelPrenomModifier->Text = L"Stock";
			// 
			// textBoxPrixCritSelectModif
			// 
			this->textBoxPrixCritSelectModif->Location = System::Drawing::Point(7, 266);
			this->textBoxPrixCritSelectModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrixCritSelectModif->Name = L"textBoxPrixCritSelectModif";
			this->textBoxPrixCritSelectModif->Size = System::Drawing::Size(207, 22);
			this->textBoxPrixCritSelectModif->TabIndex = 14;
			// 
			// textBoxReapproCritSelectModif
			// 
			this->textBoxReapproCritSelectModif->Location = System::Drawing::Point(7, 212);
			this->textBoxReapproCritSelectModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxReapproCritSelectModif->Name = L"textBoxReapproCritSelectModif";
			this->textBoxReapproCritSelectModif->Size = System::Drawing::Size(252, 22);
			this->textBoxReapproCritSelectModif->TabIndex = 14;
			this->textBoxReapproCritSelectModif->Visible = false;
			// 
			// labelSuperieurModifier
			// 
			this->labelSuperieurModifier->AutoSize = true;
			this->labelSuperieurModifier->Location = System::Drawing::Point(6, 248);
			this->labelSuperieurModifier->Name = L"labelSuperieurModifier";
			this->labelSuperieurModifier->Size = System::Drawing::Size(29, 16);
			this->labelSuperieurModifier->TabIndex = 14;
			this->labelSuperieurModifier->Text = L"Prix";
			// 
			// textBoxStockCritSelectModif
			// 
			this->textBoxStockCritSelectModif->Location = System::Drawing::Point(9, 161);
			this->textBoxStockCritSelectModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxStockCritSelectModif->Name = L"textBoxStockCritSelectModif";
			this->textBoxStockCritSelectModif->Size = System::Drawing::Size(132, 22);
			this->textBoxStockCritSelectModif->TabIndex = 14;
			// 
			// labelAdresseModifier
			// 
			this->labelAdresseModifier->AutoSize = true;
			this->labelAdresseModifier->Location = System::Drawing::Point(8, 194);
			this->labelAdresseModifier->Name = L"labelAdresseModifier";
			this->labelAdresseModifier->Size = System::Drawing::Size(140, 16);
			this->labelAdresseModifier->TabIndex = 14;
			this->labelAdresseModifier->Text = L"Réapprovisionnement";
			// 
			// groupBoxCritères
			// 
			this->groupBoxCritères->BackColor = System::Drawing::SystemColors::MenuBar;
			this->groupBoxCritères->Controls->Add(this->textBoxTVANewModif);
			this->groupBoxCritères->Controls->Add(this->label6);
			this->groupBoxCritères->Controls->Add(this->textBoxPrixNewModif);
			this->groupBoxCritères->Controls->Add(this->label5);
			this->groupBoxCritères->Controls->Add(this->textBoxReapproNewModif);
			this->groupBoxCritères->Controls->Add(this->label4);
			this->groupBoxCritères->Controls->Add(this->label3);
			this->groupBoxCritères->Controls->Add(this->textBoxStockNewModif);
			this->groupBoxCritères->Controls->Add(this->label2);
			this->groupBoxCritères->Controls->Add(this->textBoxNomProduitNewModif);
			this->groupBoxCritères->Location = System::Drawing::Point(425, 42);
			this->groupBoxCritères->Name = L"groupBoxCritères";
			this->groupBoxCritères->Size = System::Drawing::Size(331, 363);
			this->groupBoxCritères->TabIndex = 15;
			this->groupBoxCritères->TabStop = false;
			this->groupBoxCritères->Text = L"Nouvelles valeures";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 299);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 16);
			this->label6->TabIndex = 15;
			this->label6->Text = L"TVA";
			// 
			// textBoxPrixNewModif
			// 
			this->textBoxPrixNewModif->Location = System::Drawing::Point(6, 251);
			this->textBoxPrixNewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrixNewModif->Name = L"textBoxPrixNewModif";
			this->textBoxPrixNewModif->Size = System::Drawing::Size(207, 22);
			this->textBoxPrixNewModif->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 233);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Prix";
			// 
			// textBoxReapproNewModif
			// 
			this->textBoxReapproNewModif->Location = System::Drawing::Point(6, 185);
			this->textBoxReapproNewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxReapproNewModif->Name = L"textBoxReapproNewModif";
			this->textBoxReapproNewModif->Size = System::Drawing::Size(252, 22);
			this->textBoxReapproNewModif->TabIndex = 15;
			this->textBoxReapproNewModif->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(186, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Seuil de réapprovisionnement";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 16);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Stock";
			// 
			// textBoxStockNewModif
			// 
			this->textBoxStockNewModif->Location = System::Drawing::Point(9, 121);
			this->textBoxStockNewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxStockNewModif->Name = L"textBoxStockNewModif";
			this->textBoxStockNewModif->Size = System::Drawing::Size(132, 22);
			this->textBoxStockNewModif->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nom du produit";
			// 
			// textBoxNomProduitNewModif
			// 
			this->textBoxNomProduitNewModif->Location = System::Drawing::Point(9, 50);
			this->textBoxNomProduitNewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomProduitNewModif->Name = L"textBoxNomProduitNewModif";
			this->textBoxNomProduitNewModif->Size = System::Drawing::Size(133, 22);
			this->textBoxNomProduitNewModif->TabIndex = 15;
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
			this->buttonModifier->Click += gcnew System::EventHandler(this, &GestionCatalogue::buttonModifier_Click);
			// 
			// textBoxTVACritSelectModif
			// 
			this->textBoxTVACritSelectModif->Location = System::Drawing::Point(6, 317);
			this->textBoxTVACritSelectModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTVACritSelectModif->Name = L"textBoxTVACritSelectModif";
			this->textBoxTVACritSelectModif->Size = System::Drawing::Size(207, 22);
			this->textBoxTVACritSelectModif->TabIndex = 15;
			// 
			// textBoxTVANewModif
			// 
			this->textBoxTVANewModif->Location = System::Drawing::Point(6, 317);
			this->textBoxTVANewModif->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTVANewModif->Name = L"textBoxTVANewModif";
			this->textBoxTVANewModif->Size = System::Drawing::Size(207, 22);
			this->textBoxTVANewModif->TabIndex = 16;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox3->Controls->Add(this->textBoxTVASupprimer);
			this->groupBox3->Controls->Add(this->labelDateSupprimer);
			this->groupBox3->Controls->Add(this->buttonSupprimer);
			this->groupBox3->Controls->Add(this->textBoxReapprovisionnementSupprimer);
			this->groupBox3->Controls->Add(this->labelAdresseSupprimer);
			this->groupBox3->Controls->Add(this->textBoxPrixSupprimer);
			this->groupBox3->Controls->Add(this->labelSuperieurSupprimer);
			this->groupBox3->Controls->Add(this->textBoxStockSupprimer);
			this->groupBox3->Controls->Add(this->labelPrenomSupprimer);
			this->groupBox3->Controls->Add(this->textBoxNomProduitSupprimer);
			this->groupBox3->Controls->Add(this->labelNomSupprimer);
			this->groupBox3->Controls->Add(this->textBoxIDSupprimer);
			this->groupBox3->Controls->Add(this->labelIDSupprimer);
			this->groupBox3->Location = System::Drawing::Point(1376, 32);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(311, 447);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Supprimer produit(s) du catalogue";
			// 
			// labelDateSupprimer
			// 
			this->labelDateSupprimer->AutoSize = true;
			this->labelDateSupprimer->Location = System::Drawing::Point(6, 299);
			this->labelDateSupprimer->Name = L"labelDateSupprimer";
			this->labelDateSupprimer->Size = System::Drawing::Size(34, 16);
			this->labelDateSupprimer->TabIndex = 14;
			this->labelDateSupprimer->Text = L"TVA";
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
			this->buttonSupprimer->Click += gcnew System::EventHandler(this, &GestionCatalogue::buttonSupprimer_Click);
			// 
			// textBoxReapprovisionnementSupprimer
			// 
			this->textBoxReapprovisionnementSupprimer->Location = System::Drawing::Point(6, 203);
			this->textBoxReapprovisionnementSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxReapprovisionnementSupprimer->Name = L"textBoxReapprovisionnementSupprimer";
			this->textBoxReapprovisionnementSupprimer->Size = System::Drawing::Size(252, 22);
			this->textBoxReapprovisionnementSupprimer->TabIndex = 14;
			this->textBoxReapprovisionnementSupprimer->Visible = false;
			// 
			// labelAdresseSupprimer
			// 
			this->labelAdresseSupprimer->AutoSize = true;
			this->labelAdresseSupprimer->Location = System::Drawing::Point(6, 181);
			this->labelAdresseSupprimer->Name = L"labelAdresseSupprimer";
			this->labelAdresseSupprimer->Size = System::Drawing::Size(186, 16);
			this->labelAdresseSupprimer->TabIndex = 14;
			this->labelAdresseSupprimer->Text = L"Seuil de réapprovisionnement";
			// 
			// textBoxPrixSupprimer
			// 
			this->textBoxPrixSupprimer->Location = System::Drawing::Point(6, 258);
			this->textBoxPrixSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxPrixSupprimer->Name = L"textBoxPrixSupprimer";
			this->textBoxPrixSupprimer->Size = System::Drawing::Size(207, 22);
			this->textBoxPrixSupprimer->TabIndex = 14;
			// 
			// labelSuperieurSupprimer
			// 
			this->labelSuperieurSupprimer->AutoSize = true;
			this->labelSuperieurSupprimer->Location = System::Drawing::Point(6, 240);
			this->labelSuperieurSupprimer->Name = L"labelSuperieurSupprimer";
			this->labelSuperieurSupprimer->Size = System::Drawing::Size(29, 16);
			this->labelSuperieurSupprimer->TabIndex = 14;
			this->labelSuperieurSupprimer->Text = L"Prix";
			// 
			// textBoxStockSupprimer
			// 
			this->textBoxStockSupprimer->Location = System::Drawing::Point(6, 142);
			this->textBoxStockSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxStockSupprimer->Name = L"textBoxStockSupprimer";
			this->textBoxStockSupprimer->Size = System::Drawing::Size(132, 22);
			this->textBoxStockSupprimer->TabIndex = 14;
			// 
			// labelPrenomSupprimer
			// 
			this->labelPrenomSupprimer->AutoSize = true;
			this->labelPrenomSupprimer->Location = System::Drawing::Point(6, 122);
			this->labelPrenomSupprimer->Name = L"labelPrenomSupprimer";
			this->labelPrenomSupprimer->Size = System::Drawing::Size(41, 16);
			this->labelPrenomSupprimer->TabIndex = 14;
			this->labelPrenomSupprimer->Text = L"Stock";
			// 
			// textBoxNomProduitSupprimer
			// 
			this->textBoxNomProduitSupprimer->Location = System::Drawing::Point(6, 92);
			this->textBoxNomProduitSupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxNomProduitSupprimer->Name = L"textBoxNomProduitSupprimer";
			this->textBoxNomProduitSupprimer->Size = System::Drawing::Size(133, 22);
			this->textBoxNomProduitSupprimer->TabIndex = 14;
			// 
			// labelNomSupprimer
			// 
			this->labelNomSupprimer->AutoSize = true;
			this->labelNomSupprimer->Location = System::Drawing::Point(6, 73);
			this->labelNomSupprimer->Name = L"labelNomSupprimer";
			this->labelNomSupprimer->Size = System::Drawing::Size(49, 16);
			this->labelNomSupprimer->TabIndex = 14;
			this->labelNomSupprimer->Text = L"Produit";
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
			this->labelIDSupprimer->Size = System::Drawing::Size(64, 16);
			this->labelIDSupprimer->TabIndex = 14;
			this->labelIDSupprimer->Text = L"référence";
			// 
			// textBoxTVASupprimer
			// 
			this->textBoxTVASupprimer->Location = System::Drawing::Point(9, 322);
			this->textBoxTVASupprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxTVASupprimer->Name = L"textBoxTVASupprimer";
			this->textBoxTVASupprimer->Size = System::Drawing::Size(207, 22);
			this->textBoxTVASupprimer->TabIndex = 17;
			// 
			// GestionCatalogue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"GestionCatalogue";
			this->Text = L"GestionCatalogue";
			this->Load += gcnew System::EventHandler(this, &GestionCatalogue::GestionCatalogue_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBoxCritSelect->ResumeLayout(false);
			this->groupBoxCritSelect->PerformLayout();
			this->groupBoxCritères->ResumeLayout(false);
			this->groupBoxCritères->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void GestionCatalogue_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oCat = gcnew NS_Comp_Catalogue::Catalogue();
	}

	private: System::Void buttonAjouter_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBoxNomProduitAjout->Text->Length == 0 || this->textBoxStockAjout->Text->Length == 0 || this->textBoxReapproAjout->Text->Length == 0 || this->textBoxPrixAjout->Text->Length == 0 || this->textBoxTVAAjout->Text->Length == 0) {
			MessageBox::Show("Une des données est vide, merci d'entrer toutes les données.");
		}
		else {
			this->oCat->creerProduit(this->textBoxNomProduitAjout->Text, this->textBoxStockAjout->Text, this->textBoxReapproAjout->Text, this->textBoxPrixAjout->Text, this->textBoxTVAAjout->Text);
			MessageBox::Show("Le produit est à présent disponible dans le catalogue.");
		}
	}


		   //afficher



	private: System::Void buttonAfficher_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBoxIDAfficher->Text->Contains(",") || this->textBoxStockAfficher->Text->Contains(",") || this->textBoxReapprovisionnementAfficher->Text->Contains(",") || this->textBoxPrixAfficher->Text->Contains(",") || this->textBoxTVAAfficher->Text->Contains(",")) {
			MessageBox::Show("Vous ne pouvez pas enter de virgule. Vous devez utiliser des points pour les décimales");
		}
		else {
			bool bouton = checkBox1->Checked;
			this->dgv_enr->Refresh();
			this->oDs = this->oCat->afficherProduits(bouton, this->textBoxIDAfficher->Text, this->textBoxNomProduitAfficher->Text, this->textBoxStockAfficher->Text, this->textBoxReapprovisionnementAfficher->Text, this->textBoxPrixAfficher->Text, this->textBoxTVAAfficher->Text, "ResultatCatalogue");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "ResultatCatalogue";
		}
	}

	private: System::Void buttonModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBoxNomProduitNewModif->Text->Length == 0 && this->textBoxStockNewModif->Text->Length == 0 && this->textBoxReapproNewModif->Text->Length == 0 && this->textBoxPrixNewModif->Text->Length == 0 && this->textBoxTVANewModif->Text->Length == 0) {
			MessageBox::Show("Aucune nouvelle valeur n'a été rentrée.\n Veuillez entrer au moins une nouvelle valeur pour effectuer l'opération.");
		}
		else {
			if (this->textBoxIDCritSelectModif->Text->Contains(",") || this->textBoxStockCritSelectModif->Text->Contains(",") || this->textBoxIDCritSelectModif->Text->Contains(",") || this->textBoxReapproCritSelectModif->Text->Contains(",") || this->textBoxPrixCritSelectModif->Text->Contains(",") || this->textBoxTVACritSelectModif->Text->Contains(",") || this->textBoxStockNewModif->Text->Contains(",") || this->textBoxReapproNewModif->Text->Contains(",") || this->textBoxPrixNewModif->Text->Contains(",") || this->textBoxTVANewModif->Text->Contains(",")) {
				MessageBox::Show("Vous ne pouvez pas enter de virgule. Vous devez utiliser des points pour les décimales");
			}
			else {
				this->oCat->modifierProduit(this->textBoxIDCritSelectModif->Text, this->textBoxNomProduitCritSelectModif->Text, this->textBoxStockCritSelectModif->Text, this->textBoxReapproCritSelectModif->Text, this->textBoxPrixCritSelectModif->Text, this->textBoxTVACritSelectModif->Text, this->textBoxNomProduitNewModif->Text, this->textBoxStockNewModif->Text, this->textBoxReapproNewModif->Text, this->textBoxPrixNewModif->Text, this->textBoxTVANewModif->Text);
				MessageBox::Show("Informations relatives au personnel modifiées");
			}
		}
	}

	private: System::Void buttonSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBoxIDSupprimer->Text->Contains(",") || this->textBoxStockSupprimer->Text->Contains(",") || this->textBoxReapprovisionnementSupprimer->Text->Contains(",") || this->textBoxPrixSupprimer->Text->Contains(",") || this->textBoxTVASupprimer->Text->Contains(",")) {
			MessageBox::Show("Vous ne pouvez pas enter de virgule. Vous devez utiliser des points pour les décimales");
		}
		else {
			MessageBox::Show("Les données de tout produit correspondant à ses critères vont être supprimer : \n\t" + this->textBoxIDSupprimer->Text + "\n\t" + this->textBoxNomProduitSupprimer->Text + "\n\t" + this->textBoxStockSupprimer->Text + "\n\t" + this->textBoxReapprovisionnementSupprimer->Text + "\n\t" + this->textBoxPrixSupprimer->Text + "\n\t" + this->textBoxTVASupprimer->Text + "\n");
			this->oCat->supprimerProduit(this->textBoxIDSupprimer->Text, this->textBoxNomProduitSupprimer->Text, this->textBoxStockSupprimer->Text, this->textBoxReapprovisionnementSupprimer->Text, this->textBoxPrixSupprimer->Text, this->textBoxTVASupprimer->Text);
			MessageBox::Show("Le(s) produit(s) supprimer");
		}
	}

};
}
