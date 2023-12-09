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


	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ buttonPanierMoyenne;

	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Button^ buttonCA;
	private: System::Windows::Forms::Label^ labelPanierMoyen;
	private: System::Windows::Forms::ComboBox^ comboBoxMois;
	private: System::Windows::Forms::Label^ labelCA;
	private: System::Windows::Forms::Label^ labelAnnee;
	private: System::Windows::Forms::Label^ labelMois;
	private: System::Windows::Forms::ComboBox^ comboBoxAnnee;






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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelPanierMoyen = (gcnew System::Windows::Forms::Label());
			this->buttonPanierMoyenne = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxMois = (gcnew System::Windows::Forms::ComboBox());
			this->buttonCA = (gcnew System::Windows::Forms::Button());
			this->comboBoxAnnee = (gcnew System::Windows::Forms::ComboBox());
			this->labelMois = (gcnew System::Windows::Forms::Label());
			this->labelAnnee = (gcnew System::Windows::Forms::Label());
			this->labelCA = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->labelPanierMoyen);
			this->groupBox1->Controls->Add(this->buttonPanierMoyenne);
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(303, 177);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" Panier moyen";
			// 
			// labelPanierMoyen
			// 
			this->labelPanierMoyen->AutoSize = true;
			this->labelPanierMoyen->Location = System::Drawing::Point(70, 58);
			this->labelPanierMoyen->Name = L"labelPanierMoyen";
			this->labelPanierMoyen->Size = System::Drawing::Size(0, 16);
			this->labelPanierMoyen->TabIndex = 2;
			// 
			// buttonPanierMoyenne
			// 
			this->buttonPanierMoyenne->Location = System::Drawing::Point(35, 112);
			this->buttonPanierMoyenne->Margin = System::Windows::Forms::Padding(4);
			this->buttonPanierMoyenne->Name = L"buttonPanierMoyenne";
			this->buttonPanierMoyenne->Size = System::Drawing::Size(182, 28);
			this->buttonPanierMoyenne->TabIndex = 1;
			this->buttonPanierMoyenne->Text = L"Calculer";
			this->buttonPanierMoyenne->UseVisualStyleBackColor = true;
			this->buttonPanierMoyenne->Click += gcnew System::EventHandler(this, &GestionStatistique::buttonPanierMoyenne_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labelCA);
			this->groupBox2->Controls->Add(this->labelAnnee);
			this->groupBox2->Controls->Add(this->labelMois);
			this->groupBox2->Controls->Add(this->comboBoxAnnee);
			this->groupBox2->Controls->Add(this->comboBoxMois);
			this->groupBox2->Controls->Add(this->buttonCA);
			this->groupBox2->Location = System::Drawing::Point(311, 0);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(384, 306);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Calc chiffre d\'affaire";
			// 
			// comboBoxMois
			// 
			this->comboBoxMois->FormattingEnabled = true;
			this->comboBoxMois->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Janvier", L"Février", L"Mars", L"Avril", L"Mai",
					L"Juin", L"Juillet", L"Août", L"Septembre", L"Octobre", L"Novembre", L"Décembre"
			});
			this->comboBoxMois->Location = System::Drawing::Point(20, 70);
			this->comboBoxMois->Name = L"comboBoxMois";
			this->comboBoxMois->Size = System::Drawing::Size(121, 24);
			this->comboBoxMois->TabIndex = 3;
			// 
			// buttonCA
			// 
			this->buttonCA->Location = System::Drawing::Point(84, 237);
			this->buttonCA->Margin = System::Windows::Forms::Padding(4);
			this->buttonCA->Name = L"buttonCA";
			this->buttonCA->Size = System::Drawing::Size(200, 28);
			this->buttonCA->TabIndex = 1;
			this->buttonCA->Text = L"Calculer";
			this->buttonCA->UseVisualStyleBackColor = true;
			this->buttonCA->Click += gcnew System::EventHandler(this, &GestionStatistique::buttonCA_Click);
			// 
			// comboBoxAnnee
			// 
			this->comboBoxAnnee->FormattingEnabled = true;
			this->comboBoxAnnee->Location = System::Drawing::Point(209, 70);
			this->comboBoxAnnee->Name = L"comboBoxAnnee";
			this->comboBoxAnnee->Size = System::Drawing::Size(121, 24);
			this->comboBoxAnnee->TabIndex = 4;
			// 
			// labelMois
			// 
			this->labelMois->AutoSize = true;
			this->labelMois->Location = System::Drawing::Point(20, 48);
			this->labelMois->Name = L"labelMois";
			this->labelMois->Size = System::Drawing::Size(36, 16);
			this->labelMois->TabIndex = 5;
			this->labelMois->Text = L"Mois";
			// 
			// labelAnnee
			// 
			this->labelAnnee->AutoSize = true;
			this->labelAnnee->Location = System::Drawing::Point(206, 51);
			this->labelAnnee->Name = L"labelAnnee";
			this->labelAnnee->Size = System::Drawing::Size(46, 16);
			this->labelAnnee->TabIndex = 6;
			this->labelAnnee->Text = L"Année";
			// 
			// labelCA
			// 
			this->labelCA->AutoSize = true;
			this->labelCA->Location = System::Drawing::Point(151, 161);
			this->labelCA->Name = L"labelCA";
			this->labelCA->Size = System::Drawing::Size(0, 16);
			this->labelCA->TabIndex = 7;
			// 
			// GestionStatistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1697, 539);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"GestionStatistique";
			this->Text = L"GestionStatistique";
			this->Load += gcnew System::EventHandler(this, &GestionStatistique::GestionStatistique_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
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
	this->labelPanierMoyen->Text = this->oStat->calcPanierMoyen();


}


private: System::Void buttonCA_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBoxMois->SelectedIndex == -1 || this->comboBoxAnnee->SelectedIndex == -1) {
		MessageBox::Show(" Veuillez entrer un mois et une année!");
	}
	else {
		this->labelCA->Text = this->oStat->calcChiffreAffaireMois(this->comboBoxMois->SelectedItem->ToString(), this->comboBoxAnnee->SelectedItem->ToString());
	}
}
};
}
