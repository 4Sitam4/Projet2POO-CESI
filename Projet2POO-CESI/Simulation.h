#pragma once
#include "Statistique.h"

namespace Projet2POOCESI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Simulation
	/// </summary>
	public ref class Simulation : public System::Windows::Forms::Form
	{
	public:
		Simulation(void)
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
		~Simulation()
		{
			if (components)
			{
				delete components;
			}
		}

	private: NS_Comp_Statistique::Statistique^ oStat;

	private: System::Windows::Forms::ComboBox^ comboBoxTVA;
	protected:

	private: System::Windows::Forms::Label^ labelTVA;
	protected:

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBoxDemarque;

	private: System::Windows::Forms::Label^ labelRemise;
	private: System::Windows::Forms::ComboBox^ comboBoxRemise;
	private: System::Windows::Forms::CheckBox^ checkBoxRemise;



	private: System::Windows::Forms::CheckBox^ checkBoxMarge;

	private: System::Windows::Forms::ComboBox^ comboBoxMarge;

	private: System::Windows::Forms::Label^ labelMarge;
	private: System::Windows::Forms::CheckBox^ checkBoxTVA;
	private: System::Windows::Forms::TextBox^ textBoxDemarque;




	private: System::Windows::Forms::TextBox^ textBoxRemise;
	private: System::Windows::Forms::TextBox^ textBoxMarge;
	private: System::Windows::Forms::TextBox^ textBoxTVA;
	private: System::Windows::Forms::CheckBox^ checkBoxDemarque;
	private: System::Windows::Forms::Button^ buttonValeur;
	private: System::Windows::Forms::Label^ labelResultat;
	private: System::Windows::Forms::Label^ labelRes;
	private: System::Windows::Forms::CheckBox^ checkBoxDemarqueNulle;
	private: System::Windows::Forms::CheckBox^ checkBoxRemiseNulle;
	private: System::Windows::Forms::CheckBox^ checkBoxMargeNulle;
	private: System::Windows::Forms::CheckBox^ checkBoxTVANulle;




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
			this->comboBoxTVA = (gcnew System::Windows::Forms::ComboBox());
			this->labelTVA = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxDemarqueNulle = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxRemiseNulle = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxMargeNulle = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxTVANulle = (gcnew System::Windows::Forms::CheckBox());
			this->labelRes = (gcnew System::Windows::Forms::Label());
			this->labelResultat = (gcnew System::Windows::Forms::Label());
			this->buttonValeur = (gcnew System::Windows::Forms::Button());
			this->textBoxDemarque = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRemise = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMarge = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTVA = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxDemarque = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBoxDemarque = (gcnew System::Windows::Forms::ComboBox());
			this->labelRemise = (gcnew System::Windows::Forms::Label());
			this->comboBoxRemise = (gcnew System::Windows::Forms::ComboBox());
			this->checkBoxRemise = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxMarge = (gcnew System::Windows::Forms::CheckBox());
			this->comboBoxMarge = (gcnew System::Windows::Forms::ComboBox());
			this->labelMarge = (gcnew System::Windows::Forms::Label());
			this->checkBoxTVA = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBoxTVA
			// 
			this->comboBoxTVA->FormattingEnabled = true;
			this->comboBoxTVA->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"TVA de 5%", L"TVA de 10", L"TVA de 20%" });
			this->comboBoxTVA->Location = System::Drawing::Point(27, 64);
			this->comboBoxTVA->Name = L"comboBoxTVA";
			this->comboBoxTVA->Size = System::Drawing::Size(129, 24);
			this->comboBoxTVA->TabIndex = 0;
			// 
			// labelTVA
			// 
			this->labelTVA->AutoSize = true;
			this->labelTVA->Location = System::Drawing::Point(24, 33);
			this->labelTVA->Name = L"labelTVA";
			this->labelTVA->Size = System::Drawing::Size(34, 16);
			this->labelTVA->TabIndex = 1;
			this->labelTVA->Text = L"TVA";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBoxDemarqueNulle);
			this->groupBox1->Controls->Add(this->checkBoxRemiseNulle);
			this->groupBox1->Controls->Add(this->checkBoxMargeNulle);
			this->groupBox1->Controls->Add(this->checkBoxTVANulle);
			this->groupBox1->Controls->Add(this->labelRes);
			this->groupBox1->Controls->Add(this->labelResultat);
			this->groupBox1->Controls->Add(this->buttonValeur);
			this->groupBox1->Controls->Add(this->textBoxDemarque);
			this->groupBox1->Controls->Add(this->textBoxRemise);
			this->groupBox1->Controls->Add(this->textBoxMarge);
			this->groupBox1->Controls->Add(this->textBoxTVA);
			this->groupBox1->Controls->Add(this->checkBoxDemarque);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->comboBoxDemarque);
			this->groupBox1->Controls->Add(this->labelRemise);
			this->groupBox1->Controls->Add(this->comboBoxRemise);
			this->groupBox1->Controls->Add(this->checkBoxRemise);
			this->groupBox1->Controls->Add(this->checkBoxMarge);
			this->groupBox1->Controls->Add(this->comboBoxMarge);
			this->groupBox1->Controls->Add(this->labelMarge);
			this->groupBox1->Controls->Add(this->checkBoxTVA);
			this->groupBox1->Controls->Add(this->comboBoxTVA);
			this->groupBox1->Controls->Add(this->labelTVA);
			this->groupBox1->Location = System::Drawing::Point(4, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(922, 535);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// checkBoxDemarqueNulle
			// 
			this->checkBoxDemarqueNulle->AutoSize = true;
			this->checkBoxDemarqueNulle->Location = System::Drawing::Point(725, 130);
			this->checkBoxDemarqueNulle->Name = L"checkBoxDemarqueNulle";
			this->checkBoxDemarqueNulle->Size = System::Drawing::Size(140, 20);
			this->checkBoxDemarqueNulle->TabIndex = 22;
			this->checkBoxDemarqueNulle->Text = L"Demarquage nulle";
			this->checkBoxDemarqueNulle->UseVisualStyleBackColor = true;
			this->checkBoxDemarqueNulle->CheckedChanged += gcnew System::EventHandler(this, &Simulation::checkBoxDemarqueNulle_CheckedChanged);
			// 
			// checkBoxRemiseNulle
			// 
			this->checkBoxRemiseNulle->AutoSize = true;
			this->checkBoxRemiseNulle->Location = System::Drawing::Point(484, 130);
			this->checkBoxRemiseNulle->Name = L"checkBoxRemiseNulle";
			this->checkBoxRemiseNulle->Size = System::Drawing::Size(107, 20);
			this->checkBoxRemiseNulle->TabIndex = 21;
			this->checkBoxRemiseNulle->Text = L"Remise nulle";
			this->checkBoxRemiseNulle->UseVisualStyleBackColor = true;
			this->checkBoxRemiseNulle->CheckedChanged += gcnew System::EventHandler(this, &Simulation::checkBoxRemiseNulle_CheckedChanged);
			// 
			// checkBoxMargeNulle
			// 
			this->checkBoxMargeNulle->AutoSize = true;
			this->checkBoxMargeNulle->Location = System::Drawing::Point(244, 130);
			this->checkBoxMargeNulle->Name = L"checkBoxMargeNulle";
			this->checkBoxMargeNulle->Size = System::Drawing::Size(99, 20);
			this->checkBoxMargeNulle->TabIndex = 20;
			this->checkBoxMargeNulle->Text = L"Marge nulle";
			this->checkBoxMargeNulle->UseVisualStyleBackColor = true;
			this->checkBoxMargeNulle->CheckedChanged += gcnew System::EventHandler(this, &Simulation::checkBoxMargeNulle_CheckedChanged);
			// 
			// checkBoxTVANulle
			// 
			this->checkBoxTVANulle->AutoSize = true;
			this->checkBoxTVANulle->Location = System::Drawing::Point(27, 130);
			this->checkBoxTVANulle->Name = L"checkBoxTVANulle";
			this->checkBoxTVANulle->Size = System::Drawing::Size(87, 20);
			this->checkBoxTVANulle->TabIndex = 19;
			this->checkBoxTVANulle->Text = L"TVA nulle";
			this->checkBoxTVANulle->UseVisualStyleBackColor = true;
			this->checkBoxTVANulle->CheckedChanged += gcnew System::EventHandler(this, &Simulation::checkBoxTVANulle_CheckedChanged);
			// 
			// labelRes
			// 
			this->labelRes->AutoSize = true;
			this->labelRes->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->labelRes->Location = System::Drawing::Point(31, 358);
			this->labelRes->Name = L"labelRes";
			this->labelRes->Size = System::Drawing::Size(0, 27);
			this->labelRes->TabIndex = 18;
			// 
			// labelResultat
			// 
			this->labelResultat->AutoSize = true;
			this->labelResultat->Font = (gcnew System::Drawing::Font(L"Arial Black", 14));
			this->labelResultat->Location = System::Drawing::Point(549, 354);
			this->labelResultat->Name = L"labelResultat";
			this->labelResultat->Size = System::Drawing::Size(95, 33);
			this->labelResultat->TabIndex = 17;
			this->labelResultat->Text = L"";
			// 
			// buttonValeur
			// 
			this->buttonValeur->BackColor = System::Drawing::SystemColors::Control;
			this->buttonValeur->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonValeur->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->buttonValeur->Location = System::Drawing::Point(302, 216);
			this->buttonValeur->Name = L"buttonValeur";
			this->buttonValeur->Size = System::Drawing::Size(217, 62);
			this->buttonValeur->TabIndex = 16;
			this->buttonValeur->Text = L"Afficher la valeur commerciale du stock";
			this->buttonValeur->UseVisualStyleBackColor = false;
			this->buttonValeur->Click += gcnew System::EventHandler(this, &Simulation::buttonValeur_Click);
			// 
			// textBoxDemarque
			// 
			this->textBoxDemarque->Location = System::Drawing::Point(725, 130);
			this->textBoxDemarque->Name = L"textBoxDemarque";
			this->textBoxDemarque->Size = System::Drawing::Size(100, 22);
			this->textBoxDemarque->TabIndex = 15;
			this->textBoxDemarque->Visible = false;
			// 
			// textBoxRemise
			// 
			this->textBoxRemise->Location = System::Drawing::Point(484, 130);
			this->textBoxRemise->Name = L"textBoxRemise";
			this->textBoxRemise->Size = System::Drawing::Size(100, 22);
			this->textBoxRemise->TabIndex = 14;
			this->textBoxRemise->Visible = false;
			// 
			// textBoxMarge
			// 
			this->textBoxMarge->Location = System::Drawing::Point(244, 130);
			this->textBoxMarge->Name = L"textBoxMarge";
			this->textBoxMarge->Size = System::Drawing::Size(100, 22);
			this->textBoxMarge->TabIndex = 13;
			this->textBoxMarge->Visible = false;
			// 
			// textBoxTVA
			// 
			this->textBoxTVA->Location = System::Drawing::Point(27, 130);
			this->textBoxTVA->Name = L"textBoxTVA";
			this->textBoxTVA->Size = System::Drawing::Size(100, 22);
			this->textBoxTVA->TabIndex = 12;
			this->textBoxTVA->Visible = false;
			// 
			// checkBoxDemarque
			// 
			this->checkBoxDemarque->AutoSize = true;
			this->checkBoxDemarque->Location = System::Drawing::Point(725, 104);
			this->checkBoxDemarque->Name = L"checkBoxDemarque";
			this->checkBoxDemarque->Size = System::Drawing::Size(59, 20);
			this->checkBoxDemarque->TabIndex = 11;
			this->checkBoxDemarque->Text = L"autre";
			this->checkBoxDemarque->UseVisualStyleBackColor = true;
			this->checkBoxDemarque->CheckedChanged += gcnew System::EventHandler(this, &Simulation::checkBoxDemarque_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(722, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Démarque inconnue";
			// 
			// comboBoxDemarque
			// 
			this->comboBoxDemarque->FormattingEnabled = true;
			this->comboBoxDemarque->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Démarquage de 2%", L"Démarquage de 3%",
					L"Démarquage de 5%"
			});
			this->comboBoxDemarque->Location = System::Drawing::Point(725, 64);
			this->comboBoxDemarque->Name = L"comboBoxDemarque";
			this->comboBoxDemarque->Size = System::Drawing::Size(155, 24);
			this->comboBoxDemarque->TabIndex = 9;
			// 
			// labelRemise
			// 
			this->labelRemise->AutoSize = true;
			this->labelRemise->Location = System::Drawing::Point(481, 45);
			this->labelRemise->Name = L"labelRemise";
			this->labelRemise->Size = System::Drawing::Size(135, 16);
			this->labelRemise->TabIndex = 8;
			this->labelRemise->Text = L"Remise commerciale";
			// 
			// comboBoxRemise
			// 
			this->comboBoxRemise->FormattingEnabled = true;
			this->comboBoxRemise->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Remise commerciale de 5%", L"Remise commerciale de 6%" });
			this->comboBoxRemise->Location = System::Drawing::Point(484, 64);
			this->comboBoxRemise->Name = L"comboBoxRemise";
			this->comboBoxRemise->Size = System::Drawing::Size(160, 24);
			this->comboBoxRemise->TabIndex = 7;
			// 
			// checkBoxRemise
			// 
			this->checkBoxRemise->AutoSize = true;
			this->checkBoxRemise->Location = System::Drawing::Point(484, 104);
			this->checkBoxRemise->Name = L"checkBoxRemise";
			this->checkBoxRemise->Size = System::Drawing::Size(59, 20);
			this->checkBoxRemise->TabIndex = 6;
			this->checkBoxRemise->Text = L"autre";
			this->checkBoxRemise->UseVisualStyleBackColor = true;
			this->checkBoxRemise->CheckedChanged += gcnew System::EventHandler(this, &Simulation::checkBoxRemise_CheckedChanged);
			// 
			// checkBoxMarge
			// 
			this->checkBoxMarge->AutoSize = true;
			this->checkBoxMarge->Location = System::Drawing::Point(244, 104);
			this->checkBoxMarge->Name = L"checkBoxMarge";
			this->checkBoxMarge->Size = System::Drawing::Size(59, 20);
			this->checkBoxMarge->TabIndex = 5;
			this->checkBoxMarge->Text = L"autre";
			this->checkBoxMarge->UseVisualStyleBackColor = true;
			this->checkBoxMarge->CheckedChanged += gcnew System::EventHandler(this, &Simulation::checkBoxMarge_CheckedChanged);
			// 
			// comboBoxMarge
			// 
			this->comboBoxMarge->FormattingEnabled = true;
			this->comboBoxMarge->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Marge de 5%", L"Marge de 10%", L"Marge de 15%" });
			this->comboBoxMarge->Location = System::Drawing::Point(244, 64);
			this->comboBoxMarge->Name = L"comboBoxMarge";
			this->comboBoxMarge->Size = System::Drawing::Size(157, 24);
			this->comboBoxMarge->TabIndex = 4;
			// 
			// labelMarge
			// 
			this->labelMarge->AutoSize = true;
			this->labelMarge->Location = System::Drawing::Point(241, 33);
			this->labelMarge->Name = L"labelMarge";
			this->labelMarge->Size = System::Drawing::Size(127, 16);
			this->labelMarge->TabIndex = 3;
			this->labelMarge->Text = L"Marge commerciale";
			// 
			// checkBoxTVA
			// 
			this->checkBoxTVA->AutoSize = true;
			this->checkBoxTVA->Location = System::Drawing::Point(27, 104);
			this->checkBoxTVA->Name = L"checkBoxTVA";
			this->checkBoxTVA->Size = System::Drawing::Size(59, 20);
			this->checkBoxTVA->TabIndex = 2;
			this->checkBoxTVA->Text = L"autre";
			this->checkBoxTVA->UseVisualStyleBackColor = true;
			this->checkBoxTVA->CheckedChanged += gcnew System::EventHandler(this, &Simulation::checkBoxTVA_CheckedChanged);
			// 
			// Simulation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(928, 541);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Simulation";
			this->Text = L"Simulation";
			this->Load += gcnew System::EventHandler(this, &Simulation::Simulation_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Simulation_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oStat = gcnew NS_Comp_Statistique::Statistique();
	}

	private: System::Void buttonValeur_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
		if (this->comboBoxTVA->SelectedIndex == -1 && this->checkBoxTVA->Checked == false && this->checkBoxTVANulle->Checked == false || this->comboBoxMarge->SelectedIndex == -1 && this->checkBoxMarge->Checked == false && this->checkBoxMargeNulle->Checked == false || this->comboBoxRemise->SelectedIndex == -1 && this->checkBoxRemise->Checked == false && this->checkBoxRemiseNulle->Checked == false || this->comboBoxDemarque->SelectedIndex == -1 && this->checkBoxDemarque->Checked == false && this->checkBoxDemarqueNulle->Checked == false) {
			MessageBox::Show("Veuillez entrer des données pour démarrer la simulation");
		}
		else {
			float TVA = 0;
			float marge = 0;
			float remise = 0;
			float demarque = 0;

			//TVA
			if (this->checkBoxTVA->Checked == true) {
				if (this->textBoxTVA->Text == ""){
					MessageBox::Show("Veuillez entrer une valeur dans la textBox TVA");
				}
				else {
					TVA = Convert::ToInt32(this->textBoxTVA->Text);
				}
			}
			else if (this->checkBoxTVANulle->Checked == true) {
				TVA = 0;
			}
			else{
				if (this->comboBoxTVA->SelectedItem == "TVA de 5%") {
					TVA = 5;
				}
				else if (this->comboBoxTVA->SelectedItem == "TVA de 10%") {
					TVA = 10;
				}
				else if (this->comboBoxTVA->SelectedItem == "TVA de 20%") {
					TVA = 20;
				}
			}

			//Marge
			if (this->checkBoxMarge->Checked == true) {
				if (this->textBoxMarge->Text == "") {
					MessageBox::Show("Veuillez entrer une valeur dans la textBox marge");
				}
				else {
					marge = Convert::ToInt32(this->textBoxMarge->Text);
				}
			}
			else if (this->checkBoxMargeNulle->Checked == true) {
				marge = 0;
			}
			else {
				if (this->comboBoxTVA->SelectedItem == "Marge de 5%") {
					marge = 5;
				}
				else if (this->comboBoxTVA->SelectedItem == "Marge de 10%") {
					marge = 10;
				}
				else if (this->comboBoxTVA->SelectedItem == "Marge de 15%") {
					marge = 15;
				}
			}

			//remise 
			if (this->checkBoxRemise->Checked == true) {
				if (this->textBoxRemise->Text == "") {
					MessageBox::Show("Veuillez entrer une valeur dans la textBox remise");
				}
				else {
					remise = Convert::ToInt32(this->textBoxRemise->Text);
				}
			}
			else if (this->checkBoxRemiseNulle->Checked == true) {
				remise = 0;
			}
			else {
				if (this->comboBoxTVA->SelectedItem == "Remise commerciale de 5%") {
					remise = 5;
				}
				else if (this->comboBoxTVA->SelectedItem == "Remise commerciale de 10%") {
					remise = 6;
				}
			}

			//demarque 
			if (this->checkBoxDemarque->Checked == true) {
				if (this->textBoxDemarque->Text == "") {
					MessageBox::Show("Veuillez entrer une valeur dans la textBox demarquage");
				}
				else {
					demarque = Convert::ToInt32(this->textBoxDemarque->Text);
				}
			}
			else if (this->checkBoxDemarqueNulle->Checked == true) {
				demarque = 0;
			}
			else {
				if (this->comboBoxTVA->SelectedItem == "Démarquage de 2%") {
					demarque = 2;
				}
				else if (this->comboBoxTVA->SelectedItem == "Démarquage de 3%") {
					demarque = 3;
				}
				else if (this->comboBoxTVA->SelectedItem == "Démarquage de 5%") {
					demarque = 5;
				}
			}

			this->labelRes->Text = "La valeur commerciale du stock est de :";
			this->labelResultat->Text = this->oStat->calcSim(TVA, marge, remise, demarque) + " euros";

		}
	}

	private: System::Void checkBoxTVA_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBoxTVA->Checked == true) {
			this->textBoxTVA->Visible = true;
			this->checkBoxTVANulle->Visible = false;
		}
			if (this->checkBoxTVA->Checked == false) {
			this->textBoxTVA->Visible = false;
			this->checkBoxTVANulle->Visible = true;
		}
	}

	private: System::Void checkBoxMarge_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBoxMarge->Checked == true) {
			this->textBoxMarge->Visible = true;
			this->checkBoxMargeNulle->Visible = false;
		}
		if (this->checkBoxMarge->Checked == false) {
			this->textBoxMarge->Visible = false;
			this->checkBoxMargeNulle->Visible = true;
		}
	}

	private: System::Void checkBoxRemise_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBoxRemise->Checked == true) {
			this->textBoxRemise->Visible = true;
			this->checkBoxRemiseNulle->Visible = false;
		}
		if (this->checkBoxRemise->Checked == false) {
			this->textBoxRemise->Visible = false;
			this->checkBoxRemiseNulle->Visible = true;
		}
	}
	private: System::Void checkBoxDemarque_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBoxDemarque->Checked == true) {
			this->textBoxDemarque->Visible = true;
			this->checkBoxDemarqueNulle->Visible = false;
		}
		if (this->checkBoxDemarque->Checked == false) {
			this->textBoxDemarque->Visible = false;
			this->checkBoxDemarqueNulle->Visible = true;
		}
	}

	private: System::Void checkBoxTVANulle_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBoxTVANulle->Checked == true) {
			this->checkBoxTVA->Visible = false;
		}
		if (this->checkBoxTVANulle->Checked == false) {
			this->checkBoxTVA->Visible = true;
		}
	}
	private: System::Void checkBoxMargeNulle_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBoxMargeNulle->Checked == true) {
			this->checkBoxMarge->Visible = false;
		}
		if (this->checkBoxMargeNulle->Checked == false) {
			this->checkBoxMarge->Visible = true;
		}
	}
	private: System::Void checkBoxRemiseNulle_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBoxRemiseNulle->Checked == true) {
			this->checkBoxRemise->Visible = false;
		}
		if (this->checkBoxRemiseNulle->Checked == false) {
			this->checkBoxRemise->Visible = true;
		}
	}
	private: System::Void checkBoxDemarqueNulle_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBoxDemarqueNulle->Checked == true) {
			this->checkBoxDemarque->Visible = false;
		}
		if (this->checkBoxDemarqueNulle->Checked == false) {
			this->checkBoxDemarque->Visible = true;
		}
	}
};
}