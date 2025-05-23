#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ Motdepasse_txt;
	private: System::Windows::Forms::Label^ Utilisateur;
	private: System::Windows::Forms::Label^ Motdepasse;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Motdepasse_txt = (gcnew System::Windows::Forms::TextBox());
			this->Utilisateur = (gcnew System::Windows::Forms::Label());
			this->Motdepasse = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Location = System::Drawing::Point(91, 203);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 27);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Se connecter";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(100, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 20);
			this->textBox1->TabIndex = 1;
			// 
			// Motdepasse_txt
			// 
			this->Motdepasse_txt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Motdepasse_txt->Location = System::Drawing::Point(100, 126);
			this->Motdepasse_txt->Name = L"Motdepasse_txt";
			this->Motdepasse_txt->Size = System::Drawing::Size(117, 20);
			this->Motdepasse_txt->TabIndex = 1;
			// 
			// Utilisateur
			// 
			this->Utilisateur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Utilisateur->Location = System::Drawing::Point(19, 62);
			this->Utilisateur->Name = L"Utilisateur";
			this->Utilisateur->Size = System::Drawing::Size(75, 22);
			this->Utilisateur->TabIndex = 2;
			this->Utilisateur->Text = L"Utilisateur";
			// 
			// Motdepasse
			// 
			this->Motdepasse->Location = System::Drawing::Point(19, 128);
			this->Motdepasse->Name = L"Motdepasse";
			this->Motdepasse->Size = System::Drawing::Size(75, 20);
			this->Motdepasse->TabIndex = 2;
			this->Motdepasse->Text = L"Mot de passe";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->Motdepasse);
			this->Controls->Add(this->Utilisateur);
			this->Controls->Add(this->Motdepasse_txt);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
