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
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
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
			this->groupBox2->Location = System::Drawing::Point(34, 432);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(975, 479);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Afficher membre du personnel";
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
			// GestionCatalogue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
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
		bool bouton = checkBox1->Checked;
		this->dgv_enr->Refresh();
		this->oDs = this->oCat->afficherProduits(bouton, this->textBoxIDAfficher->Text, this->textBoxNomProduitAfficher->Text, this->textBoxStockAfficher->Text, this->textBoxReapprovisionnementAfficher->Text, this->textBoxPrixAfficher->Text, this->textBoxTVAAfficher->Text, "ResultatCatalogue");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "ResultatCatalogue";
	}
	};
}
