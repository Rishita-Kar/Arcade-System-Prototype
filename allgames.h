#pragma once
#include "C4MainMenu.h"
#include "TTTMainMenu.h"

namespace ArcadeMenu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for allgames
	/// </summary>
	public ref class allgames : public System::Windows::Forms::Form
	{
	public:
		allgames(void)
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
		~allgames()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(allgames::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(157, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(258, 57);
			this->button1->TabIndex = 0;
			this->button1->Text = L"TIC-TAC-TOE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &allgames::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Location = System::Drawing::Point(157, 173);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(258, 57);
			this->button2->TabIndex = 1;
			this->button2->Text = L"CONNECT 4";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &allgames::button2_Click);
			// 
			// allgames
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(573, 295);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"allgames";
			this->Text = L"allgames";
			this->ResumeLayout(false);

		}
#pragma endregion
	// TIC-TAC-TOE
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		TTTMainMenu^ TTTMM = gcnew TTTMainMenu();
		TTTMM->Show();
	}

	// CONNECT 4
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		C4MainMenu^ C4MM = gcnew C4MainMenu();
		C4MM->Show();
	}
	};
}
