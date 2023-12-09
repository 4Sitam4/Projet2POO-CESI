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
	/// Description résumée de FormSeuilDeReappro
	/// </summary>
	public ref class FormSeuilDeReappro : public System::Windows::Forms::Form
	{
	public:
		FormSeuilDeReappro(void)
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
		~FormSeuilDeReappro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ labelSeuilDeReappro;
	private: NS_Comp_Statistique::Statistique^ oStat;
	private: System::Data::DataSet^ oDs;
	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->labelSeuilDeReappro = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 35);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(723, 496);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormSeuilDeReappro::dataGridView1_CellContentClick);
			// 
			// labelSeuilDeReappro
			// 
			this->labelSeuilDeReappro->AutoSize = true;
			this->labelSeuilDeReappro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->labelSeuilDeReappro->Location = System::Drawing::Point(8, 9);
			this->labelSeuilDeReappro->Name = L"labelSeuilDeReappro";
			this->labelSeuilDeReappro->Size = System::Drawing::Size(323, 20);
			this->labelSeuilDeReappro->TabIndex = 1;
			this->labelSeuilDeReappro->Text = L"";
			// 
			// FormSeuilDeReappro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(747, 543);
			this->Controls->Add(this->labelSeuilDeReappro);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"FormSeuilDeReappro";
			this->Text = L"";
			this->Load += gcnew System::EventHandler(this, &FormSeuilDeReappro::FormSeuilDeReappro_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void FormSeuilDeReappro_Load(System::Object^ sender, System::EventArgs^ e) {

		this->oStat = gcnew NS_Comp_Statistique::Statistique();

		if (this->Text == "Seuil de réapprovisionnement") {
			this->labelSeuilDeReappro->Text = L"Produit sous le seuil de réapprovisionnement";
			this->oDs = this->oStat->calcSeuilReappro("Resultat");
		}
		else if (this->Text == "10 meilleures ventes") {
			this->labelSeuilDeReappro->Text = L"Le top 10 des ventes";
			this->oDs = this->oStat->calcTop10("Resultat");
		}
		else if (this->Text == "10 pires ventes") {
			this->labelSeuilDeReappro->Text = "Les 10 pires ventes";
			this->oDs = this->oStat->calcLast10("Resultat");
		}
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Resultat";
	}
	};
}
