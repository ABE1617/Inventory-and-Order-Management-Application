#pragma once
#include "SuppClient.h"
#include"AddClient.h"
#include"ListeClient.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Client
	/// </summary>
	public ref class Client : public System::Windows::Forms::Form
	{
	public:
		Client(void)
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
		~Client()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 96);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Client::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(293, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 96);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Client::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(293, 216);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 96);
			this->button3->TabIndex = 0;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Client::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(28, 226);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 96);
			this->button4->TabIndex = 0;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(45, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ajouter un client";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Client::label1_Click_1);
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(306, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Supprimer un client";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &Client::label1_Click_1);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(45, 336);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Modifier un client";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &Client::label1_Click_1);
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(306, 336);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 19);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Liste des clients";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &Client::label1_Click_1);
			// 
			// Client
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 402);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Client";
			this->Text = L"Client";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void maskedTextBox5_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	AddClient^ ACT = gcnew AddClient();
	ACT->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	SuppClient^ SPC = gcnew SuppClient();
	SPC->ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ListeClient^ LCT = gcnew ListeClient();
	LCT->ShowDialog();
}
};
}
