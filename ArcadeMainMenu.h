#pragma once
//#pragma comment(lib, "winmm.lib")
#include "stdafx.h"
#include "allgames.h"
//#include "gamesbydifficulty.h"
#include "about.h"

namespace ArcadeMenu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ArcadeMainMenu
	/// </summary>
	public ref class ArcadeMainMenu : public System::Windows::Forms::Form
	{
	public:
		ArcadeMainMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ArcadeMainMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label3;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ArcadeMainMenu::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 390);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 26);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Team Alpha";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label2->Location = System::Drawing::Point(57, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(705, 103);
			this->label2->TabIndex = 6;
			this->label2->Text = L"ARCADE SYSTEM";
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(112, 181);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(287, 42);
			this->button2->TabIndex = 7;
			this->button2->Text = L"ALL GAMES";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ArcadeMainMenu::button2_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(112, 252);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(287, 42);
			this->button4->TabIndex = 10;
			this->button4->Text = L"EXIT";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ArcadeMainMenu::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(57, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(705, 103);
			this->label3->TabIndex = 11;
			this->label3->Text = L"ARCADE SYSTEM";
			// 
			// ArcadeMainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(511, 418);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Name = L"ArcadeMainMenu";
			this->Text = L"ArcadeMainMenu";
			this->Load += gcnew System::EventHandler(this, &ArcadeMainMenu::ArcadeMainMenu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ArcadeMainMenu_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	// EXIT
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	// ALL GAMES
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		allgames^ AllGames = gcnew allgames();
		AllGames->Show();
	}

	// ABOUT
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		about^ About = gcnew about();
		About->Show();
	}
};
}
