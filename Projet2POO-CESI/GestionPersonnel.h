#pragma once

namespace Projet2POOCESI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de GestionPersonnel
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
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
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
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;







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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
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
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(312, 276);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ajout membre du personnel";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &GestionPersonnel::groupBox1_Enter);
			// 
			// labelSuperieur
			// 
			this->labelSuperieur->AutoSize = true;
			this->labelSuperieur->Location = System::Drawing::Point(8, 122);
			this->labelSuperieur->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelSuperieur->Name = L"labelSuperieur";
			this->labelSuperieur->Size = System::Drawing::Size(65, 16);
			this->labelSuperieur->TabIndex = 10;
			this->labelSuperieur->Text = L"Supérieur";
			this->labelSuperieur->Click += gcnew System::EventHandler(this, &GestionPersonnel::label1_Click_3);
			// 
			// textBoxSuperieur
			// 
			this->textBoxSuperieur->Location = System::Drawing::Point(8, 142);
			this->textBoxSuperieur->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxSuperieur->Name = L"textBoxSuperieur";
			this->textBoxSuperieur->Size = System::Drawing::Size(291, 22);
			this->textBoxSuperieur->TabIndex = 9;
			// 
			// buttonEmbaucher
			// 
			this->buttonEmbaucher->Location = System::Drawing::Point(99, 240);
			this->buttonEmbaucher->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->labelDateEmbauche->Click += gcnew System::EventHandler(this, &GestionPersonnel::label1_Click_2);
			// 
			// dateTimePickerDateEmbauche
			// 
			this->dateTimePickerDateEmbauche->Location = System::Drawing::Point(8, 201);
			this->dateTimePickerDateEmbauche->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->textBoxPersoAdresse->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->labelPersoPrenom->Text = L"Prénom";
			this->labelPersoPrenom->Click += gcnew System::EventHandler(this, &GestionPersonnel::label1_Click_1);
			// 
			// textBoxPersoPrenom
			// 
			this->textBoxPersoPrenom->Location = System::Drawing::Point(167, 42);
			this->textBoxPersoPrenom->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxPersoPrenom->Name = L"textBoxPersoPrenom";
			this->textBoxPersoPrenom->Size = System::Drawing::Size(132, 22);
			this->textBoxPersoPrenom->TabIndex = 2;
			this->textBoxPersoPrenom->TextChanged += gcnew System::EventHandler(this, &GestionPersonnel::textBox1_TextChanged);
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
			this->labelPersoNom->Click += gcnew System::EventHandler(this, &GestionPersonnel::label1_Click);
			// 
			// textBoxPersoNom
			// 
			this->textBoxPersoNom->Location = System::Drawing::Point(8, 42);
			this->textBoxPersoNom->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBoxPersoNom->Name = L"textBoxPersoNom";
			this->textBoxPersoNom->Size = System::Drawing::Size(132, 22);
			this->textBoxPersoNom->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(363, 14);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(312, 382);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Afficher membre du personnel";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &GestionPersonnel::groupBox2_Enter);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(75, 75);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(133, 22);
			this->textBox5->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(115, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"label6";
			this->label6->Click += gcnew System::EventHandler(this, &GestionPersonnel::label6_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(7, 295);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dateTimePicker1->MaxDate = System::DateTime(2999, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(291, 22);
			this->dateTimePicker1->TabIndex = 11;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(89, 337);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 28);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Afficher";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &GestionPersonnel::button5_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 274);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Date d\'embauche";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(9, 238);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(289, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &GestionPersonnel::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Supérieur";
			this->label4->Click += gcnew System::EventHandler(this, &GestionPersonnel::label4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 186);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(289, 22);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Adresse";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(163, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(165, 135);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(7, 135);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 22);
			this->textBox1->TabIndex = 0;
			// 
			// GestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(743, 487);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"GestionPersonnel";
			this->Text = L"Gestion du Personnel";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_3(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonEmbaucher_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ persoNom = this->textBoxPersoNom->Text;
	String^ persoPrenom = this->textBoxPersoPrenom->Text;
	String^ persoAdresse = this->textBoxPersoAdresse->Text;
	String^ persoSuperieur = this->textBoxSuperieur->Text;
	DateTime^ persoDate = this->dateTimePickerDateEmbauche->Value;

	if (persoNom->Length == 0 || persoPrenom->Length == 0 || persoAdresse->Length == 0 || persoSuperieur->Length == 0) {
		MessageBox::Show("Une des données est vide, merci d'entrer toutes les données.");
		return;
	}
	else {
		String^ connString = "Data Source=VIVOBOOK-QUENTI\\MSSQLSERVER01;Initial Catalog=projetPOO;Integrated Security=True;Encrypt=False";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO Personnel (nom, prenom, adresse, superieur, date_embauche) VALUES ('"+persoNom+"','"+persoPrenom+"','"+persoAdresse+"','"+persoSuperieur+"','"+persoDate+"')";
		SqlCommand command(sqlQuery, % sqlConn);

		SqlDataReader^ reader = command.ExecuteReader();
	}
	
}
};
}
