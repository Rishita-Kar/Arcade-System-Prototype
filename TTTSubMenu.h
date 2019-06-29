#pragma once
#include "TTTGameEZ.h"

namespace ArcadeMenu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TTTSubMenu
	/// </summary>
	public ref class TTTSubMenu : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Form ^ otherform;
	public:
		TTTSubMenu(System::Windows::Forms::Form ^ o)
		{
			otherform = o;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TTTSubMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer2;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TTTSubMenu::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->axWindowsMediaPlayer2 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer2))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Rockwell", 26.14286F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(387, 326);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(571, 129);
			this->button2->TabIndex = 9;
			this->button2->Text = L"PVP";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &TTTSubMenu::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.14286F, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(387, 488);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(571, 129);
			this->button3->TabIndex = 10;
			this->button3->Text = L"RETURN TO MENU";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &TTTSubMenu::button3_Click);
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(1006, 343);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(239, 76);
			this->axWindowsMediaPlayer1->TabIndex = 11;
			// 
			// axWindowsMediaPlayer2
			// 
			this->axWindowsMediaPlayer2->Enabled = true;
			this->axWindowsMediaPlayer2->Location = System::Drawing::Point(1006, 513);
			this->axWindowsMediaPlayer2->Name = L"axWindowsMediaPlayer2";
			this->axWindowsMediaPlayer2->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer2.OcxState")));
			this->axWindowsMediaPlayer2->Size = System::Drawing::Size(239, 76);
			this->axWindowsMediaPlayer2->TabIndex = 12;
			// 
			// TTTSubMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1347, 924);
			this->Controls->Add(this->axWindowsMediaPlayer2);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Name = L"TTTSubMenu";
			this->Text = L"TTTSubMenu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		/*
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		TTTGameEZ^ TTTEZ = gcnew TTTGameEZ();
		this->Hide();  // this hides the current window (does not delete its existance - it is just "invisible")
		TTTEZ->Show();

	}
	private: System::Void TTTSubMenu_Load(System::Object^  sender, System::EventArgs^  e) {
	}*/






	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
	{

		axWindowsMediaPlayer1->Ctlcontrols->play();

		this->Hide();
		otherform->Show();

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{

		axWindowsMediaPlayer1->Ctlcontrols->play();
	
	TTTGameEZ^ TTTEZ = gcnew TTTGameEZ();
	//this->Hide();  // this hides the current window (does not delete its existance - it is just "invisible")
	TTTEZ->Show();


	}

};
}
