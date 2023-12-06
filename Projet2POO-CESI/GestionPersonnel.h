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



	private: System::Windows::Forms::Label^ labelDAfficher;


	private: System::Windows::Forms::GroupBox^ groupBox3;









	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
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
			this->labelDAfficher = (gcnew System::Windows::Forms::Label());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
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
			this->labelSuperieur->Text = L"Sup�rieur";
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
			this->labelPersoPrenom->Text = L"Pr�nom";
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
			this->groupBox2->Controls->Add(this->labelDAfficher);
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
			// labelDAfficher
			// 
			this->labelDAfficher->AutoSize = true;
			this->labelDAfficher->Location = System::Drawing::Point(6, 53);
			this->labelDAfficher->Name = L"labelDAfficher";
			this->labelDAfficher->Size = System::Drawing::Size(20, 16);
			this->labelDAfficher->TabIndex = 12;
			this->labelDAfficher->Text = L"ID";
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
			this->labelSuperieurAfficher->Text = L"Sup�rieur";
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
			this->groupBox3->Location = System::Drawing::Point(1123, 15);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(548, 447);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Supprimer membre du personnel";
			// 
			// GestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1858, 546);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oPers = gcnew NS_Comp_Personnel::Personnel();
	}

	private: System::Void buttonEmbaucher_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->textBoxPersoNom->Text->Length == 0 || this->textBoxPersoPrenom->Text->Length == 0 || this->textBoxPersoAdresse->Text->Length == 0 || this->textBoxSuperieur->Text->Length == 0) {
			MessageBox::Show("Une des donn�es est vide, merci d'entrer toutes les donn�es.");
		}
		else {
			this->oPers->creerPersonnel(this->textBoxPersoNom->Text, this->textBoxPersoPrenom->Text, this->textBoxSuperieur->Text, this->textBoxPersoAdresse->Text, this->dateTimePickerDateEmbauche->Value);
		}
	}

private: System::Void buttonAfficher_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dgv_enr->Refresh();
	this->oDs = this->oPers->afficherPersonnel( this->textBoxNomAfficher->Text, this->textBoxPrenomAfficher->Text, this->textBoxSuperieurAfficher->Text, this->textBoxAdresseAfficher->Text, this->dateTimePickerDateAfficher->Value,"Rsl");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Rsl";
}


};
}
