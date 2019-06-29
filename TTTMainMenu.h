#pragma once
#include "stdafx.h"
#include "TTTSubMenu.h"
#include "TTTHowTo.h"

namespace ArcadeMenu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TTTMainMenu
	/// </summary>
	public ref class TTTMainMenu : public System::Windows::Forms::Form
	{
	public:
		TTTMainMenu(void)
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
		~TTTMainMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button1;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer2;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer3;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TTTMainMenu::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->axWindowsMediaPlayer3 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->axWindowsMediaPlayer2 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(363, 534);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(570, 129);
			this->button2->TabIndex = 1;
			this->button2->Text = L"HOW TO";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &TTTMainMenu::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(20, 138);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1284, 204);
			this->label1->TabIndex = 3;
			this->label1->Text = L"X  TIC   TAC   TOE  O";
			this->label1->Click += gcnew System::EventHandler(this, &TTTMainMenu::label1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(363, 678);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(570, 129);
			this->button3->TabIndex = 4;
			this->button3->Text = L"RETURN TO MAIN MENU";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &TTTMainMenu::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(363, 384);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(570, 129);
			this->button1->TabIndex = 5;
			this->button1->Text = L"NEW GAME";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TTTMainMenu::button1_Click_1);
			// 
			// axWindowsMediaPlayer3
			// 
			this->axWindowsMediaPlayer3->Enabled = true;
			this->axWindowsMediaPlayer3->Location = System::Drawing::Point(978, 712);
			this->axWindowsMediaPlayer3->Name = L"axWindowsMediaPlayer3";
			this->axWindowsMediaPlayer3->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer3.OcxState")));
			this->axWindowsMediaPlayer3->Size = System::Drawing::Size(251, 78);
			this->axWindowsMediaPlayer3->TabIndex = 8;
			// 
			// axWindowsMediaPlayer2
			// 
			this->axWindowsMediaPlayer2->Enabled = true;
			this->axWindowsMediaPlayer2->Location = System::Drawing::Point(978, 556);
			this->axWindowsMediaPlayer2->Name = L"axWindowsMediaPlayer2";
			this->axWindowsMediaPlayer2->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer2.OcxState")));
			this->axWindowsMediaPlayer2->Size = System::Drawing::Size(251, 78);
			this->axWindowsMediaPlayer2->TabIndex = 7;
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(966, 410);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(251, 78);
			this->axWindowsMediaPlayer1->TabIndex = 6;
			// 
			// TTTMainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1346, 851);
			this->Controls->Add(this->axWindowsMediaPlayer3);
			this->Controls->Add(this->axWindowsMediaPlayer2);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"TTTMainMenu";
			this->Text = L"TTTMainMenu";
			this->Load += gcnew System::EventHandler(this, &TTTMainMenu::TTTMainMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void TTTMainMenu_Load(System::Object^  sender, System::EventArgs^  e)
	{

	}

	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
	{

		axWindowsMediaPlayer1->Ctlcontrols->play();


		TTTSubMenu^ TTTSM = gcnew TTTSubMenu(this);
		this->Hide();  // this hides the current window (does not delete its existance - it is just "invisible")
		TTTSM->Show();


	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
{

	axWindowsMediaPlayer1->Ctlcontrols->play();


	TTTHowTo^ TTTHT = gcnew TTTHowTo();
	//this->Close(); // this closes the menu JONATHAN CAN USE THIS FOR EXIT!!
	//this->Hide();  // if you hide then you can't come back unless you pass this instance which has been created
	TTTHT->Show();
	//this->Close();	//TTTHT->Show();


}


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
{
	axWindowsMediaPlayer1->Ctlcontrols->play();


	this->Hide();
	//otherform->Show();

}



};

}
