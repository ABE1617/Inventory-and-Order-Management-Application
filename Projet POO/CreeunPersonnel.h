#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CreeunPersonnel
	/// </summary>
	public ref class CreeunPersonnel : public System::Windows::Forms::Form
	{
	public:
		CreeunPersonnel(void)
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
		~CreeunPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Splitter^ splitter1;






	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox5;

	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox6;
	private: System::Windows::Forms::TabPage^ tabPage1;


	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox9;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;















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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->maskedTextBox5);
			this->groupBox1->Controls->Add(this->maskedTextBox6);
			this->groupBox1->Controls->Add(this->maskedTextBox2);
			this->groupBox1->Controls->Add(this->maskedTextBox1);
			this->groupBox1->Location = System::Drawing::Point(4, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(500, 131);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &CreeunPersonnel::groupBox1_Enter);
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(17, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 24);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Telephone";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(271, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 24);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Responsable";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label6->Click += gcnew System::EventHandler(this, &CreeunPersonnel::label6_Click);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(17, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Poste occupe";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nom de l\'employe";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->Location = System::Drawing::Point(360, 47);
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->Size = System::Drawing::Size(130, 20);
			this->maskedTextBox5->TabIndex = 0;
			this->maskedTextBox5->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &CreeunPersonnel::maskedTextBox1_MaskInputRejected);
			// 
			// maskedTextBox6
			// 
			this->maskedTextBox6->Location = System::Drawing::Point(135, 97);
			this->maskedTextBox6->Mask = L"00 00 00 00 00 ";
			this->maskedTextBox6->Name = L"maskedTextBox6";
			this->maskedTextBox6->Size = System::Drawing::Size(130, 20);
			this->maskedTextBox6->TabIndex = 0;
			this->maskedTextBox6->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &CreeunPersonnel::maskedTextBox1_MaskInputRejected);
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(135, 62);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(130, 20);
			this->maskedTextBox2->TabIndex = 0;
			this->maskedTextBox2->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &CreeunPersonnel::maskedTextBox1_MaskInputRejected);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(135, 32);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(130, 20);
			this->maskedTextBox1->TabIndex = 0;
			this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &CreeunPersonnel::maskedTextBox1_MaskInputRejected);
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 430);
			this->splitter1->TabIndex = 1;
			this->splitter1->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dateTimePicker1);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->maskedTextBox7);
			this->tabPage1->Controls->Add(this->maskedTextBox9);
			this->tabPage1->Controls->Add(this->maskedTextBox3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(474, 216);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Information Professionnel";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &CreeunPersonnel::tabPage1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(123, 146);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(162, 20);
			this->dateTimePicker1->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(31, 5);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 22);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Lieu";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(16, 142);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(115, 24);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Date d\'embauche";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label13->Click += gcnew System::EventHandler(this, &CreeunPersonnel::label4_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(16, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 24);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Code Postale";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Click += gcnew System::EventHandler(this, &CreeunPersonnel::label4_Click);
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(31, 65);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 24);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Ville";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label11->Click += gcnew System::EventHandler(this, &CreeunPersonnel::label4_Click);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(16, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 24);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Adresse Professionnel";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Click += gcnew System::EventHandler(this, &CreeunPersonnel::label3_Click);
			// 
			// maskedTextBox7
			// 
			this->maskedTextBox7->Location = System::Drawing::Point(137, 103);
			this->maskedTextBox7->Mask = L"00000";
			this->maskedTextBox7->Name = L"maskedTextBox7";
			this->maskedTextBox7->Size = System::Drawing::Size(38, 20);
			this->maskedTextBox7->TabIndex = 0;
			this->maskedTextBox7->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &CreeunPersonnel::maskedTextBox1_MaskInputRejected);
			// 
			// maskedTextBox9
			// 
			this->maskedTextBox9->Location = System::Drawing::Point(137, 65);
			this->maskedTextBox9->Name = L"maskedTextBox9";
			this->maskedTextBox9->Size = System::Drawing::Size(125, 20);
			this->maskedTextBox9->TabIndex = 0;
			this->maskedTextBox9->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &CreeunPersonnel::maskedTextBox1_MaskInputRejected);
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(137, 29);
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(213, 20);
			this->maskedTextBox3->TabIndex = 0;
			this->maskedTextBox3->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &CreeunPersonnel::maskedTextBox1_MaskInputRejected);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(9, 149);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(482, 242);
			this->tabControl1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(417, 397);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 21);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Creer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreeunPersonnel::button1_Click);
			// 
			// CreeunPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(506, 430);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"CreeunPersonnel";
			this->Text = L"CreeunPersonnel";
			this->Load += gcnew System::EventHandler(this, &CreeunPersonnel::CreeunPersonnel_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void hScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void CreeunPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
