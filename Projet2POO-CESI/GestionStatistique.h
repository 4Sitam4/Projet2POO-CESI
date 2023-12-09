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
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerCA;
	private: System::Windows::Forms::Button^ buttonCA;
	private: System::Windows::Forms::Label^ labelPanierMoyen;




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
			this->dateTimePickerCA = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonCA = (gcnew System::Windows::Forms::Button());
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
			this->groupBox2->Controls->Add(this->dateTimePickerCA);
			this->groupBox2->Controls->Add(this->buttonCA);
			this->groupBox2->Location = System::Drawing::Point(311, 0);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(303, 177);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Calc chiffre d\'affaire";
			// 
			// dateTimePickerCA
			// 
			this->dateTimePickerCA->CustomFormat = L"";
			this->dateTimePickerCA->Location = System::Drawing::Point(8, 52);
			this->dateTimePickerCA->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePickerCA->Name = L"dateTimePickerCA";
			this->dateTimePickerCA->Size = System::Drawing::Size(277, 22);
			this->dateTimePickerCA->TabIndex = 2;
			this->dateTimePickerCA->Value = System::DateTime(2023, 12, 8, 15, 56, 48, 0);
			// 
			// buttonCA
			// 
			this->buttonCA->Location = System::Drawing::Point(8, 100);
			this->buttonCA->Margin = System::Windows::Forms::Padding(4);
			this->buttonCA->Name = L"buttonCA";
			this->buttonCA->Size = System::Drawing::Size(279, 28);
			this->buttonCA->TabIndex = 1;
			this->buttonCA->Text = L"Calculer";
			this->buttonCA->UseVisualStyleBackColor = true;
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
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void GestionStatistique_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oStat = gcnew NS_Comp_Statistique::Statistique();
	}


private: System::Void buttonPanierMoyenne_Click(System::Object^ sender, System::EventArgs^ e) {
	this->labelPanierMoyen->Text = this->oStat->calcPanierMoyen();


}

};
}
