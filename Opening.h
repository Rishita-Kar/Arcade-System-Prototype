#pragma once
#include "ArcadeMainMenu.h"

namespace ArcadeMenu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Opening
	/// </summary>
	public ref class Opening : public System::Windows::Forms::Form
	{
	public:
		Opening(void)
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
		~Opening()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	private: System::Windows::Forms::Button^  button2;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Opening::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(21228, 32767);
			this->button1->Margin = System::Windows::Forms::Padding(229, 233, 229, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(24378, 7854);
			this->button1->TabIndex = 0;
			this->button1->Text = L"LAUNCH";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(29, 39);
			this->axWindowsMediaPlayer1->Margin = System::Windows::Forms::Padding(229, 233, 229, 233);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(944, 751);
			this->axWindowsMediaPlayer1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(316, 820);
			this->button2->Margin = System::Windows::Forms::Padding(11, 11, 11, 11);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(364, 101);
			this->button2->TabIndex = 2;
			this->button2->Text = L"LAUNCH";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Opening::button2_Click_1);
			// 
			// Opening
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1000, 950);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(229, 233, 229, 233);
			this->Name = L"Opening";
			this->Text = L"Opening";
			this->Load += gcnew System::EventHandler(this, &Opening::Opening_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Opening_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		axWindowsMediaPlayer1->Ctlcontrols->stop();
		ArcadeMainMenu^ AMM = gcnew ArcadeMainMenu();
		AMM->Show();
		this->Hide();
	}
	};
}

