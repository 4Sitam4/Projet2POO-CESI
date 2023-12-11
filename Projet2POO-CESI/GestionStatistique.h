#pragma once
#include "Statistique.h"
#include "FormSeuilDeReappro.h"
#include "Simulation.h"

namespace Projet2POOCESI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionStatistique
	/// </summary>
	public ref class GestionStatistique : public System::Windows::Forms::Form
	{
	public:
		GestionStatistique(void)
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
		~GestionStatistique()
		{
			if (components)
			{
				delete components;
			}
		}


	private: NS_Comp_Statistique::Statistique^ oStat;
	private: System::String^ res;
	private: System::Windows::Forms::GroupBox^ groupBoxPanierMoyen;



	protected:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ buttonPanierMoyenne;
	private: System::Windows::Forms::GroupBox^ groupBoxCA;



	private: System::Windows::Forms::Button^ buttonCA;
	private: System::Windows::Forms::Label^ labelPanierMoyen;
	private: System::Windows::Forms::ComboBox^ comboBoxMois;
	private: System::Windows::Forms::Label^ labelCA;
	private: System::Windows::Forms::Label^ labelAnnee;
	private: System::Windows::Forms::Label^ labelMois;
	private: System::Windows::Forms::ComboBox^ comboBoxAnnee;
	private: System::Windows::Forms::GroupBox^ groupBoxSeuilDeReappro;
	private: System::Windows::Forms::Button^ buttonAfficher;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBoxSommeAchats;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelAchatsClient;

	private: System::Windows::Forms::Button^ buttonAchatsClient;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxClient;
	private: System::Windows::Forms::ComboBox^ comboBoxCatalogue;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ labelVCS;
	private: System::Windows::Forms::Label^ labelValeurCommercialeStock;


	private: System::Windows::Forms::Button^ buttonValeurCommercialeStock;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ labelVAS;
	private: System::Windows::Forms::Label^ labelValeurAchatStock;


	private: System::Windows::Forms::Button^ buttonAchatStock;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ buttonSimulation;













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
			this->groupBoxPanierMoyen = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelPanierMoyen = (gcnew System::Windows::Forms::Label());
			this->buttonPanierMoyenne = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBoxCA = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelCA = (gcnew System::Windows::Forms::Label());
			this->labelAnnee = (gcnew System::Windows::Forms::Label());
			this->labelMois = (gcnew System::Windows::Forms::Label());
			this->comboBoxAnnee = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxMois = (gcnew System::Windows::Forms::ComboBox());
			this->buttonCA = (gcnew System::Windows::Forms::Button());
			this->groupBoxSeuilDeReappro = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxCatalogue = (gcnew System::Windows::Forms::ComboBox());
			this->buttonAfficher = (gcnew System::Windows::Forms::Button());
			this->groupBoxSommeAchats = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxClient = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelAchatsClient = (gcnew System::Windows::Forms::Label());
			this->buttonAchatsClient = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelVCS = (gcnew System::Windows::Forms::Label());
			this->labelValeurCommercialeStock = (gcnew System::Windows::Forms::Label());
			this->buttonValeurCommercialeStock = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->labelVAS = (gcnew System::Windows::Forms::Label());
			this->labelValeurAchatStock = (gcnew System::Windows::Forms::Label());
			this->buttonAchatStock = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSimulation = (gcnew System::Windows::Forms::Button());
			this->groupBoxPanierMoyen->SuspendLayout();
			this->groupBoxCA->SuspendLayout();
			this->groupBoxSeuilDeReappro->SuspendLayout();
			this->groupBoxSommeAchats->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxPanierMoyen
			// 
			this->groupBoxPanierMoyen->Controls->Add(this->label2);
			this->groupBoxPanierMoyen->Controls->Add(this->labelPanierMoyen);
			this->groupBoxPanierMoyen->Controls->Add(this->buttonPanierMoyenne);
			this->groupBoxPanierMoyen->Location = System::Drawing::Point(13, 13);
			this->groupBoxPanierMoyen->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxPanierMoyen->Name = L"groupBoxPanierMoyen";
			this->groupBoxPanierMoyen->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxPanierMoyen->Size = System::Drawing::Size(269, 177);
			this->groupBoxPanierMoyen->TabIndex = 0;
			this->groupBoxPanierMoyen->TabStop = false;
			this->groupBoxPanierMoyen->Text = L" Panier moyen des clients";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 3;
			// 
			// labelPanierMoyen
			// 
			this->labelPanierMoyen->AutoSize = true;
			this->labelPanierMoyen->Location = System::Drawing::Point(80, 77);
			this->labelPanierMoyen->Name = L"labelPanierMoyen";
			this->labelPanierMoyen->Size = System::Drawing::Size(0, 16);
			this->labelPanierMoyen->TabIndex = 2;
			// 
			// buttonPanierMoyenne
			// 
			this->buttonPanierMoyenne->Location = System::Drawing::Point(45, 122);
			this->buttonPanierMoyenne->Margin = System::Windows::Forms::Padding(4);
			this->buttonPanierMoyenne->Name = L"buttonPanierMoyenne";
			this->buttonPanierMoyenne->Size = System::Drawing::Size(154, 28);
			this->buttonPanierMoyenne->TabIndex = 1;
			this->buttonPanierMoyenne->Text = L"Calculer";
			this->buttonPanierMoyenne->UseVisualStyleBackColor = true;
			this->buttonPanierMoyenne->Click += gcnew System::EventHandler(this, &GestionStatistique::buttonPanierMoyenne_Click);
			// 
			// groupBoxCA
			// 
			this->groupBoxCA->Controls->Add(this->label1);
			this->groupBoxCA->Controls->Add(this->labelCA);
			this->groupBoxCA->Controls->Add(this->labelAnnee);
			this->groupBoxCA->Controls->Add(this->labelMois);
			this->groupBoxCA->Controls->Add(this->comboBoxAnnee);
			this->groupBoxCA->Controls->Add(this->comboBoxMois);
			this->groupBoxCA->Controls->Add(this->buttonCA);
			this->groupBoxCA->Location = System::Drawing::Point(311, 13);
			this->groupBoxCA->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxCA->Name = L"groupBoxCA";
			this->groupBoxCA->Padding = System::Windows::Forms::Padding(5);
			this->groupBoxCA->Size = System::Drawing::Size(345, 276);
			this->groupBoxCA->TabIndex = 2;
			this->groupBoxCA->TabStop = false;
			this->groupBoxCA->Text = L"Chiffre d\'affaires ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 122);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 8;
			// 
			// labelCA
			// 
			this->labelCA->AutoSize = true;
			this->labelCA->Location = System::Drawing::Point(130, 161);
			this->labelCA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelCA->Name = L"labelCA";
			this->labelCA->Size = System::Drawing::Size(0, 16);
			this->labelCA->TabIndex = 7;
			// 
			// labelAnnee
			// 
			this->labelAnnee->AutoSize = true;
			this->labelAnnee->Location = System::Drawing::Point(201, 38);
			this->labelAnnee->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelAnnee->Name = L"labelAnnee";
			this->labelAnnee->Size = System::Drawing::Size(46, 16);
			this->labelAnnee->TabIndex = 6;
			this->labelAnnee->Text = L"Année";
			// 
			// labelMois
			// 
			this->labelMois->AutoSize = true;
			this->labelMois->Location = System::Drawing::Point(17, 38);
			this->labelMois->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelMois->Name = L"labelMois";
			this->labelMois->Size = System::Drawing::Size(36, 16);
			this->labelMois->TabIndex = 5;
			this->labelMois->Text = L"Mois";
			// 
			// comboBoxAnnee
			// 
			this->comboBoxAnnee->FormattingEnabled = true;
			this->comboBoxAnnee->Location = System::Drawing::Point(204, 58);
			this->comboBoxAnnee->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxAnnee->Name = L"comboBoxAnnee";
			this->comboBoxAnnee->Size = System::Drawing::Size(119, 24);
			this->comboBoxAnnee->TabIndex = 4;
			// 
			// comboBoxMois
			// 
			this->comboBoxMois->FormattingEnabled = true;
			this->comboBoxMois->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Janvier", L"Février", L"Mars", L"Avril", L"Mai",
					L"Juin", L"Juillet", L"Août", L"Septembre", L"Octobre", L"Novembre", L"Décembre"
			});
			this->comboBoxMois->Location = System::Drawing::Point(20, 60);
			this->comboBoxMois->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxMois->Name = L"comboBoxMois";
			this->comboBoxMois->Size = System::Drawing::Size(124, 24);
			this->comboBoxMois->TabIndex = 3;
			// 
			// buttonCA
			// 
			this->buttonCA->Location = System::Drawing::Point(72, 222);
			this->buttonCA->Margin = System::Windows::Forms::Padding(5);
			this->buttonCA->Name = L"buttonCA";
			this->buttonCA->Size = System::Drawing::Size(187, 28);
			this->buttonCA->TabIndex = 1;
			this->buttonCA->Text = L"Calculer";
			this->buttonCA->UseVisualStyleBackColor = true;
			this->buttonCA->Click += gcnew System::EventHandler(this, &GestionStatistique::buttonCA_Click);
			// 
			// groupBoxSeuilDeReappro
			// 
			this->groupBoxSeuilDeReappro->Controls->Add(this->comboBoxCatalogue);
			this->groupBoxSeuilDeReappro->Controls->Add(this->buttonAfficher);
			this->groupBoxSeuilDeReappro->Location = System::Drawing::Point(639, 313);
			this->groupBoxSeuilDeReappro->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxSeuilDeReappro->Name = L"groupBoxSeuilDeReappro";
			this->groupBoxSeuilDeReappro->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxSeuilDeReappro->Size = System::Drawing::Size(335, 177);
			this->groupBoxSeuilDeReappro->TabIndex = 3;
			this->groupBoxSeuilDeReappro->TabStop = false;
			this->groupBoxSeuilDeReappro->Text = L"Catalogue";
			// 
			// comboBoxCatalogue
			// 
			this->comboBoxCatalogue->FormattingEnabled = true;
			this->comboBoxCatalogue->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Les produits à réapprovisionner", L"Le top 10 des ventes",
					L"Les 10 pires ventes"
			});
			this->comboBoxCatalogue->Location = System::Drawing::Point(67, 58);
			this->comboBoxCatalogue->Name = L"comboBoxCatalogue";
			this->comboBoxCatalogue->Size = System::Drawing::Size(222, 24);
			this->comboBoxCatalogue->TabIndex = 4;
			// 
			// buttonAfficher
			// 
			this->buttonAfficher->Location = System::Drawing::Point(89, 110);
			this->buttonAfficher->Margin = System::Windows::Forms::Padding(4);
			this->buttonAfficher->Name = L"buttonAfficher";
			this->buttonAfficher->Size = System::Drawing::Size(181, 28);
			this->buttonAfficher->TabIndex = 3;
			this->buttonAfficher->Text = L"Afficher";
			this->buttonAfficher->UseVisualStyleBackColor = true;
			this->buttonAfficher->Click += gcnew System::EventHandler(this, &GestionStatistique::buttonAfficher_Click);
			// 
			// groupBoxSommeAchats
			// 
			this->groupBoxSommeAchats->Controls->Add(this->label5);
			this->groupBoxSommeAchats->Controls->Add(this->textBoxClient);
			this->groupBoxSommeAchats->Controls->Add(this->label3);
			this->groupBoxSommeAchats->Controls->Add(this->labelAchatsClient);
			this->groupBoxSommeAchats->Controls->Add(this->buttonAchatsClient);
			this->groupBoxSommeAchats->Location = System::Drawing::Point(13, 219);
			this->groupBoxSommeAchats->Margin = System::Windows::Forms::Padding(4);
			this->groupBoxSommeAchats->Name = L"groupBoxSommeAchats";
			this->groupBoxSommeAchats->Padding = System::Windows::Forms::Padding(4);
			this->groupBoxSommeAchats->Size = System::Drawing::Size(269, 271);
			this->groupBoxSommeAchats->TabIndex = 4;
			this->groupBoxSommeAchats->TabStop = false;
			this->groupBoxSommeAchats->Text = L"Montant des achats du client";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Numéro client";
			// 
			// textBoxClient
			// 
			this->textBoxClient->Location = System::Drawing::Point(25, 71);
			this->textBoxClient->Name = L"textBoxClient";
			this->textBoxClient->Size = System::Drawing::Size(49, 22);
			this->textBoxClient->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 3;
			// 
			// labelAchatsClient
			// 
			this->labelAchatsClient->AutoSize = true;
			this->labelAchatsClient->Location = System::Drawing::Point(97, 165);
			this->labelAchatsClient->Name = L"labelAchatsClient";
			this->labelAchatsClient->Size = System::Drawing::Size(0, 16);
			this->labelAchatsClient->TabIndex = 2;
			// 
			// buttonAchatsClient
			// 
			this->buttonAchatsClient->Location = System::Drawing::Point(45, 218);
			this->buttonAchatsClient->Margin = System::Windows::Forms::Padding(4);
			this->buttonAchatsClient->Name = L"buttonAchatsClient";
			this->buttonAchatsClient->Size = System::Drawing::Size(154, 28);
			this->buttonAchatsClient->TabIndex = 1;
			this->buttonAchatsClient->Text = L"Calculer";
			this->buttonAchatsClient->UseVisualStyleBackColor = true;
			this->buttonAchatsClient->Click += gcnew System::EventHandler(this, &GestionStatistique::buttonAchatsClient_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labelVCS);
			this->groupBox1->Controls->Add(this->labelValeurCommercialeStock);
			this->groupBox1->Controls->Add(this->buttonValeurCommercialeStock);
			this->groupBox1->Location = System::Drawing::Point(311, 313);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(304, 177);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Valeur commerciale du stock";
			// 
			// labelVCS
			// 
			this->labelVCS->AutoSize = true;
			this->labelVCS->Location = System::Drawing::Point(7, 38);
			this->labelVCS->Name = L"labelVCS";
			this->labelVCS->Size = System::Drawing::Size(0, 16);
			this->labelVCS->TabIndex = 3;
			// 
			// labelValeurCommercialeStock
			// 
			this->labelValeurCommercialeStock->AutoSize = true;
			this->labelValeurCommercialeStock->Location = System::Drawing::Point(76, 81);
			this->labelValeurCommercialeStock->Name = L"labelValeurCommercialeStock";
			this->labelValeurCommercialeStock->Size = System::Drawing::Size(0, 16);
			this->labelValeurCommercialeStock->TabIndex = 2;
			// 
			// buttonValeurCommercialeStock
			// 
			this->buttonValeurCommercialeStock->Location = System::Drawing::Point(55, 124);
			this->buttonValeurCommercialeStock->Margin = System::Windows::Forms::Padding(4);
			this->buttonValeurCommercialeStock->Name = L"buttonValeurCommercialeStock";
			this->buttonValeurCommercialeStock->Size = System::Drawing::Size(154, 28);
			this->buttonValeurCommercialeStock->TabIndex = 1;
			this->buttonValeurCommercialeStock->Text = L"Calculer";
			this->buttonValeurCommercialeStock->UseVisualStyleBackColor = true;
			this->buttonValeurCommercialeStock->Click += gcnew System::EventHandler(this, &GestionStatistique::buttonValeurCommercialeStock_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labelVAS);
			this->groupBox2->Controls->Add(this->labelValeurAchatStock);
			this->groupBox2->Controls->Add(this->buttonAchatStock);
			this->groupBox2->Location = System::Drawing::Point(686, 13);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(288, 177);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Valeur d\'achat du stock";
			// 
			// labelVAS
			// 
			this->labelVAS->AutoSize = true;
			this->labelVAS->Location = System::Drawing::Point(7, 38);
			this->labelVAS->Name = L"labelVAS";
			this->labelVAS->Size = System::Drawing::Size(0, 16);
			this->labelVAS->TabIndex = 3;
			// 
			// labelValeurAchatStock
			// 
			this->labelValeurAchatStock->AutoSize = true;
			this->labelValeurAchatStock->Location = System::Drawing::Point(82, 81);
			this->labelValeurAchatStock->Name = L"labelValeurAchatStock";
			this->labelValeurAchatStock->Size = System::Drawing::Size(0, 16);
			this->labelValeurAchatStock->TabIndex = 2;
			// 
			// buttonAchatStock
			// 
			this->buttonAchatStock->Location = System::Drawing::Point(55, 124);
			this->buttonAchatStock->Margin = System::Windows::Forms::Padding(4);
			this->buttonAchatStock->Name = L"buttonAchatStock";
			this->buttonAchatStock->Size = System::Drawing::Size(154, 28);
			this->buttonAchatStock->TabIndex = 1;
			this->buttonAchatStock->Text = L"Calculer";
			this->buttonAchatStock->UseVisualStyleBackColor = true;
			this->buttonAchatStock->Click += gcnew System::EventHandler(this, &GestionStatistique::buttonAchatStock_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->buttonSimulation);
			this->groupBox3->Location = System::Drawing::Point(686, 219);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(288, 70);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Simulation";
			// 
			// buttonSimulation
			// 
			this->buttonSimulation->Location = System::Drawing::Point(55, 21);
			this->buttonSimulation->Name = L"buttonSimulation";
			this->buttonSimulation->Size = System::Drawing::Size(154, 34);
			this->buttonSimulation->TabIndex = 0;
			this->buttonSimulation->Text = L"lancer la simulation";
			this->buttonSimulation->UseVisualStyleBackColor = true;
			this->buttonSimulation->Click += gcnew System::EventHandler(this, &GestionStatistique::buttonSimulation_Click);
			// 
			// GestionStatistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1697, 539);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBoxSommeAchats);
			this->Controls->Add(this->groupBoxSeuilDeReappro);
			this->Controls->Add(this->groupBoxCA);
			this->Controls->Add(this->groupBoxPanierMoyen);
			this->Location = System::Drawing::Point(6, 42);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GestionStatistique";
			this->Text = L"GestionStatistique";
			this->Load += gcnew System::EventHandler(this, &GestionStatistique::GestionStatistique_Load);
			this->groupBoxPanierMoyen->ResumeLayout(false);
			this->groupBoxPanierMoyen->PerformLayout();
			this->groupBoxCA->ResumeLayout(false);
			this->groupBoxCA->PerformLayout();
			this->groupBoxSeuilDeReappro->ResumeLayout(false);
			this->groupBoxSommeAchats->ResumeLayout(false);
			this->groupBoxSommeAchats->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion

	private: System::Void GestionStatistique_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oStat = gcnew NS_Comp_Statistique::Statistique();
		for (int annee = 2023; annee >= 1950; annee--) {
			comboBoxAnnee->Items->Add(annee);
		}

	}


	private: System::Void buttonPanierMoyenne_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label2->Text = " Prix d'un panier moyen : ";
		this->labelPanierMoyen->Text = this->oStat->calcPanierMoyen() + " euros";
	}


	private: System::Void buttonCA_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = " Chiffre d'affaires : ";
		if (this->comboBoxMois->SelectedIndex == -1 || this->comboBoxAnnee->SelectedIndex == -1) {
			MessageBox::Show(" Veuillez entrer un mois et une année!");
		}
		else {
			this->labelCA->Text = this->oStat->calcChiffreAffaireMois(this->comboBoxMois->SelectedItem->ToString(), this->comboBoxAnnee->SelectedItem->ToString()) + " euros";
		}
	}

	private: System::Void buttonAfficher_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBoxCatalogue->SelectedIndex == -1) {
			MessageBox::Show(" Veuillez entrer ce que vous souhaiter afficher");
		}
		else {
			FormSeuilDeReappro^ formSeuilDeReappro = gcnew FormSeuilDeReappro();

			if (this->comboBoxCatalogue->SelectedItem == "Les produits à réapprovisionner") {
				formSeuilDeReappro->Text = L"Seuil de réapprovisionnement";
				formSeuilDeReappro->ShowDialog();
			}
			else if (this->comboBoxCatalogue->SelectedItem == "Le top 10 des ventes") {
				formSeuilDeReappro->Text = L"10 meilleures ventes";
				formSeuilDeReappro->ShowDialog();
			}
			else if (this->comboBoxCatalogue->SelectedItem == "Les 10 pires ventes") {
				formSeuilDeReappro->Text = L"10 pires ventes";
				formSeuilDeReappro->ShowDialog();
			}
		}
	}

	private: System::Void buttonAchatsClient_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBoxClient->Text == "") {
			MessageBox::Show("Veuillez entrer le numéro client");
		}
		else {
			this->label3->Text = " Montant des achats du client : ";
			this->labelAchatsClient->Text = this->oStat->calcAchatsClient(this->textBoxClient->Text) + " euros";
		}
	}

	private: System::Void buttonValeurCommercialeStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelVCS->Text = "La valeur commerciale du stock actuel est :";
		this->labelValeurCommercialeStock->Text = this->oStat->calcValComStock() + " euros";
	}

	private: System::Void buttonAchatStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->labelVAS->Text = "La valeur d'achat du stock actuel est :";
		this->labelValeurAchatStock->Text = this->oStat->calcValAchStock() + " euros";
	}

	private: System::Void buttonSimulation_Click(System::Object^ sender, System::EventArgs^ e) {
		Simulation^ sim = gcnew Simulation();
		sim->ShowDialog();
	}

};
}
