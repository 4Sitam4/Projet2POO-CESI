#pragma once

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ buttonPanierMoyenne;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerCA;
	private: System::Windows::Forms::Button^ buttonCA;



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
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->buttonPanierMoyenne = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCA = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerCA = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonPanierMoyenne);
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(227, 144);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Calc du panier moyen";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &GestionStatistique::groupBox1_Enter);
			// 
			// buttonPanierMoyenne
			// 
			this->buttonPanierMoyenne->Location = System::Drawing::Point(12, 58);
			this->buttonPanierMoyenne->Name = L"buttonPanierMoyenne";
			this->buttonPanierMoyenne->Size = System::Drawing::Size(209, 23);
			this->buttonPanierMoyenne->TabIndex = 1;
			this->buttonPanierMoyenne->Text = L"Calculer";
			this->buttonPanierMoyenne->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dateTimePickerCA);
			this->groupBox2->Controls->Add(this->buttonCA);
			this->groupBox2->Location = System::Drawing::Point(233, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(227, 144);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Calc chiffre d\'affaire";
			// 
			// buttonCA
			// 
			this->buttonCA->Location = System::Drawing::Point(6, 81);
			this->buttonCA->Name = L"buttonCA";
			this->buttonCA->Size = System::Drawing::Size(209, 23);
			this->buttonCA->TabIndex = 1;
			this->buttonCA->Text = L"Calculer";
			this->buttonCA->UseVisualStyleBackColor = true;
			// 
			// dateTimePickerCA
			// 
			this->dateTimePickerCA->CustomFormat = L"";
			this->dateTimePickerCA->Location = System::Drawing::Point(6, 42);
			this->dateTimePickerCA->Name = L"dateTimePickerCA";
			this->dateTimePickerCA->Size = System::Drawing::Size(209, 20);
			this->dateTimePickerCA->TabIndex = 2;
			this->dateTimePickerCA->Value = System::DateTime(2023, 12, 8, 15, 56, 48, 0);
			// 
			// GestionStatistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1273, 438);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"GestionStatistique";
			this->Text = L"GestionStatistique";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
