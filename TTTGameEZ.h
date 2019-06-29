#pragma once
#include "XWins.h"
#include "Owins.h"
#include "Tie.h"
//#include "TTTMainMenu.h"

namespace ArcadeMenu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class TTTGameEZ : public System::Windows::Forms::Form
	{
	public:
		TTTGameEZ(void)
		{
			InitializeComponent();

		}

	protected:

		~TTTGameEZ()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:










	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  A2;
	private: System::Windows::Forms::Button^  A3;
	private: System::Windows::Forms::Button^  B1;
	private: System::Windows::Forms::Button^  B2;
	private: System::Windows::Forms::Button^  B3;
	private: System::Windows::Forms::Button^  C1;
	private: System::Windows::Forms::Button^  C2;
	private: System::Windows::Forms::Button^  C3;








	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  A1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;





	protected:



	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TTTGameEZ::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->A2 = (gcnew System::Windows::Forms::Button());
			this->A3 = (gcnew System::Windows::Forms::Button());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->C1 = (gcnew System::Windows::Forms::Button());
			this->C2 = (gcnew System::Windows::Forms::Button());
			this->C3 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->A1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::MidnightBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(73, 222);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(331, 80);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Player 1 (X)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &TTTGameEZ::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::MidnightBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(73, 336);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(345, 80);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Player 2 (O)";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// A2
			// 
			this->A2->BackColor = System::Drawing::Color::Transparent;
			this->A2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A2->Location = System::Drawing::Point(988, 176);
			this->A2->Margin = System::Windows::Forms::Padding(6);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(154, 146);
			this->A2->TabIndex = 13;
			this->A2->UseVisualStyleBackColor = false;
			this->A2->Click += gcnew System::EventHandler(this, &TTTGameEZ::A2_Click);
			// 
			// A3
			// 
			this->A3->BackColor = System::Drawing::Color::Transparent;
			this->A3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A3->Location = System::Drawing::Point(1212, 172);
			this->A3->Margin = System::Windows::Forms::Padding(6);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(154, 146);
			this->A3->TabIndex = 14;
			this->A3->UseVisualStyleBackColor = false;
			this->A3->Click += gcnew System::EventHandler(this, &TTTGameEZ::A3_Click);
			// 
			// B1
			// 
			this->B1->BackColor = System::Drawing::Color::Transparent;
			this->B1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B1->Location = System::Drawing::Point(781, 401);
			this->B1->Margin = System::Windows::Forms::Padding(6);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(154, 146);
			this->B1->TabIndex = 15;
			this->B1->UseVisualStyleBackColor = false;
			this->B1->Click += gcnew System::EventHandler(this, &TTTGameEZ::B1_Click);
			// 
			// B2
			// 
			this->B2->BackColor = System::Drawing::Color::Transparent;
			this->B2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B2->Location = System::Drawing::Point(988, 397);
			this->B2->Margin = System::Windows::Forms::Padding(6);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(154, 146);
			this->B2->TabIndex = 16;
			this->B2->UseVisualStyleBackColor = false;
			this->B2->Click += gcnew System::EventHandler(this, &TTTGameEZ::B2_Click);
			// 
			// B3
			// 
			this->B3->BackColor = System::Drawing::Color::Transparent;
			this->B3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->B3->Location = System::Drawing::Point(1208, 397);
			this->B3->Margin = System::Windows::Forms::Padding(6);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(154, 146);
			this->B3->TabIndex = 17;
			this->B3->UseVisualStyleBackColor = false;
			this->B3->Click += gcnew System::EventHandler(this, &TTTGameEZ::B3_Click);
			// 
			// C1
			// 
			this->C1->BackColor = System::Drawing::Color::Transparent;
			this->C1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C1->Location = System::Drawing::Point(773, 624);
			this->C1->Margin = System::Windows::Forms::Padding(6);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(154, 146);
			this->C1->TabIndex = 18;
			this->C1->UseVisualStyleBackColor = false;
			this->C1->Click += gcnew System::EventHandler(this, &TTTGameEZ::C1_Click);
			// 
			// C2
			// 
			this->C2->BackColor = System::Drawing::Color::Transparent;
			this->C2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C2->Location = System::Drawing::Point(988, 624);
			this->C2->Margin = System::Windows::Forms::Padding(6);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(154, 146);
			this->C2->TabIndex = 19;
			this->C2->UseVisualStyleBackColor = false;
			this->C2->Click += gcnew System::EventHandler(this, &TTTGameEZ::C2_Click);
			// 
			// C3
			// 
			this->C3->BackColor = System::Drawing::Color::Transparent;
			this->C3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->C3->Location = System::Drawing::Point(1208, 620);
			this->C3->Margin = System::Windows::Forms::Padding(6);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(154, 146);
			this->C3->TabIndex = 20;
			this->C3->UseVisualStyleBackColor = false;
			this->C3->Click += gcnew System::EventHandler(this, &TTTGameEZ::C3_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Chocolate;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(22, 543);
			this->button10->Margin = System::Windows::Forms::Padding(6);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(532, 129);
			this->button10->TabIndex = 21;
			this->button10->Text = L"New Game";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &TTTGameEZ::button10_Click);
			// 
			// button11
			// 
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(20, 718);
			this->button11->Margin = System::Windows::Forms::Padding(6);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(532, 129);
			this->button11->TabIndex = 22;
			this->button11->Text = L"Exit Game";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &TTTGameEZ::button11_Click);
			// 
			// A1
			// 
			this->A1->BackColor = System::Drawing::Color::Transparent;
			this->A1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A1->Location = System::Drawing::Point(774, 176);
			this->A1->Margin = System::Windows::Forms::Padding(6);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(154, 146);
			this->A1->TabIndex = 0;
			this->A1->UseVisualStyleBackColor = false;
			this->A1->Click += gcnew System::EventHandler(this, &TTTGameEZ::A1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(781, 175);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 142);
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(992, 175);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(150, 142);
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(1216, 172);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(150, 142);
			this->pictureBox3->TabIndex = 25;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(777, 401);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(150, 142);
			this->pictureBox4->TabIndex = 26;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(992, 401);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(150, 142);
			this->pictureBox5->TabIndex = 27;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(1212, 397);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(150, 142);
			this->pictureBox6->TabIndex = 28;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Location = System::Drawing::Point(777, 620);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(150, 142);
			this->pictureBox7->TabIndex = 29;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Location = System::Drawing::Point(992, 624);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(150, 142);
			this->pictureBox8->TabIndex = 30;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Location = System::Drawing::Point(1208, 620);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(150, 142);
			this->pictureBox9->TabIndex = 31;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox10->Location = System::Drawing::Point(774, 175);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(154, 146);
			this->pictureBox10->TabIndex = 32;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox11->Location = System::Drawing::Point(988, 175);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(154, 146);
			this->pictureBox11->TabIndex = 33;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox12->Location = System::Drawing::Point(1212, 172);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(154, 146);
			this->pictureBox12->TabIndex = 34;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox13->Location = System::Drawing::Point(777, 401);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(154, 146);
			this->pictureBox13->TabIndex = 35;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox14->Location = System::Drawing::Point(988, 397);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(154, 146);
			this->pictureBox14->TabIndex = 36;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox15->Location = System::Drawing::Point(1208, 397);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(154, 146);
			this->pictureBox15->TabIndex = 37;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox16->Location = System::Drawing::Point(774, 624);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(154, 146);
			this->pictureBox16->TabIndex = 38;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox17->Location = System::Drawing::Point(988, 624);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(154, 146);
			this->pictureBox17->TabIndex = 39;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox18->Location = System::Drawing::Point(1208, 620);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(154, 146);
			this->pictureBox18->TabIndex = 40;
			this->pictureBox18->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(462, 222);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 80);
			this->label3->TabIndex = 41;
			this->label3->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(462, 336);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 80);
			this->label4->TabIndex = 42;
			this->label4->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 36, System::Drawing::FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Salmon;
			this->label5->Location = System::Drawing::Point(101, 85);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(418, 102);
			this->label5->TabIndex = 43;
			this->label5->Text = L"X SCORES O";
			// 
			// TTTGameEZ
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1529, 946);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"TTTGameEZ";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TTTGameEZ";
			this->Load += gcnew System::EventHandler(this, &TTTGameEZ::TTTGameEZ_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		//THESE ARE THE PUBLIC VARIABLES
		const int maxrow = 3;
		const int maxcol = 3;
		bool TTTnewgame = true;
		bool winner = false;
		bool turn = true; // When it's true then it's X and it's O when it's false
		int turncount = 0; //counter of moves (will call a tie when it's 9)
		array <String^, 2>^ TTTarray = gcnew array <String^, 2>(maxrow, maxcol);

	private: System::Void TTTGameEZ_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void A1_Click(System::Object^  sender, System::EventArgs^  e) {
		//when it is not a new game and it's X's turn 
		if (TTTnewgame == false && turn == true) {
			A1->Hide();
			TTTarray[2, 2] = "X";
			pictureBox1->Show();

			// check horizontal win condition
			if (TTTarray[2, 1] == "X") {
				if (TTTarray[2, 0] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;


				}
			}

			//check vertical win condition
			if (TTTarray[1, 2] == "X") {
				if (TTTarray[0, 2] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			// check diagonal win condition
			if (TTTarray[1, 1] == "X") {
				if (TTTarray[0, 0] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			goto Changeturn;
		}

		if (TTTnewgame == false && turn == false) {
			A1->Hide();
			TTTarray[2, 2] = "O";
			pictureBox10->Show();

			// check horizontal win condition
			if (TTTarray[2, 1] == "O") {
				if (TTTarray[2, 0] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[1, 2] == "O") {
				if (TTTarray[0, 2] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			// check diagonal win condition
			if (TTTarray[1, 1] == "O") {
				if (TTTarray[0, 0] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			goto Changeturn;

		}
		//////////////////////////////GOTO STATEMENT///////////////////////////
	Changeturn:
		if (turn == true)
			turn = false;
		else if (turn == false)
			turn = true;

		int EmptySpaceCounter = 0;
		for (int CheckEmptyRow = 0; CheckEmptyRow < maxrow; CheckEmptyRow++) {
			for (int CheckEmptyCol = 0; CheckEmptyCol < maxcol; CheckEmptyCol++) {
				if (TTTarray[CheckEmptyRow, CheckEmptyCol] != "E")
					EmptySpaceCounter++;

			}
		}

		if (TTTnewgame == false && EmptySpaceCounter == 9) {
			TTTnewgame = true;
			Tie^ tie = gcnew Tie();
			tie->Show();
		}

	}

	private: System::Void A2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (TTTnewgame == false && turn == true) {
			A2->Hide();
			TTTarray[2, 1] = "X";
			pictureBox2->Show();

			// check horizontal win condition
			if (TTTarray[2, 2] == "X") {
				if (TTTarray[2, 0] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[1, 1] == "X") {
				if (TTTarray[0, 1] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			goto Changeturn;
		}

		if (TTTnewgame == false && turn == false) {
			A2->Hide();
			TTTarray[2, 1] = "O";
			pictureBox11->Show();

			// check horizontal win condition
			if (TTTarray[2, 2] == "O") {
				if (TTTarray[2, 0] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[1, 1] == "O") {
				if (TTTarray[0, 1] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			goto Changeturn;
		}

	Changeturn:
		if (turn == true)
			turn = false;
		else if (turn == false)
			turn = true;

		int EmptySpaceCounter = 0;
		for (int CheckEmptyRow = 0; CheckEmptyRow < maxrow; CheckEmptyRow++) {
			for (int CheckEmptyCol = 0; CheckEmptyCol < maxcol; CheckEmptyCol++) {
				if (TTTarray[CheckEmptyRow, CheckEmptyCol] != "E")
					EmptySpaceCounter++;
			}
		}

		if (TTTnewgame == false && EmptySpaceCounter == 9) {
			TTTnewgame = true;
			Tie^ tie = gcnew Tie();
			tie->Show();
		}
	}
	private: System::Void A3_Click(System::Object^  sender, System::EventArgs^  e) {
		//when it is not a new game and it's X's turn 
		if (TTTnewgame == false && turn == true) {
			A3->Hide();
			TTTarray[2, 0] = "X";
			pictureBox3->Show();

			// check horizontal win condition
			if (TTTarray[2, 1] == "X") {
				if (TTTarray[2, 2] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[1, 0] == "X") {
				if (TTTarray[0, 0] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			// check diagonal win condition
			if (TTTarray[1, 1] == "X") {
				if (TTTarray[0, 2] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			goto Changeturn;
		}

		if (TTTnewgame == false && turn == false) {
			A3->Hide();
			TTTarray[2, 0] = "O";
			pictureBox12->Show();

			// check horizontal win condition
			if (TTTarray[2, 1] == "O") {
				if (TTTarray[2, 2] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[1, 0] == "O") {
				if (TTTarray[0, 0] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			// check diagonal win condition
			if (TTTarray[1, 1] == "O") {
				if (TTTarray[0, 2] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			goto Changeturn;

		}
		//////////////////////////////GOTO STATEMENT///////////////////////////
	Changeturn:
		if (turn == true)
			turn = false;
		else if (turn == false)
			turn = true;

		int EmptySpaceCounter = 0;
		for (int CheckEmptyRow = 0; CheckEmptyRow < maxrow; CheckEmptyRow++) {
			for (int CheckEmptyCol = 0; CheckEmptyCol < maxcol; CheckEmptyCol++) {
				if (TTTarray[CheckEmptyRow, CheckEmptyCol] != "E")
					EmptySpaceCounter++;
			}
		}

		if (TTTnewgame == false && EmptySpaceCounter == 9) {
			TTTnewgame = true;
			Tie^ tie = gcnew Tie();
			tie->Show();
		}
	}
	private: System::Void B1_Click(System::Object^  sender, System::EventArgs^  e) {
		//when it is not a new game and it's X's turn 
		if (TTTnewgame == false && turn == true) {
			B1->Hide();
			TTTarray[1, 2] = "X";
			pictureBox4->Show();

			// check horizontal win condition
			if (TTTarray[1, 1] == "X") {
				if (TTTarray[1, 0] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[2, 2] == "X") {
				if (TTTarray[0, 2] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			goto Changeturn;
		}

		if (TTTnewgame == false && turn == false) {
			B1->Hide();
			TTTarray[1, 2] = "O";
			pictureBox13->Show();

			// check horizontal win condition
			if (TTTarray[1, 1] == "O") {
				if (TTTarray[1, 0] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[2, 2] == "O") {
				if (TTTarray[0, 2] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			goto Changeturn;

		}
		//////////////////////////////GOTO STATEMENT///////////////////////////
	Changeturn:
		if (turn == true)
			turn = false;
		else if (turn == false)
			turn = true;

		int EmptySpaceCounter = 0;
		for (int CheckEmptyRow = 0; CheckEmptyRow < maxrow; CheckEmptyRow++) {
			for (int CheckEmptyCol = 0; CheckEmptyCol < maxcol; CheckEmptyCol++) {
				if (TTTarray[CheckEmptyRow, CheckEmptyCol] != "E")
					EmptySpaceCounter++;
			}
		}

		if (TTTnewgame == false && EmptySpaceCounter == 9) {
			TTTnewgame = true;
			Tie^ tie = gcnew Tie();
			tie->Show();
		}
	}

	private: System::Void B2_Click(System::Object^  sender, System::EventArgs^  e) {
		//when it is not a new game and it's X's turn 
		if (TTTnewgame == false && turn == true) {
			B2->Hide();
			TTTarray[1, 1] = "X";
			pictureBox5->Show();

			// check horizontal win condition
			if (TTTarray[1, 2] == "X") {
				if (TTTarray[1, 0] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[2, 1] == "X") {
				if (TTTarray[0, 1] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			// check diagonal win condition
			if (TTTarray[2, 0] == "X") {
				if (TTTarray[0, 2] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			if (TTTarray[2, 2] == "X") {
				if (TTTarray[0, 0] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			goto Changeturn;
		}

		if (TTTnewgame == false && turn == false) {
			B2->Hide();
			TTTarray[1, 1] = "O";
			pictureBox14->Show();

			// check horizontal win condition
			if (TTTarray[1, 2] == "O") {
				if (TTTarray[1, 0] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[2, 1] == "O") {
				if (TTTarray[0, 1] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			// check diagonal win condition
			if (TTTarray[2, 0] == "O") {
				if (TTTarray[0, 2] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			if (TTTarray[2, 2] == "O") {
				if (TTTarray[0, 0] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			goto Changeturn;

		}
		//////////////////////////////GOTO STATEMENT///////////////////////////
	Changeturn:
		if (turn == true)
			turn = false;
		else if (turn == false)
			turn = true;

		int EmptySpaceCounter = 0;
		for (int CheckEmptyRow = 0; CheckEmptyRow < maxrow; CheckEmptyRow++) {
			for (int CheckEmptyCol = 0; CheckEmptyCol < maxcol; CheckEmptyCol++) {
				if (TTTarray[CheckEmptyRow, CheckEmptyCol] != "E")
					EmptySpaceCounter++;
			}
		}

		if (TTTnewgame == false && EmptySpaceCounter == 9) {
			TTTnewgame = true;
			Tie^ tie = gcnew Tie();
			tie->Show();
		}
	}
	private: System::Void B3_Click(System::Object^  sender, System::EventArgs^  e) {
		//when it is not a new game and it's X's turn 
		if (TTTnewgame == false && turn == true) {
			B3->Hide();
			TTTarray[1, 0] = "X";
			pictureBox6->Show();

			// check horizontal win condition
			if (TTTarray[1, 2] == "X") {
				if (TTTarray[1, 1] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[2, 0] == "X") {
				if (TTTarray[0, 0] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			goto Changeturn;
		}

		if (TTTnewgame == false && turn == false) {
			B3->Hide();
			TTTarray[1, 0] = "O";
			pictureBox15->Show();

			// check horizontal win condition
			if (TTTarray[1, 1] == "O") {
				if (TTTarray[1, 2] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[2, 0] == "O") {
				if (TTTarray[0, 0] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			goto Changeturn;

		}
		//////////////////////////////GOTO STATEMENT///////////////////////////
	Changeturn:
		if (turn == true)
			turn = false;
		else if (turn == false)
			turn = true;

		int EmptySpaceCounter = 0;
		for (int CheckEmptyRow = 0; CheckEmptyRow < maxrow; CheckEmptyRow++) {
			for (int CheckEmptyCol = 0; CheckEmptyCol < maxcol; CheckEmptyCol++) {
				if (TTTarray[CheckEmptyRow, CheckEmptyCol] != "E")
					EmptySpaceCounter++;
			}
		}

		if (TTTnewgame == false && EmptySpaceCounter == 9) {
			TTTnewgame = true;
			Tie^ tie = gcnew Tie();
			tie->Show();
		}
	}
	private: System::Void C1_Click(System::Object^  sender, System::EventArgs^  e) {
		//when it is not a new game and it's X's turn 
		if (TTTnewgame == false && turn == true) {
			C1->Hide();
			TTTarray[0, 2] = "X";
			pictureBox7->Show();

			// check horizontal win condition
			if (TTTarray[0, 1] == "X") {
				if (TTTarray[0, 0] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;

				}
			}

			//check vertical win condition
			if (TTTarray[1, 2] == "X") {
				if (TTTarray[2, 2] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			// check diagonal win condition
			if (TTTarray[1, 1] == "X") {
				if (TTTarray[2, 0] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			goto Changeturn;
		}

		if (TTTnewgame == false && turn == false) {
			C1->Hide();
			TTTarray[0, 2] = "O";
			pictureBox16->Show();

			// check horizontal win condition
			if (TTTarray[0, 1] == "O") {
				if (TTTarray[0, 0] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[1, 2] == "O") {
				if (TTTarray[2, 2] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			// check diagonal win condition
			if (TTTarray[1, 1] == "O") {
				if (TTTarray[2, 0] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			goto Changeturn;

		}
		//////////////////////////////GOTO STATEMENT///////////////////////////
	Changeturn:
		if (turn == true)
			turn = false;
		else if (turn == false)
			turn = true;

		int EmptySpaceCounter = 0;
		for (int CheckEmptyRow = 0; CheckEmptyRow < maxrow; CheckEmptyRow++) {
			for (int CheckEmptyCol = 0; CheckEmptyCol < maxcol; CheckEmptyCol++) {
				if (TTTarray[CheckEmptyRow, CheckEmptyCol] != "E")
					EmptySpaceCounter++;
			}
		}

		if (TTTnewgame == false && EmptySpaceCounter == 9) {
			TTTnewgame = true;
			Tie^ tie = gcnew Tie();
			tie->Show();
		}
	}
	private: System::Void C2_Click(System::Object^  sender, System::EventArgs^  e) {
		//when it is not a new game and it's X's turn 
		if (TTTnewgame == false && turn == true) {
			C2->Hide();
			TTTarray[0, 1] = "X";
			pictureBox8->Show();

			// check horizontal win condition
			if (TTTarray[0, 2] == "X") {
				if (TTTarray[0, 0] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[1, 1] == "X") {
				if (TTTarray[2, 1] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			goto Changeturn;
		}

		if (TTTnewgame == false && turn == false) {
			C2->Hide();
			TTTarray[0, 1] = "O";
			pictureBox17->Show();

			// check horizontal win condition
			if (TTTarray[0, 2] == "O") {
				if (TTTarray[0, 0] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[1, 1] == "O") {
				if (TTTarray[2, 1] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			goto Changeturn;

		}
		//////////////////////////////GOTO STATEMENT///////////////////////////
	Changeturn:
		if (turn == true)
			turn = false;
		else if (turn == false)
			turn = true;

		int EmptySpaceCounter = 0;
		for (int CheckEmptyRow = 0; CheckEmptyRow < maxrow; CheckEmptyRow++) {
			for (int CheckEmptyCol = 0; CheckEmptyCol < maxcol; CheckEmptyCol++) {
				if (TTTarray[CheckEmptyRow, CheckEmptyCol] != "E")
					EmptySpaceCounter++;
			}
		}

		if (TTTnewgame == false && EmptySpaceCounter == 9) {
			TTTnewgame = true;
			Tie^ tie = gcnew Tie();
			tie->Show();
		}
	}
	private: System::Void C3_Click(System::Object^  sender, System::EventArgs^  e) {
		//when it is not a new game and it's X's turn 
		if (TTTnewgame == false && turn == true) {
			C3->Hide();
			TTTarray[0, 0] = "X";
			pictureBox9->Show();

			// check horizontal win condition
			if (TTTarray[0, 1] == "X") {
				if (TTTarray[0, 2] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[1, 0] == "X") {
				if (TTTarray[2, 0] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			// check diagonal win condition
			if (TTTarray[1, 1] == "X") {
				if (TTTarray[2, 2] == "X") {
					winner = true;
					TTTnewgame = true;
					XWins^ xwins = gcnew XWins();
					xwins->Show();

					//for the scoreboard Player 1 win 
					String^ TTTscore = label3->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label3->Text = TTTscore;
				}
			}

			goto Changeturn;
		}

		if (TTTnewgame == false && turn == false) {
			C3->Hide();
			TTTarray[0, 0] = "O";
			pictureBox18->Show();

			// check horizontal win condition
			if (TTTarray[0, 1] == "O") {
				if (TTTarray[0, 2] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			//check vertical win condition
			if (TTTarray[1, 0] == "O") {
				if (TTTarray[2, 0] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;
				}
			}

			// check diagonal win condition
			if (TTTarray[1, 1] == "O") {
				if (TTTarray[2, 2] == "O") {
					winner = true;
					TTTnewgame = true;
					Owins^ owins = gcnew Owins();
					owins->Show();

					//for the scoreboard Player 2 win 
					String^ TTTscore = label4->Text;
					int ConvTxtToInt = System::Convert::ToInt16(TTTscore);
					int addpoint = ConvTxtToInt + 1;
					TTTscore = System::Convert::ToString(addpoint);
					label4->Text = TTTscore;

				}
			}

			goto Changeturn;

		}
		//////////////////////////////GOTO STATEMENT///////////////////////////
	Changeturn:
		if (turn == true)
			turn = false;
		else if (turn == false)
			turn = true;

		int EmptySpaceCounter = 0;
		for (int CheckEmptyRow = 0; CheckEmptyRow < maxrow; CheckEmptyRow++) {
			for (int CheckEmptyCol = 0; CheckEmptyCol < maxcol; CheckEmptyCol++) {
				if (TTTarray[CheckEmptyRow, CheckEmptyCol] != "E")
					EmptySpaceCounter++;
			}
		}

		if (TTTnewgame == false && EmptySpaceCounter == 9) {
			TTTnewgame = true;
			Tie^ tie = gcnew Tie();
			tie->Show();
		}
	}


	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//if true, then start a new game 
		if (TTTnewgame == true) {
			//initialize board to all "E"s meaning Empty 
			for (int rows = 0; rows < maxrow; rows++) {
				for (int cols = 0; cols < maxcol; cols++)
				{
					TTTarray[rows, cols] = "E";
				}
			}

			A1->Show();
			A2->Show();
			A3->Show();
			B1->Show();
			B2->Show();
			B3->Show();
			C1->Show();
			C2->Show();
			C3->Show();

			// hide all pictures
			pictureBox1->Hide();
			pictureBox2->Hide();
			pictureBox3->Hide();
			pictureBox4->Hide();
			pictureBox5->Hide();
			pictureBox6->Hide();
			pictureBox7->Hide();
			pictureBox8->Hide();
			pictureBox9->Hide();
			pictureBox10->Hide();
			pictureBox11->Hide();
			pictureBox12->Hide();
			pictureBox13->Hide();
			pictureBox14->Hide();
			pictureBox15->Hide();
			pictureBox16->Hide();
			pictureBox17->Hide();
			pictureBox18->Hide();
			turn = true;
			TTTnewgame = false;
		}
	}



	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//TTTMainMenu^ TTTMM = gcnew TTTMainMenu();
		this->Hide();  // this hides the current window (does not delete its existance - it is just "invisible")
		//TTTMM->Show();
	}
			 
	

};
}
