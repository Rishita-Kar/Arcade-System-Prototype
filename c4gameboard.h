#pragma once
#include "C4RedWin.h"
#include "C4YellowWin.h"

namespace ArcadeMenu {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for c4gameboard
	/// RED PIECE STARTS AT BOX 2 AND ENDS AT BOX 43
	/// YELLOW PIECE START AT BOX 44 AND ENDS AT BOX 85
	/// </summary>
	public ref class c4gameboard : public System::Windows::Forms::Form
	{
	public:
		c4gameboard(void)
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
		~c4gameboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:






	private: System::Windows::Forms::Label^  label1;
			 //private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
			 //private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape2;
			 //private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
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
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::PictureBox^  pictureBox52;
	private: System::Windows::Forms::PictureBox^  pictureBox53;
	private: System::Windows::Forms::PictureBox^  pictureBox54;
	private: System::Windows::Forms::PictureBox^  pictureBox55;
	private: System::Windows::Forms::PictureBox^  pictureBox56;
	private: System::Windows::Forms::PictureBox^  pictureBox57;
	private: System::Windows::Forms::PictureBox^  pictureBox58;
	private: System::Windows::Forms::PictureBox^  pictureBox59;
	private: System::Windows::Forms::PictureBox^  pictureBox60;
	private: System::Windows::Forms::PictureBox^  pictureBox61;
	private: System::Windows::Forms::PictureBox^  pictureBox62;
	private: System::Windows::Forms::PictureBox^  pictureBox63;
	private: System::Windows::Forms::PictureBox^  pictureBox64;
	private: System::Windows::Forms::PictureBox^  pictureBox65;
	private: System::Windows::Forms::PictureBox^  pictureBox66;
	private: System::Windows::Forms::PictureBox^  pictureBox67;
	private: System::Windows::Forms::PictureBox^  pictureBox68;
	private: System::Windows::Forms::PictureBox^  pictureBox69;
	private: System::Windows::Forms::PictureBox^  pictureBox70;
	private: System::Windows::Forms::PictureBox^  pictureBox71;
	private: System::Windows::Forms::PictureBox^  pictureBox72;
	private: System::Windows::Forms::PictureBox^  pictureBox73;
	private: System::Windows::Forms::PictureBox^  pictureBox74;
	private: System::Windows::Forms::PictureBox^  pictureBox75;
	private: System::Windows::Forms::PictureBox^  pictureBox76;
	private: System::Windows::Forms::PictureBox^  pictureBox77;
	private: System::Windows::Forms::PictureBox^  pictureBox78;
	private: System::Windows::Forms::PictureBox^  pictureBox79;
	private: System::Windows::Forms::PictureBox^  pictureBox80;
	private: System::Windows::Forms::PictureBox^  pictureBox81;
	private: System::Windows::Forms::PictureBox^  pictureBox82;
	private: System::Windows::Forms::PictureBox^  pictureBox83;
	private: System::Windows::Forms::PictureBox^  pictureBox84;
	private: System::Windows::Forms::PictureBox^  pictureBox85;
private: System::Windows::Forms::PictureBox^  pictureBox86;
private: System::Windows::Forms::PictureBox^  pictureBox87;



private: System::Windows::Forms::Button^  button12;
private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer2;
private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer3;
private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer4;
private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer5;
private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer6;
private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer7;











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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(c4gameboard::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox73 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox77 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox78 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox79 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox80 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox81 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox82 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox83 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox84 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox85 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox86 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox87 = (gcnew System::Windows::Forms::PictureBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->axWindowsMediaPlayer2 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->axWindowsMediaPlayer3 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->axWindowsMediaPlayer4 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->axWindowsMediaPlayer5 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->axWindowsMediaPlayer6 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->axWindowsMediaPlayer7 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer7))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(367, 870);
			this->button1->Margin = System::Windows::Forms::Padding(6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 74);
			this->button1->TabIndex = 0;
			this->button1->Text = L"A";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &c4gameboard::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 31);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(245, 46);
			this->label1->TabIndex = 7;
			this->label1->Text = L"PLAYER TURN";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(501, 870);
			this->button2->Margin = System::Windows::Forms::Padding(6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 74);
			this->button2->TabIndex = 10;
			this->button2->Text = L"B";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &c4gameboard::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(633, 870);
			this->button3->Margin = System::Windows::Forms::Padding(6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 74);
			this->button3->TabIndex = 11;
			this->button3->Text = L"C";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &c4gameboard::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(768, 870);
			this->button4->Margin = System::Windows::Forms::Padding(6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 74);
			this->button4->TabIndex = 12;
			this->button4->Text = L"D";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &c4gameboard::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(902, 870);
			this->button5->Margin = System::Windows::Forms::Padding(6);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 74);
			this->button5->TabIndex = 13;
			this->button5->Text = L"E";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &c4gameboard::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1034, 870);
			this->button6->Margin = System::Windows::Forms::Padding(6);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 74);
			this->button6->TabIndex = 14;
			this->button6->Text = L"F";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &c4gameboard::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(1164, 870);
			this->button7->Margin = System::Windows::Forms::Padding(6);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 74);
			this->button7->TabIndex = 15;
			this->button7->Text = L"G";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &c4gameboard::button7_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 373);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 46);
			this->label2->TabIndex = 16;
			this->label2->Text = L"SCORE:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 436);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 34);
			this->label3->TabIndex = 17;
			this->label3->Text = L"RED";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 524);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 34);
			this->label4->TabIndex = 18;
			this->label4->Text = L"YELLOW";
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(31, 620);
			this->button9->Margin = System::Windows::Forms::Padding(6);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(249, 146);
			this->button9->TabIndex = 20;
			this->button9->Text = L"START GAME";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &c4gameboard::button9_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Location = System::Drawing::Point(367, 100);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(935, 759);
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(193, 524);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 34);
			this->label6->TabIndex = 23;
			this->label6->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(193, 436);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 34);
			this->label5->TabIndex = 24;
			this->label5->Text = L"0";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(391, 118);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(94, 94);
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(521, 118);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(94, 94);
			this->pictureBox3->TabIndex = 26;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(653, 118);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(94, 94);
			this->pictureBox4->TabIndex = 27;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(787, 118);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(94, 94);
			this->pictureBox5->TabIndex = 28;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(922, 118);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(94, 94);
			this->pictureBox6->TabIndex = 29;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Location = System::Drawing::Point(1054, 118);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(94, 94);
			this->pictureBox7->TabIndex = 30;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->Location = System::Drawing::Point(1184, 118);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(94, 94);
			this->pictureBox8->TabIndex = 31;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->Location = System::Drawing::Point(391, 244);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(94, 94);
			this->pictureBox9->TabIndex = 32;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->Location = System::Drawing::Point(521, 244);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(94, 94);
			this->pictureBox10->TabIndex = 33;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->Location = System::Drawing::Point(653, 244);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(94, 94);
			this->pictureBox11->TabIndex = 34;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->Location = System::Drawing::Point(787, 244);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(94, 94);
			this->pictureBox12->TabIndex = 35;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->Location = System::Drawing::Point(922, 244);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(94, 94);
			this->pictureBox13->TabIndex = 36;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->Location = System::Drawing::Point(1054, 244);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(94, 94);
			this->pictureBox14->TabIndex = 37;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->Location = System::Drawing::Point(1184, 244);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(94, 94);
			this->pictureBox15->TabIndex = 38;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->Location = System::Drawing::Point(391, 371);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(94, 94);
			this->pictureBox16->TabIndex = 39;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->Location = System::Drawing::Point(521, 371);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(94, 94);
			this->pictureBox17->TabIndex = 40;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->Location = System::Drawing::Point(653, 371);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(94, 94);
			this->pictureBox18->TabIndex = 41;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.BackgroundImage")));
			this->pictureBox19->Location = System::Drawing::Point(787, 373);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(94, 94);
			this->pictureBox19->TabIndex = 42;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.BackgroundImage")));
			this->pictureBox20->Location = System::Drawing::Point(922, 371);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(94, 94);
			this->pictureBox20->TabIndex = 43;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.BackgroundImage")));
			this->pictureBox21->Location = System::Drawing::Point(1054, 371);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(94, 94);
			this->pictureBox21->TabIndex = 44;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.BackgroundImage")));
			this->pictureBox22->Location = System::Drawing::Point(1184, 371);
			this->pictureBox22->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(94, 94);
			this->pictureBox22->TabIndex = 45;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.BackgroundImage")));
			this->pictureBox23->Location = System::Drawing::Point(391, 495);
			this->pictureBox23->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(94, 94);
			this->pictureBox23->TabIndex = 46;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.BackgroundImage")));
			this->pictureBox24->Location = System::Drawing::Point(521, 495);
			this->pictureBox24->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(94, 94);
			this->pictureBox24->TabIndex = 47;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.BackgroundImage")));
			this->pictureBox25->Location = System::Drawing::Point(653, 495);
			this->pictureBox25->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(94, 94);
			this->pictureBox25->TabIndex = 48;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.BackgroundImage")));
			this->pictureBox26->Location = System::Drawing::Point(787, 495);
			this->pictureBox26->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(94, 94);
			this->pictureBox26->TabIndex = 49;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.BackgroundImage")));
			this->pictureBox27->Location = System::Drawing::Point(922, 495);
			this->pictureBox27->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(94, 94);
			this->pictureBox27->TabIndex = 50;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.BackgroundImage")));
			this->pictureBox28->Location = System::Drawing::Point(1054, 495);
			this->pictureBox28->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(94, 94);
			this->pictureBox28->TabIndex = 51;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.BackgroundImage")));
			this->pictureBox29->Location = System::Drawing::Point(1184, 495);
			this->pictureBox29->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(94, 94);
			this->pictureBox29->TabIndex = 52;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.BackgroundImage")));
			this->pictureBox30->Location = System::Drawing::Point(391, 620);
			this->pictureBox30->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(94, 94);
			this->pictureBox30->TabIndex = 53;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.BackgroundImage")));
			this->pictureBox31->Location = System::Drawing::Point(521, 620);
			this->pictureBox31->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(94, 94);
			this->pictureBox31->TabIndex = 54;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.BackgroundImage")));
			this->pictureBox32->Location = System::Drawing::Point(653, 620);
			this->pictureBox32->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(94, 94);
			this->pictureBox32->TabIndex = 55;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.BackgroundImage")));
			this->pictureBox33->Location = System::Drawing::Point(787, 620);
			this->pictureBox33->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(94, 94);
			this->pictureBox33->TabIndex = 56;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.BackgroundImage")));
			this->pictureBox34->Location = System::Drawing::Point(922, 620);
			this->pictureBox34->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(94, 94);
			this->pictureBox34->TabIndex = 57;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.BackgroundImage")));
			this->pictureBox35->Location = System::Drawing::Point(1054, 620);
			this->pictureBox35->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(94, 94);
			this->pictureBox35->TabIndex = 58;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.BackgroundImage")));
			this->pictureBox36->Location = System::Drawing::Point(1184, 620);
			this->pictureBox36->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(94, 94);
			this->pictureBox36->TabIndex = 59;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.BackgroundImage")));
			this->pictureBox37->Location = System::Drawing::Point(391, 746);
			this->pictureBox37->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(94, 94);
			this->pictureBox37->TabIndex = 60;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.BackgroundImage")));
			this->pictureBox38->Location = System::Drawing::Point(521, 746);
			this->pictureBox38->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(94, 94);
			this->pictureBox38->TabIndex = 61;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.BackgroundImage")));
			this->pictureBox39->Location = System::Drawing::Point(653, 746);
			this->pictureBox39->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(94, 94);
			this->pictureBox39->TabIndex = 62;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.BackgroundImage")));
			this->pictureBox40->Location = System::Drawing::Point(787, 746);
			this->pictureBox40->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(94, 94);
			this->pictureBox40->TabIndex = 63;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.BackgroundImage")));
			this->pictureBox41->Location = System::Drawing::Point(922, 746);
			this->pictureBox41->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(94, 94);
			this->pictureBox41->TabIndex = 64;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.BackgroundImage")));
			this->pictureBox42->Location = System::Drawing::Point(1054, 746);
			this->pictureBox42->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(94, 94);
			this->pictureBox42->TabIndex = 65;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.BackgroundImage")));
			this->pictureBox43->Location = System::Drawing::Point(1184, 746);
			this->pictureBox43->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(94, 94);
			this->pictureBox43->TabIndex = 66;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.BackgroundImage")));
			this->pictureBox44->Location = System::Drawing::Point(391, 118);
			this->pictureBox44->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(94, 94);
			this->pictureBox44->TabIndex = 68;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.BackgroundImage")));
			this->pictureBox45->Location = System::Drawing::Point(521, 118);
			this->pictureBox45->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(94, 94);
			this->pictureBox45->TabIndex = 69;
			this->pictureBox45->TabStop = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.BackgroundImage")));
			this->pictureBox46->Location = System::Drawing::Point(653, 118);
			this->pictureBox46->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(94, 94);
			this->pictureBox46->TabIndex = 70;
			this->pictureBox46->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.BackgroundImage")));
			this->pictureBox47->Location = System::Drawing::Point(787, 118);
			this->pictureBox47->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(94, 94);
			this->pictureBox47->TabIndex = 71;
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.BackgroundImage")));
			this->pictureBox48->Location = System::Drawing::Point(922, 118);
			this->pictureBox48->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(94, 94);
			this->pictureBox48->TabIndex = 72;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.BackgroundImage")));
			this->pictureBox49->Location = System::Drawing::Point(1054, 118);
			this->pictureBox49->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(94, 94);
			this->pictureBox49->TabIndex = 73;
			this->pictureBox49->TabStop = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.BackgroundImage")));
			this->pictureBox50->Location = System::Drawing::Point(1184, 118);
			this->pictureBox50->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(94, 94);
			this->pictureBox50->TabIndex = 74;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.BackgroundImage")));
			this->pictureBox51->Location = System::Drawing::Point(391, 244);
			this->pictureBox51->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(94, 94);
			this->pictureBox51->TabIndex = 75;
			this->pictureBox51->TabStop = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.BackgroundImage")));
			this->pictureBox52->Location = System::Drawing::Point(521, 244);
			this->pictureBox52->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(94, 94);
			this->pictureBox52->TabIndex = 76;
			this->pictureBox52->TabStop = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.BackgroundImage")));
			this->pictureBox53->Location = System::Drawing::Point(653, 244);
			this->pictureBox53->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(94, 94);
			this->pictureBox53->TabIndex = 77;
			this->pictureBox53->TabStop = false;
			// 
			// pictureBox54
			// 
			this->pictureBox54->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.BackgroundImage")));
			this->pictureBox54->Location = System::Drawing::Point(787, 244);
			this->pictureBox54->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(94, 94);
			this->pictureBox54->TabIndex = 78;
			this->pictureBox54->TabStop = false;
			// 
			// pictureBox55
			// 
			this->pictureBox55->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.BackgroundImage")));
			this->pictureBox55->Location = System::Drawing::Point(922, 244);
			this->pictureBox55->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(94, 94);
			this->pictureBox55->TabIndex = 79;
			this->pictureBox55->TabStop = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.BackgroundImage")));
			this->pictureBox56->Location = System::Drawing::Point(1054, 244);
			this->pictureBox56->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(94, 94);
			this->pictureBox56->TabIndex = 80;
			this->pictureBox56->TabStop = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.BackgroundImage")));
			this->pictureBox57->Location = System::Drawing::Point(1184, 244);
			this->pictureBox57->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(94, 94);
			this->pictureBox57->TabIndex = 81;
			this->pictureBox57->TabStop = false;
			// 
			// pictureBox58
			// 
			this->pictureBox58->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.BackgroundImage")));
			this->pictureBox58->Location = System::Drawing::Point(391, 371);
			this->pictureBox58->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(94, 94);
			this->pictureBox58->TabIndex = 82;
			this->pictureBox58->TabStop = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(521, 371);
			this->pictureBox59->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(94, 94);
			this->pictureBox59->TabIndex = 83;
			this->pictureBox59->TabStop = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.BackgroundImage")));
			this->pictureBox60->Location = System::Drawing::Point(653, 371);
			this->pictureBox60->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(94, 94);
			this->pictureBox60->TabIndex = 84;
			this->pictureBox60->TabStop = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.BackgroundImage")));
			this->pictureBox61->Location = System::Drawing::Point(787, 371);
			this->pictureBox61->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(94, 94);
			this->pictureBox61->TabIndex = 85;
			this->pictureBox61->TabStop = false;
			// 
			// pictureBox62
			// 
			this->pictureBox62->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.BackgroundImage")));
			this->pictureBox62->Location = System::Drawing::Point(922, 371);
			this->pictureBox62->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(94, 94);
			this->pictureBox62->TabIndex = 86;
			this->pictureBox62->TabStop = false;
			// 
			// pictureBox63
			// 
			this->pictureBox63->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.BackgroundImage")));
			this->pictureBox63->Location = System::Drawing::Point(1054, 371);
			this->pictureBox63->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(94, 94);
			this->pictureBox63->TabIndex = 87;
			this->pictureBox63->TabStop = false;
			// 
			// pictureBox64
			// 
			this->pictureBox64->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.BackgroundImage")));
			this->pictureBox64->Location = System::Drawing::Point(1184, 371);
			this->pictureBox64->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(94, 94);
			this->pictureBox64->TabIndex = 88;
			this->pictureBox64->TabStop = false;
			// 
			// pictureBox65
			// 
			this->pictureBox65->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.BackgroundImage")));
			this->pictureBox65->Location = System::Drawing::Point(391, 495);
			this->pictureBox65->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(94, 94);
			this->pictureBox65->TabIndex = 89;
			this->pictureBox65->TabStop = false;
			// 
			// pictureBox66
			// 
			this->pictureBox66->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.BackgroundImage")));
			this->pictureBox66->Location = System::Drawing::Point(521, 495);
			this->pictureBox66->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(94, 94);
			this->pictureBox66->TabIndex = 90;
			this->pictureBox66->TabStop = false;
			// 
			// pictureBox67
			// 
			this->pictureBox67->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.BackgroundImage")));
			this->pictureBox67->Location = System::Drawing::Point(653, 495);
			this->pictureBox67->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(94, 94);
			this->pictureBox67->TabIndex = 91;
			this->pictureBox67->TabStop = false;
			// 
			// pictureBox68
			// 
			this->pictureBox68->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.BackgroundImage")));
			this->pictureBox68->Location = System::Drawing::Point(787, 495);
			this->pictureBox68->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(94, 94);
			this->pictureBox68->TabIndex = 92;
			this->pictureBox68->TabStop = false;
			// 
			// pictureBox69
			// 
			this->pictureBox69->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.BackgroundImage")));
			this->pictureBox69->Location = System::Drawing::Point(922, 495);
			this->pictureBox69->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(94, 94);
			this->pictureBox69->TabIndex = 93;
			this->pictureBox69->TabStop = false;
			// 
			// pictureBox70
			// 
			this->pictureBox70->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.BackgroundImage")));
			this->pictureBox70->Location = System::Drawing::Point(1054, 495);
			this->pictureBox70->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(94, 94);
			this->pictureBox70->TabIndex = 94;
			this->pictureBox70->TabStop = false;
			// 
			// pictureBox71
			// 
			this->pictureBox71->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox71.BackgroundImage")));
			this->pictureBox71->Location = System::Drawing::Point(1184, 495);
			this->pictureBox71->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(94, 94);
			this->pictureBox71->TabIndex = 95;
			this->pictureBox71->TabStop = false;
			// 
			// pictureBox72
			// 
			this->pictureBox72->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox72.BackgroundImage")));
			this->pictureBox72->Location = System::Drawing::Point(391, 620);
			this->pictureBox72->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(94, 94);
			this->pictureBox72->TabIndex = 96;
			this->pictureBox72->TabStop = false;
			// 
			// pictureBox73
			// 
			this->pictureBox73->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox73.BackgroundImage")));
			this->pictureBox73->Location = System::Drawing::Point(521, 620);
			this->pictureBox73->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox73->Name = L"pictureBox73";
			this->pictureBox73->Size = System::Drawing::Size(94, 94);
			this->pictureBox73->TabIndex = 97;
			this->pictureBox73->TabStop = false;
			// 
			// pictureBox74
			// 
			this->pictureBox74->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox74.BackgroundImage")));
			this->pictureBox74->Location = System::Drawing::Point(653, 620);
			this->pictureBox74->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox74->Name = L"pictureBox74";
			this->pictureBox74->Size = System::Drawing::Size(94, 94);
			this->pictureBox74->TabIndex = 98;
			this->pictureBox74->TabStop = false;
			// 
			// pictureBox75
			// 
			this->pictureBox75->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox75.BackgroundImage")));
			this->pictureBox75->Location = System::Drawing::Point(787, 620);
			this->pictureBox75->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox75->Name = L"pictureBox75";
			this->pictureBox75->Size = System::Drawing::Size(94, 94);
			this->pictureBox75->TabIndex = 99;
			this->pictureBox75->TabStop = false;
			// 
			// pictureBox76
			// 
			this->pictureBox76->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox76.BackgroundImage")));
			this->pictureBox76->Location = System::Drawing::Point(922, 620);
			this->pictureBox76->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox76->Name = L"pictureBox76";
			this->pictureBox76->Size = System::Drawing::Size(94, 94);
			this->pictureBox76->TabIndex = 100;
			this->pictureBox76->TabStop = false;
			// 
			// pictureBox77
			// 
			this->pictureBox77->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox77.BackgroundImage")));
			this->pictureBox77->Location = System::Drawing::Point(1054, 620);
			this->pictureBox77->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox77->Name = L"pictureBox77";
			this->pictureBox77->Size = System::Drawing::Size(94, 94);
			this->pictureBox77->TabIndex = 101;
			this->pictureBox77->TabStop = false;
			// 
			// pictureBox78
			// 
			this->pictureBox78->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox78.BackgroundImage")));
			this->pictureBox78->Location = System::Drawing::Point(1184, 620);
			this->pictureBox78->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox78->Name = L"pictureBox78";
			this->pictureBox78->Size = System::Drawing::Size(94, 94);
			this->pictureBox78->TabIndex = 102;
			this->pictureBox78->TabStop = false;
			// 
			// pictureBox79
			// 
			this->pictureBox79->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox79.BackgroundImage")));
			this->pictureBox79->Location = System::Drawing::Point(391, 746);
			this->pictureBox79->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox79->Name = L"pictureBox79";
			this->pictureBox79->Size = System::Drawing::Size(94, 94);
			this->pictureBox79->TabIndex = 103;
			this->pictureBox79->TabStop = false;
			// 
			// pictureBox80
			// 
			this->pictureBox80->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox80.BackgroundImage")));
			this->pictureBox80->Location = System::Drawing::Point(521, 746);
			this->pictureBox80->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox80->Name = L"pictureBox80";
			this->pictureBox80->Size = System::Drawing::Size(94, 94);
			this->pictureBox80->TabIndex = 104;
			this->pictureBox80->TabStop = false;
			// 
			// pictureBox81
			// 
			this->pictureBox81->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox81.BackgroundImage")));
			this->pictureBox81->Location = System::Drawing::Point(653, 746);
			this->pictureBox81->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox81->Name = L"pictureBox81";
			this->pictureBox81->Size = System::Drawing::Size(94, 94);
			this->pictureBox81->TabIndex = 105;
			this->pictureBox81->TabStop = false;
			// 
			// pictureBox82
			// 
			this->pictureBox82->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox82.BackgroundImage")));
			this->pictureBox82->Location = System::Drawing::Point(787, 746);
			this->pictureBox82->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox82->Name = L"pictureBox82";
			this->pictureBox82->Size = System::Drawing::Size(94, 94);
			this->pictureBox82->TabIndex = 106;
			this->pictureBox82->TabStop = false;
			// 
			// pictureBox83
			// 
			this->pictureBox83->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox83.BackgroundImage")));
			this->pictureBox83->Location = System::Drawing::Point(922, 746);
			this->pictureBox83->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox83->Name = L"pictureBox83";
			this->pictureBox83->Size = System::Drawing::Size(94, 94);
			this->pictureBox83->TabIndex = 107;
			this->pictureBox83->TabStop = false;
			// 
			// pictureBox84
			// 
			this->pictureBox84->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox84.BackgroundImage")));
			this->pictureBox84->Location = System::Drawing::Point(1054, 746);
			this->pictureBox84->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox84->Name = L"pictureBox84";
			this->pictureBox84->Size = System::Drawing::Size(94, 94);
			this->pictureBox84->TabIndex = 108;
			this->pictureBox84->TabStop = false;
			// 
			// pictureBox85
			// 
			this->pictureBox85->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox85.BackgroundImage")));
			this->pictureBox85->Location = System::Drawing::Point(1184, 746);
			this->pictureBox85->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox85->Name = L"pictureBox85";
			this->pictureBox85->Size = System::Drawing::Size(94, 94);
			this->pictureBox85->TabIndex = 109;
			this->pictureBox85->TabStop = false;
			// 
			// pictureBox86
			// 
			this->pictureBox86->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox86.BackgroundImage")));
			this->pictureBox86->Location = System::Drawing::Point(29, 100);
			this->pictureBox86->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox86->Name = L"pictureBox86";
			this->pictureBox86->Size = System::Drawing::Size(94, 94);
			this->pictureBox86->TabIndex = 110;
			this->pictureBox86->TabStop = false;
			// 
			// pictureBox87
			// 
			this->pictureBox87->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox87.BackgroundImage")));
			this->pictureBox87->Location = System::Drawing::Point(134, 100);
			this->pictureBox87->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox87->Name = L"pictureBox87";
			this->pictureBox87->Size = System::Drawing::Size(94, 94);
			this->pictureBox87->TabIndex = 111;
			this->pictureBox87->TabStop = false;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.85714F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(33, 798);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(247, 146);
			this->button12->TabIndex = 115;
			this->button12->Text = L"EXIT";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &c4gameboard::button12_Click);
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(382, 883);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(75, 50);
			this->axWindowsMediaPlayer1->TabIndex = 116;
			// 
			// axWindowsMediaPlayer2
			// 
			this->axWindowsMediaPlayer2->Enabled = true;
			this->axWindowsMediaPlayer2->Location = System::Drawing::Point(509, 878);
			this->axWindowsMediaPlayer2->Name = L"axWindowsMediaPlayer2";
			this->axWindowsMediaPlayer2->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer2.OcxState")));
			this->axWindowsMediaPlayer2->Size = System::Drawing::Size(75, 23);
			this->axWindowsMediaPlayer2->TabIndex = 117;
			// 
			// axWindowsMediaPlayer3
			// 
			this->axWindowsMediaPlayer3->Enabled = true;
			this->axWindowsMediaPlayer3->Location = System::Drawing::Point(653, 878);
			this->axWindowsMediaPlayer3->Name = L"axWindowsMediaPlayer3";
			this->axWindowsMediaPlayer3->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer3.OcxState")));
			this->axWindowsMediaPlayer3->Size = System::Drawing::Size(75, 23);
			this->axWindowsMediaPlayer3->TabIndex = 118;
			// 
			// axWindowsMediaPlayer4
			// 
			this->axWindowsMediaPlayer4->Enabled = true;
			this->axWindowsMediaPlayer4->Location = System::Drawing::Point(787, 878);
			this->axWindowsMediaPlayer4->Name = L"axWindowsMediaPlayer4";
			this->axWindowsMediaPlayer4->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer4.OcxState")));
			this->axWindowsMediaPlayer4->Size = System::Drawing::Size(75, 23);
			this->axWindowsMediaPlayer4->TabIndex = 119;
			// 
			// axWindowsMediaPlayer5
			// 
			this->axWindowsMediaPlayer5->Enabled = true;
			this->axWindowsMediaPlayer5->Location = System::Drawing::Point(922, 878);
			this->axWindowsMediaPlayer5->Name = L"axWindowsMediaPlayer5";
			this->axWindowsMediaPlayer5->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer5.OcxState")));
			this->axWindowsMediaPlayer5->Size = System::Drawing::Size(75, 23);
			this->axWindowsMediaPlayer5->TabIndex = 120;
			// 
			// axWindowsMediaPlayer6
			// 
			this->axWindowsMediaPlayer6->Enabled = true;
			this->axWindowsMediaPlayer6->Location = System::Drawing::Point(1045, 883);
			this->axWindowsMediaPlayer6->Name = L"axWindowsMediaPlayer6";
			this->axWindowsMediaPlayer6->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer6.OcxState")));
			this->axWindowsMediaPlayer6->Size = System::Drawing::Size(75, 23);
			this->axWindowsMediaPlayer6->TabIndex = 121;
			// 
			// axWindowsMediaPlayer7
			// 
			this->axWindowsMediaPlayer7->Enabled = true;
			this->axWindowsMediaPlayer7->Location = System::Drawing::Point(1174, 883);
			this->axWindowsMediaPlayer7->Name = L"axWindowsMediaPlayer7";
			this->axWindowsMediaPlayer7->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer7.OcxState")));
			this->axWindowsMediaPlayer7->Size = System::Drawing::Size(75, 23);
			this->axWindowsMediaPlayer7->TabIndex = 122;
			// 
			// c4gameboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1307, 966);
			this->Controls->Add(this->axWindowsMediaPlayer7);
			this->Controls->Add(this->axWindowsMediaPlayer6);
			this->Controls->Add(this->axWindowsMediaPlayer5);
			this->Controls->Add(this->axWindowsMediaPlayer4);
			this->Controls->Add(this->axWindowsMediaPlayer3);
			this->Controls->Add(this->axWindowsMediaPlayer2);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->pictureBox87);
			this->Controls->Add(this->pictureBox86);
			this->Controls->Add(this->pictureBox85);
			this->Controls->Add(this->pictureBox84);
			this->Controls->Add(this->pictureBox83);
			this->Controls->Add(this->pictureBox82);
			this->Controls->Add(this->pictureBox81);
			this->Controls->Add(this->pictureBox80);
			this->Controls->Add(this->pictureBox79);
			this->Controls->Add(this->pictureBox78);
			this->Controls->Add(this->pictureBox77);
			this->Controls->Add(this->pictureBox76);
			this->Controls->Add(this->pictureBox75);
			this->Controls->Add(this->pictureBox74);
			this->Controls->Add(this->pictureBox73);
			this->Controls->Add(this->pictureBox72);
			this->Controls->Add(this->pictureBox71);
			this->Controls->Add(this->pictureBox70);
			this->Controls->Add(this->pictureBox69);
			this->Controls->Add(this->pictureBox68);
			this->Controls->Add(this->pictureBox67);
			this->Controls->Add(this->pictureBox66);
			this->Controls->Add(this->pictureBox65);
			this->Controls->Add(this->pictureBox64);
			this->Controls->Add(this->pictureBox63);
			this->Controls->Add(this->pictureBox62);
			this->Controls->Add(this->pictureBox61);
			this->Controls->Add(this->pictureBox60);
			this->Controls->Add(this->pictureBox59);
			this->Controls->Add(this->pictureBox58);
			this->Controls->Add(this->pictureBox57);
			this->Controls->Add(this->pictureBox56);
			this->Controls->Add(this->pictureBox55);
			this->Controls->Add(this->pictureBox54);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"c4gameboard";
			this->Text = L"c4gameboard";
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/////////////////////////////////////////////////////////////////////////////////////////////////////////
		bool playerturn = true; // red = true, yellow = false
		bool C4NewGame = true; // press for new game = true, game already started = false
		bool DoWeHaveAWinner = false; // did someone win the game yet?

		const int C4MaxCol = 7; // maximum number of rows
		const int C4MaxRow = 6; // maximum number of col
		int CountThePieces = 0; // counter that gets passed to CheckWinCondition

								// E = Empty, R = Redpiece, Y = Yellowpiece
		const String^ EMPTYPIECE = "E";
		const String^ REDPIECE = "R";
		const String^ YELLOWPIECE = "Y";
		array<String^, 2>^ C4BoardArray = gcnew array<String^, 2>(C4MaxRow, C4MaxCol);

		// displaying the color piece image on the board
		void DisplayImage(int RowColor, int ColColor, bool whosTurn) {
			//0,0
			if (RowColor == 0 && ColColor == 0 && whosTurn == true)
				pictureBox43->Show();
			else if (RowColor == 0 && ColColor == 0 && whosTurn == false)
				pictureBox85->Show();
			//0,1
			if (RowColor == 0 && ColColor == 1 && whosTurn == true)
				pictureBox42->Show();
			else if (RowColor == 0 && ColColor == 1 && whosTurn == false)
				pictureBox84->Show();
			//0,2
			if (RowColor == 0 && ColColor == 2 && whosTurn == true)
				pictureBox41->Show();
			else if (RowColor == 0 && ColColor == 2 && whosTurn == false)
				pictureBox83->Show();
			//0,3
			if (RowColor == 0 && ColColor == 3 && whosTurn == true)
				pictureBox40->Show();
			else if (RowColor == 0 && ColColor == 3 && whosTurn == false)
				pictureBox82->Show();
			//0,4
			if (RowColor == 0 && ColColor == 4 && whosTurn == true)
				pictureBox39->Show();
			else if (RowColor == 0 && ColColor == 4 && whosTurn == false)
				pictureBox81->Show();
			//0,5
			if (RowColor == 0 && ColColor == 5 && whosTurn == true)
				pictureBox38->Show();
			else if (RowColor == 0 && ColColor == 5 && whosTurn == false)
				pictureBox80->Show();
			//0,6
			if (RowColor == 0 && ColColor == 6 && whosTurn == true)
				pictureBox37->Show();
			else if (RowColor == 0 && ColColor == 6 && whosTurn == false)
				pictureBox79->Show();

			//second row
			//1,0
			if (RowColor == 1 && ColColor == 0 && whosTurn == true)
				pictureBox36->Show();
			else if (RowColor == 1 && ColColor == 0 && whosTurn == false)
				pictureBox78->Show();
			//1,1
			if (RowColor == 1 && ColColor == 1 && whosTurn == true)
				pictureBox35->Show();
			else if (RowColor == 1 && ColColor == 1 && whosTurn == false)
				pictureBox77->Show();
			//1,2
			if (RowColor == 1 && ColColor == 2 && whosTurn == true)
				pictureBox34->Show();
			else if (RowColor == 1 && ColColor == 2 && whosTurn == false)
				pictureBox76->Show();
			//1,3
			if (RowColor == 1 && ColColor == 3 && whosTurn == true)
				pictureBox33->Show();
			else if (RowColor == 1 && ColColor == 3 && whosTurn == false)
				pictureBox75->Show();
			//1,4
			if (RowColor == 1 && ColColor == 4 && whosTurn == true)
				pictureBox32->Show();
			else if (RowColor == 1 && ColColor == 4 && whosTurn == false)
				pictureBox74->Show();
			//1,5
			if (RowColor == 1 && ColColor == 5 && whosTurn == true)
				pictureBox31->Show();
			else if (RowColor == 1 && ColColor == 5 && whosTurn == false)
				pictureBox73->Show();
			//0,6
			if (RowColor == 1 && ColColor == 6 && whosTurn == true)
				pictureBox30->Show();
			else if (RowColor == 1 && ColColor == 6 && whosTurn == false)
				pictureBox72->Show();

			//third row
			//2,0
			if (RowColor == 2 && ColColor == 0 && whosTurn == true)
				pictureBox29->Show();
			else if (RowColor == 2 && ColColor == 0 && whosTurn == false)
				pictureBox71->Show();
			//2,1
			if (RowColor == 2 && ColColor == 1 && whosTurn == true)
				pictureBox28->Show();
			else if (RowColor == 2 && ColColor == 1 && whosTurn == false)
				pictureBox70->Show();
			//2,2
			if (RowColor == 2 && ColColor == 2 && whosTurn == true)
				pictureBox27->Show();
			else if (RowColor == 2 && ColColor == 2 && whosTurn == false)
				pictureBox69->Show();
			//2,3
			if (RowColor == 2 && ColColor == 3 && whosTurn == true)
				pictureBox26->Show();
			else if (RowColor == 2 && ColColor == 3 && whosTurn == false)
				pictureBox68->Show();
			//2,4
			if (RowColor == 2 && ColColor == 4 && whosTurn == true)
				pictureBox25->Show();
			else if (RowColor == 2 && ColColor == 4 && whosTurn == false)
				pictureBox67->Show();
			//2,5
			if (RowColor == 2 && ColColor == 5 && whosTurn == true)
				pictureBox24->Show();
			else if (RowColor == 2 && ColColor == 5 && whosTurn == false)
				pictureBox66->Show();
			//2,6
			if (RowColor == 2 && ColColor == 6 && whosTurn == true)
				pictureBox23->Show();
			else if (RowColor == 2 && ColColor == 6 && whosTurn == false)
				pictureBox65->Show();

			//fourth row
			//3,0
			if (RowColor == 3 && ColColor == 0 && whosTurn == true)
				pictureBox22->Show();
			else if (RowColor == 3 && ColColor == 0 && whosTurn == false)
				pictureBox64->Show();
			//3,1
			if (RowColor == 3 && ColColor == 1 && whosTurn == true)
				pictureBox21->Show();
			else if (RowColor == 3 && ColColor == 1 && whosTurn == false)
				pictureBox63->Show();
			//3,2
			if (RowColor == 3 && ColColor == 2 && whosTurn == true)
				pictureBox20->Show();
			else if (RowColor == 3 && ColColor == 2 && whosTurn == false)
				pictureBox62->Show();
			//3,3
			if (RowColor == 3 && ColColor == 3 && whosTurn == true)
				pictureBox19->Show();
			else if (RowColor == 3 && ColColor == 3 && whosTurn == false)
				pictureBox61->Show();
			//3,4
			if (RowColor == 3 && ColColor == 4 && whosTurn == true)
				pictureBox18->Show();
			else if (RowColor == 3 && ColColor == 4 && whosTurn == false)
				pictureBox60->Show();
			//3,5
			if (RowColor == 3 && ColColor == 5 && whosTurn == true)
				pictureBox17->Show();
			else if (RowColor == 3 && ColColor == 5 && whosTurn == false)
				pictureBox59->Show();
			//3,6
			if (RowColor == 3 && ColColor == 6 && whosTurn == true)
				pictureBox16->Show();
			else if (RowColor == 3 && ColColor == 6 && whosTurn == false)
				pictureBox58->Show();

			//fifth row
			//4,0
			if (RowColor == 4 && ColColor == 0 && whosTurn == true)
				pictureBox15->Show();
			else if (RowColor == 4 && ColColor == 0 && whosTurn == false)
				pictureBox57->Show();
			//4,1
			if (RowColor == 4 && ColColor == 1 && whosTurn == true)
				pictureBox14->Show();
			else if (RowColor == 4 && ColColor == 1 && whosTurn == false)
				pictureBox56->Show();
			//4,2
			if (RowColor == 4 && ColColor == 2 && whosTurn == true)
				pictureBox13->Show();
			else if (RowColor == 4 && ColColor == 2 && whosTurn == false)
				pictureBox55->Show();
			//4,3
			if (RowColor == 4 && ColColor == 3 && whosTurn == true)
				pictureBox12->Show();
			else if (RowColor == 4 && ColColor == 3 && whosTurn == false)
				pictureBox54->Show();
			//4,4
			if (RowColor == 4 && ColColor == 4 && whosTurn == true)
				pictureBox11->Show();
			else if (RowColor == 4 && ColColor == 4 && whosTurn == false)
				pictureBox53->Show();
			//4,5
			if (RowColor == 4 && ColColor == 5 && whosTurn == true)
				pictureBox10->Show();
			else if (RowColor == 4 && ColColor == 5 && whosTurn == false)
				pictureBox52->Show();
			//4,6
			if (RowColor == 4 && ColColor == 6 && whosTurn == true)
				pictureBox9->Show();
			else if (RowColor == 4 && ColColor == 6 && whosTurn == false)
				pictureBox51->Show();

			//sixth row
			//5,0
			if (RowColor == 5 && ColColor == 0 && whosTurn == true)
				pictureBox8->Show();
			else if (RowColor == 5 && ColColor == 0 && whosTurn == false)
				pictureBox50->Show();
			//5,1
			if (RowColor == 5 && ColColor == 1 && whosTurn == true)
				pictureBox7->Show();
			else if (RowColor == 5 && ColColor == 1 && whosTurn == false)
				pictureBox49->Show();
			//5,2
			if (RowColor == 5 && ColColor == 2 && whosTurn == true)
				pictureBox6->Show();
			else if (RowColor == 5 && ColColor == 2 && whosTurn == false)
				pictureBox48->Show();
			//5,3
			if (RowColor == 5 && ColColor == 3 && whosTurn == true)
				pictureBox5->Show();
			else if (RowColor == 5 && ColColor == 3 && whosTurn == false)
				pictureBox47->Show();
			//5,4
			if (RowColor == 5 && ColColor == 4 && whosTurn == true)
				pictureBox4->Show();
			else if (RowColor == 5 && ColColor == 4 && whosTurn == false)
				pictureBox46->Show();
			//5,5
			if (RowColor == 5 && ColColor == 5 && whosTurn == true)
				pictureBox3->Show();
			else if (RowColor == 5 && ColColor == 5 && whosTurn == false)
				pictureBox45->Show();
			//5,6
			if (RowColor == 5 && ColColor == 6 && whosTurn == true)
				pictureBox2->Show();
			else if (RowColor == 5 && ColColor == 6 && whosTurn == false)
				pictureBox44->Show();
		}

		// checks win condition
		void CheckWinCondition(int CountColor, bool PlayerColor) {
			if (CountColor >= 3 && PlayerColor == true) {
				C4NewGame = true;
				button9->Show();
				String^ scoreboard = label5->Text;
				int TextToInt = System::Convert::ToInt16(scoreboard);
				int GainAPoint = TextToInt + 1;
				scoreboard = System::Convert::ToString(GainAPoint);
				label5->Text = scoreboard;

				// add win message here
				C4RedWin^ c4redw = gcnew C4RedWin();
				c4redw->Show();

				// reset the board
				CountThePieces = 0;
				DoWeHaveAWinner = true;
			}

			else if (CountColor >= 3 && PlayerColor == false) {
				C4NewGame = true;
				button9->Show();
				String^ scoreboard = label6->Text;
				int TextToInt = System::Convert::ToInt16(scoreboard);
				int GainAPoint = TextToInt + 1;
				scoreboard = System::Convert::ToString(GainAPoint);
				label6->Text = scoreboard;

				// add win message here
				C4YellowWin^ c4yelloww = gcnew C4YellowWin();
				c4yelloww->Show();

				// reset the board
				playerturn = true;
				CountThePieces = 0;
				DoWeHaveAWinner = true;
			}

			else {
				CountThePieces = 0;
				DoWeHaveAWinner = false;
			}
		}

		// functions for checking vertical, horizontal, diagonal \, and diagonal /

	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		// if true start a new game!
		if (C4NewGame == true) {
			// initialize board to all 0s
			for (int rows = 0; rows < C4MaxRow; rows++) {
				for (int columns = 0; columns < C4MaxCol; columns++) {
					C4BoardArray[rows, columns] = "E";
				}
			}

			// hide box 2 - 85
			// RED PIECES 2 - 43
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
			pictureBox19->Hide();
			pictureBox20->Hide();
			pictureBox21->Hide();
			pictureBox22->Hide();
			pictureBox23->Hide();
			pictureBox24->Hide();
			pictureBox25->Hide();
			pictureBox26->Hide();
			pictureBox27->Hide();
			pictureBox28->Hide();
			pictureBox29->Hide();
			pictureBox30->Hide();
			pictureBox31->Hide();
			pictureBox32->Hide();
			pictureBox33->Hide();
			pictureBox34->Hide();
			pictureBox35->Hide();
			pictureBox36->Hide();
			pictureBox37->Hide();
			pictureBox38->Hide();
			pictureBox39->Hide();
			pictureBox40->Hide();
			pictureBox41->Hide();
			pictureBox42->Hide();
			pictureBox43->Hide();

			// YELLOW PIECES 44 - 85
			pictureBox44->Hide();
			pictureBox45->Hide();
			pictureBox46->Hide();
			pictureBox47->Hide();
			pictureBox48->Hide();
			pictureBox49->Hide();
			pictureBox50->Hide();
			pictureBox51->Hide();
			pictureBox52->Hide();
			pictureBox53->Hide();
			pictureBox54->Hide();
			pictureBox55->Hide();
			pictureBox56->Hide();
			pictureBox57->Hide();
			pictureBox58->Hide();
			pictureBox59->Hide();
			pictureBox60->Hide();
			pictureBox61->Hide();
			pictureBox62->Hide();
			pictureBox63->Hide();
			pictureBox64->Hide();
			pictureBox65->Hide();
			pictureBox66->Hide();
			pictureBox67->Hide();
			pictureBox68->Hide();
			pictureBox69->Hide();
			pictureBox70->Hide();
			pictureBox71->Hide();
			pictureBox72->Hide();
			pictureBox73->Hide();
			pictureBox74->Hide();
			pictureBox75->Hide();
			pictureBox76->Hide();
			pictureBox77->Hide();
			pictureBox78->Hide();
			pictureBox79->Hide();
			pictureBox80->Hide();
			pictureBox81->Hide();
			pictureBox82->Hide();
			pictureBox83->Hide();
			pictureBox84->Hide();
			pictureBox85->Hide();
			pictureBox87->Hide();
			pictureBox86->Show();
			playerturn = true;
			C4NewGame = false;
		}

		button9->Hide();
		//ovalShape2->Hide();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		axWindowsMediaPlayer1->Ctlcontrols->play();
		
		int CurrentRow; // row number can change
		int CurrentCol = 6; // column number cannot change

		int pieces = 0;
		// checking if column is available
		// if column is full leave the button
		for (int PieceCounter = 0; PieceCounter < 6; PieceCounter++) {
			if (C4BoardArray[PieceCounter, 6] != "E")
				pieces++;
		}

		if (pieces == 6)
			goto leavebutton;

		// @@@@@@@@@@@@@@@@@@@@@@@@@@@ RED TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
		if (C4NewGame == false && playerturn == true && C4BoardArray[5, 6] == "E") {

			//checking next available position
			for (int Row = 0; Row < 6; Row++) {
				if (C4BoardArray[Row, 6] == "E") {
					C4BoardArray[Row, 6] = "R";
					DisplayImage(Row, 6, playerturn);
					CurrentRow = Row; // store the row number where the piece was played
					break;
				}
			}

			////////////////// check win condition////////////////////////
			// first checking horizontal
			for (int Column = 5; Column > 2; Column--) {
				if (C4BoardArray[CurrentRow, Column] == "R")
					CountThePieces++;

				else
					break;
			}

			// second checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			// third checking diagonal right up
			if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
				int FirstRow = CurrentRow + 1;
				int LastRow = CurrentRow + 3;
				int ColumnCounterForDiagonalCheck = 5; // to prevent errors when checking diagonal wins

				for (FirstRow; FirstRow <= LastRow; FirstRow++) {
					if (C4BoardArray[FirstRow, ColumnCounterForDiagonalCheck] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else
						break;
				}
			}

			// fourth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;

				// exit out of the if statement and end game
				goto endturn_1;
			}

			// fifth checking diagonal right down
			if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
				int FirstRow = CurrentRow - 1;
				int LastRow = CurrentRow - 3;
				int ColumnCounterForDiagonalCheck = 5;

				for (FirstRow; FirstRow >= LastRow; FirstRow--) {
					if (C4BoardArray[FirstRow, ColumnCounterForDiagonalCheck] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else
						break;
				}
			}

			//sixth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;

				// exit out of the if statement and end game
				goto endturn_1;
			}

			//seventh checking vertical down
			if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
				int copyCurrentRow = CurrentRow - 1;
				int LastRow = CurrentRow - 3;
				for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
					if (C4BoardArray[copyCurrentRow, 6] == "R")
						CountThePieces++;
					else
						break;
				}
			}

			//eigth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			goto endturn_1;

			// line before if statement ends
		}

		// @@@@@@@@@@@@@@@@@@@@@@@@@@@ YELLOW TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
		if (C4NewGame == false && playerturn == false && C4BoardArray[5, 6] == "E") {
			//checking next available possition
			for (int Row = 0; Row < 6; Row++) {
				if (C4BoardArray[Row, 6] == "E") {
					C4BoardArray[Row, 6] = "Y";
					DisplayImage(Row, 6, playerturn);
					CurrentRow = Row; // store the row number where the piece was played
					break;
				}
			}

			////////////////// check win condition////////////////////////
			// first checking horizontal
			for (int Column = 5; Column > 2; Column--) {
				if (C4BoardArray[CurrentRow, Column] == "Y")
					CountThePieces++;
				else
					break;
			}

			// second checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			// third checking diagonal right up
			if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
				int FirstRow = CurrentRow + 1;
				int LastRow = CurrentRow + 3;
				int ColumnCounterForDiagonalCheck = 5; // to prevent errors when checking diagonal wins

				for (FirstRow; FirstRow <= LastRow; FirstRow++) {
					if (C4BoardArray[FirstRow, ColumnCounterForDiagonalCheck] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}
					else
						break;
				}
			}

			// fourth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;

				// exit out of the if statement and end game
				goto endturn_1;
			}

			// fifth checking diagonal right down
			if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
				int FirstRow = CurrentRow - 1;
				int LastRow = CurrentRow - 3;
				int ColumnCounterForDiagonalCheck = 5;

				for (FirstRow; FirstRow >= LastRow; FirstRow--) {
					if (C4BoardArray[FirstRow, ColumnCounterForDiagonalCheck] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}
					else
						break;
				}
			}

			//sixth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			//seventh checking vertical down
			if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
				int copyCurrentRow = CurrentRow - 1;
				int LastRow = CurrentRow - 3;
				for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
					if (C4BoardArray[copyCurrentRow, 6] == "Y")
						CountThePieces++;
					else
						break;
				}
			}

			//eigth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			goto endturn_1;

			//line before yellow if statement ends
		}

		// if (C4NewGame == true) then nothing happens
			goto leavebutton;

	// this could potentially be the error if one comes up
	endturn_1:
		if (playerturn == true)
			playerturn = false;
		else if (playerturn == false)
			playerturn = true;

		// check if gameboard is full, then it is a tie
		int C4CheckingForTie = 0; // if this variable doesn't equal 42 then there are still empty spaces
		for (int C4CheckEmptyRow = 0; C4CheckEmptyRow < C4MaxRow; C4CheckEmptyRow++) {
			for (int C4CheckEmptyCol = 0; C4CheckEmptyCol < C4MaxCol; C4CheckEmptyCol++) {
				if (C4BoardArray[C4CheckEmptyRow, C4CheckEmptyCol] != "E")
					C4CheckingForTie++;
			}
		}

		if (C4NewGame == false && C4CheckingForTie == 42)
			C4NewGame = true;

	leavebutton:
		playerturn = playerturn;

		if (playerturn == true) {
			pictureBox87->Hide();
			pictureBox86->Show();
		}

		else if (playerturn == false) {
			pictureBox86->Hide();
			pictureBox87->Show();
		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		axWindowsMediaPlayer1->Ctlcontrols->play();

		int CurrentRow; // row number can change
		int CurrentCol = 5; // column number cannot change

		int pieces = 0;
		// checking if column is available
		// if column is full leave the button
		for (int PieceCounter = 0; PieceCounter < 6; PieceCounter++) {
			if (C4BoardArray[PieceCounter, 5] != "E")
				pieces++;
		}

		if (pieces == 6)
			goto leavebutton;

		// @@@@@@@@@@@@@@@@@@@@@@@@@@@ RED TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
		if (C4NewGame == false && playerturn == true) {
			//checking next available position
			for (int Row = 0; Row < 6; Row++) {
				if (C4BoardArray[Row, 5] == "E") {
					C4BoardArray[Row, 5] = "R";
					DisplayImage(Row, 5, playerturn);
					CurrentRow = Row; // store the row number where the piece was played
					break;
				}
			}

			////////////////// check win condition////////////////////////
			// first checking horizontal
			for (int Column = 4; Column > 2; Column--) {
				if (C4BoardArray[CurrentRow, Column] == "R")
					CountThePieces++;
				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[CurrentRow, 2] == "R")
				CountThePieces++;
			else if (CountThePieces == 2 && C4BoardArray[CurrentRow, 2] != "R") {
				if (C4BoardArray[CurrentRow, 6] == "R")
					CountThePieces++;
			}//else if ending brace

			// second checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			// third checking diagonal right up
			if (CurrentRow == 0) {
				int SecondRow = CurrentRow + 1;
				int FourthRow = CurrentRow + 3;
				int ColumnCounterForDiagonalCheck = 4; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow <= FourthRow; SecondRow++) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}
			}//closing of if statement

			else if (CurrentRow == 1 || CurrentRow == 2) {
				int LeftSideRow = CurrentRow - 1;
				int SecondRow = CurrentRow + 1;
				int ThirdRow = CurrentRow + 2; //we mean column
				int FourthRow = CurrentRow + 3;
				int ColumnCounterForDiagonalCheck = 4; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow <= ThirdRow; SecondRow++) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				// checking right
				if (CountThePieces == 2 && C4BoardArray[FourthRow, 2] == "R")
					CountThePieces++;
				// checking left
				else if (CountThePieces == 2 && C4BoardArray[FourthRow, 2] != "R") {
					if (C4BoardArray[LeftSideRow, 6] == "R")
						CountThePieces++;
				}
			} //this is the closing brace for the else if statement

			else if (CurrentRow == 3) {
				int LeftSideRow = CurrentRow - 1;
				int SecondRow = CurrentRow + 1;
				int ThirdRow = CurrentRow + 2; //we mean column
				int ColumnCounterForDiagonalCheck = 4; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow <= ThirdRow; SecondRow++) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				if (C4BoardArray[LeftSideRow, 6] == "R")
					CountThePieces++;
			}

			// fourth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			// fifth checking diagonal right down

			if (CurrentRow == 5) {
				int SecondRow = CurrentRow - 1;
				int FourthRow = CurrentRow - 3;
				int ColumnCounterForDiagonalCheck = 4; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow >= FourthRow; SecondRow--) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}
			}//closing of if statement

			else if (CurrentRow == 4 || CurrentRow == 3) {
				int LeftSideRow = CurrentRow + 1;
				int SecondRow = CurrentRow - 1;
				int ThirdRow = CurrentRow - 2; //we mean column
				int FourthRow = CurrentRow - 3;
				int ColumnCounterForDiagonalCheck = 4; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow >= ThirdRow; SecondRow--) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				// checking right
				if (CountThePieces == 2 && C4BoardArray[FourthRow, 2] == "R")
					CountThePieces++;
				// checking left
				else if (CountThePieces == 2 && C4BoardArray[FourthRow, 2] != "R") {
					if (C4BoardArray[LeftSideRow, 6] == "R")
						CountThePieces++;
				}
			} //this is the closing brace for the else if statement

			else if (CurrentRow == 2) {
				int LeftSideRow = CurrentRow + 1;
				int SecondRow = CurrentRow - 1;
				int ThirdRow = CurrentRow - 2; //we mean column
				int ColumnCounterForDiagonalCheck = 4; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow >= ThirdRow; SecondRow--) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				if (C4BoardArray[LeftSideRow, 6] == "R")
					CountThePieces++;
			}

			// sixth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			//seventh checking vertical down
			if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
				int copyCurrentRow = CurrentRow - 1;
				int LastRow = CurrentRow - 3;
				for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
					if (C4BoardArray[copyCurrentRow, 5] == "R")
						CountThePieces++;
					else
						break;
				}
			}

			//eigth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			goto endturn_1;
		} // this is closing brace for red turn

		  // @@@@@@@@@@@@@@@@@@@@@@@@@@@ YELLOW TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
		if (C4NewGame == false && playerturn == false) {
			//checking next available position
			for (int Row = 0; Row < 6; Row++) {
				if (C4BoardArray[Row, 5] == "E") {
					C4BoardArray[Row, 5] = "Y";
					DisplayImage(Row, 5, playerturn);
					CurrentRow = Row; // store the row number where the piece was played
					break;
				}
			}

			////////////////// check win condition////////////////////////
			// first checking horizontal
			for (int Column = 4; Column > 2; Column--) {
				if (C4BoardArray[CurrentRow, Column] == "Y")
					CountThePieces++;
				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[CurrentRow, 2] == "Y")
				CountThePieces++;
			else if (CountThePieces == 2 && C4BoardArray[CurrentRow, 2] != "Y") {
				if (C4BoardArray[CurrentRow, 6] == "Y")
					CountThePieces++;
			}//else if ending brace

			 // second checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			// third checking diagonal right up
			if (CurrentRow == 0) {
				int SecondRow = CurrentRow + 1;
				int FourthRow = CurrentRow + 3;
				int ColumnCounterForDiagonalCheck = 4; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow <= FourthRow; SecondRow++) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}
			}//closing of if statement

			else if (CurrentRow == 1 || CurrentRow == 2) {
				int LeftSideRow = CurrentRow - 1;
				int SecondRow = CurrentRow + 1;
				int ThirdRow = CurrentRow + 2; //we mean column
				int FourthRow = CurrentRow + 3;
				int ColumnCounterForDiagonalCheck = 4; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow <= ThirdRow; SecondRow++) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				// checking right
				if (CountThePieces == 2 && C4BoardArray[FourthRow, 2] == "Y")
					CountThePieces++;
				// checking left
				else if (CountThePieces == 2 && C4BoardArray[FourthRow, 2] != "Y") {
					if (C4BoardArray[LeftSideRow, 6] == "Y")
						CountThePieces++;
				}
			} //this is the closing brace for the else if statement

			else if (CurrentRow == 3) {
				int LeftSideRow = CurrentRow - 1;
				int SecondRow = CurrentRow + 1;
				int ThirdRow = CurrentRow + 2; //we mean column
				int ColumnCounterForDiagonalCheck = 4; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow <= ThirdRow; SecondRow++) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				if (C4BoardArray[LeftSideRow, 6] == "Y")
					CountThePieces++;
			}

			// fourth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			// fifth checking diagonal right down

			if (CurrentRow == 5) {
				int SecondRow = CurrentRow - 1;
				int FourthRow = CurrentRow - 3;
				int ColumnCounterForDiagonalCheck = 4; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow >= FourthRow; SecondRow--) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}
			}//closing of if statement

			else if (CurrentRow == 4 || CurrentRow == 3) {
				int LeftSideRow = CurrentRow + 1;
				int SecondRow = CurrentRow - 1;
				int ThirdRow = CurrentRow - 2; //we mean column
				int FourthRow = CurrentRow - 3;
				int ColumnCounterForDiagonalCheck = 4; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow >= ThirdRow; SecondRow--) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				// checking right
				if (CountThePieces == 2 && C4BoardArray[FourthRow, 2] == "Y")
					CountThePieces++;
				// checking left
				else if (CountThePieces == 2 && C4BoardArray[FourthRow, 2] != "Y") {
					if (C4BoardArray[LeftSideRow, 6] == "Y")
						CountThePieces++;
				}
			} //this is the closing brace for the else if statement

			else if (CurrentRow == 2) {
				int LeftSideRow = CurrentRow + 1;
				int SecondRow = CurrentRow - 1;
				int ThirdRow = CurrentRow - 2; //we mean column
				int ColumnCounterForDiagonalCheck = 4; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow >= ThirdRow; SecondRow--) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				if (C4BoardArray[LeftSideRow, 6] == "Y")
					CountThePieces++;
			}

			// sixth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			//seventh checking vertical down
			if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
				int copyCurrentRow = CurrentRow - 1;
				int LastRow = CurrentRow - 3;
				for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
					if (C4BoardArray[copyCurrentRow, 5] == "Y")
						CountThePieces++;
					else
						break;
				}
			}

			//eigth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			goto endturn_1;
		} // this is closing brace for yellow turn

		// if (C4NewGame == true) then nothing happens
			goto leavebutton;

	endturn_1:
		if (playerturn == true)
			playerturn = false;
		else if (playerturn == false)
			playerturn = true;

		// check if gameboard is full, then it is a tie
		int C4CheckingForTie = 0; // if this variable doesn't equal 42 then there are still empty spaces
		for (int C4CheckEmptyRow = 0; C4CheckEmptyRow < C4MaxRow; C4CheckEmptyRow++) {
			for (int C4CheckEmptyCol = 0; C4CheckEmptyCol < C4MaxCol; C4CheckEmptyCol++) {
				if (C4BoardArray[C4CheckEmptyRow, C4CheckEmptyCol] != "E")
					C4CheckingForTie++;
			}
		}

		if (C4NewGame == false && C4CheckingForTie == 42)
			C4NewGame = true;

	leavebutton:
		playerturn = playerturn;

		if (playerturn == true) {
			pictureBox87->Hide();
			pictureBox86->Show();
		}

		else if (playerturn == false) {
			pictureBox86->Hide();
			pictureBox87->Show();
		}

	}//this is the closing brace for button_2 (aka "B")

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		axWindowsMediaPlayer1->Ctlcontrols->play();

		int CurrentRow; // row number can change
		int CurrentCol = 4; // column number cannot change

		int pieces = 0;
		// checking if column is available
		// if column is full leave the button
		for (int PieceCounter = 0; PieceCounter < 6; PieceCounter++) {
			if (C4BoardArray[PieceCounter, 4] != "E")
				pieces++;
		}

		if (pieces == 6)
			goto leavebutton;

		// @@@@@@@@@@@@@@@@@@@@@@@@@@@ RED TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
		if (C4NewGame == false && playerturn == true) {
			//checking next available position
			for (int Row = 0; Row < 6; Row++) {
				if (C4BoardArray[Row, 4] == "E") {
					C4BoardArray[Row, 4] = "R";
					DisplayImage(Row, 4, playerturn);
					CurrentRow = Row; // store the row number where the piece was played
					break;
				}
			}

			////////////////// check win condition////////////////////////
			// first checking horizontal
			// Add right side to left side

			for (int Column = 3; Column >= 1; Column--) {
				if (C4BoardArray[CurrentRow, Column] == "R")
					CountThePieces++;
				else {
					CountThePieces = 0;
					break;
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			for (int Column = 3; Column >= 2; Column--) {
				if (C4BoardArray[CurrentRow, Column] == "R")
					CountThePieces++;
				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[CurrentRow, 5] == "R")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			for (int Column = 6; Column >= 5; Column--) {
				if (C4BoardArray[CurrentRow, Column] == "R")
					CountThePieces++;
				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[CurrentRow, 3] == "R")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			// second checking diagonal right up
			if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
				int SecondRow = CurrentRow + 1;
				int FourthRow = CurrentRow + 3;
				int ColumnCounterForDiagonalCheck = 3; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow <= FourthRow; SecondRow++) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
				int FirstLeftSideRow = CurrentRow - 1;
				int SecondRow = CurrentRow + 1;
				int ThirdRow = CurrentRow + 2;
				int ColumnCounterForDiagonalCheck = 3; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow <= ThirdRow; SecondRow++) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				if (CountThePieces == 2 && C4BoardArray[FirstLeftSideRow, 5] == "R")
					CountThePieces++;

				CheckWinCondition(CountThePieces, playerturn);

				if (DoWeHaveAWinner == true) {
					DoWeHaveAWinner = false;
					// exit out of the if statement and end game
					goto endturn_1;
				}
			}

			if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
				int FirstLeftSideRow = CurrentRow - 1;
				int SecondLeftSideRow = CurrentRow - 2;
				int SecondRow = CurrentRow + 1;
				int ColumnCounterForDiagonalCheck_1 = 5; // to prevent errors when checking diagonal wins

				for (FirstLeftSideRow; FirstLeftSideRow >= SecondLeftSideRow; FirstLeftSideRow--) {
					if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck_1++;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				if (CountThePieces == 2 && C4BoardArray[SecondRow, 3] == "R")
					CountThePieces++;

				CheckWinCondition(CountThePieces, playerturn);

				if (DoWeHaveAWinner == true) {
					DoWeHaveAWinner = false;
					// exit out of the if statement and end game
					goto endturn_1;
				}
			}

			// third checking diagonal right down
			if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
				int FirstLeftSideRow = CurrentRow + 1;
				int SecondLeftSideRow = CurrentRow + 2;
				int SecondRow = CurrentRow - 1;
				int ColumnCounterForDiagonalCheck_1 = 5; // to prevent errors when checking diagonal wins

				for (FirstLeftSideRow; FirstLeftSideRow <= SecondLeftSideRow; FirstLeftSideRow++) {
					if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck_1++;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				if (CountThePieces == 2 && C4BoardArray[SecondRow, 3] == "R")
					CountThePieces++;

				CheckWinCondition(CountThePieces, playerturn);

				if (DoWeHaveAWinner == true) {
					DoWeHaveAWinner = false;
					// exit out of the if statement and end game
					goto endturn_1;
				}
			}

			if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
				int FirstLeftSideRow = CurrentRow + 1;
				int SecondRow = CurrentRow - 1;
				int ThirdRow = CurrentRow - 2;
				int ColumnCounterForDiagonalCheck = 3; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow >= ThirdRow; SecondRow--) {
					if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				if (CountThePieces == 2 && C4BoardArray[FirstLeftSideRow, 5] == "R")
					CountThePieces++;

				CheckWinCondition(CountThePieces, playerturn);

				if (DoWeHaveAWinner == true) {
					DoWeHaveAWinner = false;
					// exit out of the if statement and end game
					goto endturn_1;
				}
			}

			if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
				int SecondRow = CurrentRow - 1;
				int FourthRow = CurrentRow - 3;
				int ColumnCounterForDiagonalCheck = 3; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow >= FourthRow; SecondRow--) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "R") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				CheckWinCondition(CountThePieces, playerturn);

				if (DoWeHaveAWinner == true) {
					DoWeHaveAWinner = false;
					// exit out of the if statement and end game
					goto endturn_1;
				}
			}

			// fourth checking vertical down
			if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
				int copyCurrentRow = CurrentRow - 1;
				int LastRow = CurrentRow - 3;
				for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
					if (C4BoardArray[copyCurrentRow, 4] == "R")
						CountThePieces++;
					else
						break;
				}
			}

			// fifth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			goto endturn_1;
		} // bracket where red turn ends

		  // @@@@@@@@@@@@@@@@@@@@@@@@@@@ YELLOW TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
		if (C4NewGame == false && playerturn == false) {
			//checking next available position
			for (int Row = 0; Row < 6; Row++) {
				if (C4BoardArray[Row, 4] == "E") {
					C4BoardArray[Row, 4] = "Y";
					DisplayImage(Row, 4, playerturn);
					CurrentRow = Row; // store the row number where the piece was played
					break;
				}
			}

			////////////////// check win condition////////////////////////
			// first checking horizontal
			// Add right side to left side

			for (int Column = 3; Column >= 1; Column--) {
				if (C4BoardArray[CurrentRow, Column] == "Y")
					CountThePieces++;
				else {
					CountThePieces = 0;
					break;
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			for (int Column = 3; Column >= 2; Column--) {
				if (C4BoardArray[CurrentRow, Column] == "Y")
					CountThePieces++;
				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[CurrentRow, 5] == "Y")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			for (int Column = 6; Column >= 5; Column--) {
				if (C4BoardArray[CurrentRow, Column] == "Y")
					CountThePieces++;
				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[CurrentRow, 3] == "Y")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			// second checking diagonal right up
			if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
				int SecondRow = CurrentRow + 1;
				int FourthRow = CurrentRow + 3;
				int ColumnCounterForDiagonalCheck = 3; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow <= FourthRow; SecondRow++) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
				int FirstLeftSideRow = CurrentRow - 1;
				int SecondRow = CurrentRow + 1;
				int ThirdRow = CurrentRow + 2;
				int ColumnCounterForDiagonalCheck = 3; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow <= ThirdRow; SecondRow++) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				if (CountThePieces == 2 && C4BoardArray[FirstLeftSideRow, 5] == "Y")
					CountThePieces++;

				CheckWinCondition(CountThePieces, playerturn);

				if (DoWeHaveAWinner == true) {
					DoWeHaveAWinner = false;
					// exit out of the if statement and end game
					goto endturn_1;
				}
			}

			if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
				int FirstLeftSideRow = CurrentRow - 1;
				int SecondLeftSideRow = CurrentRow - 2;
				int SecondRow = CurrentRow + 1;
				int ColumnCounterForDiagonalCheck_1 = 5; // to prevent errors when checking diagonal wins

				for (FirstLeftSideRow; FirstLeftSideRow >= SecondLeftSideRow; FirstLeftSideRow--) {
					if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck_1++;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				if (CountThePieces == 2 && C4BoardArray[SecondRow, 3] == "Y")
					CountThePieces++;

				CheckWinCondition(CountThePieces, playerturn);

				if (DoWeHaveAWinner == true) {
					DoWeHaveAWinner = false;
					// exit out of the if statement and end game
					goto endturn_1;
				}
			}

			// third checking diagonal right down
			if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
				int FirstLeftSideRow = CurrentRow + 1;
				int SecondLeftSideRow = CurrentRow + 2;
				int SecondRow = CurrentRow - 1;
				int ColumnCounterForDiagonalCheck_1 = 5; // to prevent errors when checking diagonal wins

				for (FirstLeftSideRow; FirstLeftSideRow <= SecondLeftSideRow; FirstLeftSideRow++) {
					if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck_1++;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				if (CountThePieces == 2 && C4BoardArray[SecondRow, 3] == "Y")
					CountThePieces++;

				CheckWinCondition(CountThePieces, playerturn);

				if (DoWeHaveAWinner == true) {
					DoWeHaveAWinner = false;
					// exit out of the if statement and end game
					goto endturn_1;
				}
			}

			if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
				int FirstLeftSideRow = CurrentRow + 1;
				int SecondRow = CurrentRow - 1;
				int ThirdRow = CurrentRow - 2;
				int ColumnCounterForDiagonalCheck = 3; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow >= ThirdRow; SecondRow--) {
					if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				if (CountThePieces == 2 && C4BoardArray[FirstLeftSideRow, 5] == "Y")
					CountThePieces++;

				CheckWinCondition(CountThePieces, playerturn);

				if (DoWeHaveAWinner == true) {
					DoWeHaveAWinner = false;
					// exit out of the if statement and end game
					goto endturn_1;
				}
			}

			if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
				int SecondRow = CurrentRow - 1;
				int FourthRow = CurrentRow - 3;
				int ColumnCounterForDiagonalCheck = 3; // to prevent errors when checking diagonal wins

				for (SecondRow; SecondRow >= FourthRow; SecondRow--) {
					if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "Y") {
						CountThePieces++;
						ColumnCounterForDiagonalCheck--;
					}

					else {
						CountThePieces = 0;
						break;
					}
				}

				CheckWinCondition(CountThePieces, playerturn);

				if (DoWeHaveAWinner == true) {
					DoWeHaveAWinner = false;
					// exit out of the if statement and end game
					goto endturn_1;
				}
			}

			// fourth checking vertical down
			if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
				int copyCurrentRow = CurrentRow - 1;
				int LastRow = CurrentRow - 3;
				for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
					if (C4BoardArray[copyCurrentRow, 4] == "Y")
						CountThePieces++;
					else
						break;
				}
			}

			// fifth checking if player won
			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}

			goto endturn_1;
		} // bracket where yellow turn ends

		goto leavebutton;

	endturn_1:
		if (playerturn == true)
			playerturn = false;
		else if (playerturn == false)
			playerturn = true;

		// check if gameboard is full, then it is a tie
		int C4CheckingForTie = 0; // if this variable doesn't equal 42 then there are still empty spaces
		for (int C4CheckEmptyRow = 0; C4CheckEmptyRow < C4MaxRow; C4CheckEmptyRow++) {
			for (int C4CheckEmptyCol = 0; C4CheckEmptyCol < C4MaxCol; C4CheckEmptyCol++) {
				if (C4BoardArray[C4CheckEmptyRow, C4CheckEmptyCol] != "E")
					C4CheckingForTie++;
			}
		}

		if (C4NewGame == false && C4CheckingForTie == 42)
			C4NewGame = true;

	leavebutton:
		playerturn = playerturn;

		if (playerturn == true) {
			pictureBox87->Hide();
			pictureBox86->Show();
		}

		else if (playerturn == false) {
			pictureBox86->Hide();
			pictureBox87->Show();
		}
	}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	axWindowsMediaPlayer1->Ctlcontrols->play();

	int CurrentRow; // row number can change
	int CurrentCol = 3; // column number cannot change

	int pieces = 0;
	// checking if column is available
	// if column is full leave the button
	for (int PieceCounter = 0; PieceCounter < 6; PieceCounter++) {
		if (C4BoardArray[PieceCounter, 3] != "E")
			pieces++;
	}

	if (pieces == 6)
		goto leavebutton;

	// @@@@@@@@@@@@@@@@@@@@@@@@@@@ RED TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	if (C4NewGame == false && playerturn == true) {
		//checking next available position
		for (int Row = 0; Row < 6; Row++) {
			if (C4BoardArray[Row, 3] == "E") {
				C4BoardArray[Row, 3] = "R";
				DisplayImage(Row, 3, playerturn);
				CurrentRow = Row; // store the row number where the piece was played
				break;
			}
		}

		////////////////// check win condition////////////////////////
		// first checking horizontal

		// right side: columns 0, 1, 2
		for (int Column = 2; Column >= 0; Column--) {
			if (C4BoardArray[CurrentRow, Column] == "R")
				CountThePieces++;

			else
				break;
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// left side: columns 4, 5, 6
		for (int Column = 4; Column <= 6; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "R")
				CountThePieces++;

			else
				break;
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// right middle side: columns 1, 2, 4
		for (int Column = 2; Column >= 1; Column--) {
			if (C4BoardArray[CurrentRow, Column] == "R")
				CountThePieces++;

			else {
				CountThePieces = 0;
				break;
			}
		}

		if (CountThePieces == 2 && C4BoardArray[CurrentRow, 4] == "R")
			CountThePieces++;

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// left middle side: columns 2, 4, 5
		for (int Column = 4; Column <= 5; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "R")
				CountThePieces++;

			else {
				CountThePieces = 0;
				break;
			}
		}

		if (CountThePieces == 2 && C4BoardArray[CurrentRow, 2] == "R")
			CountThePieces++;

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// second checking diagonal right up

		// rows: 0, 1, 2
		if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
			int SecondRow = CurrentRow + 1;
			int FourthRow = CurrentRow + 3;
			int ColumnCounterForDiagonalCheck = 2; // to prevent errors when checking diagonal wins

			for (SecondRow; SecondRow <= FourthRow; SecondRow++) {
				if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck--;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// rows: 1, 2, 3
		if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
			int FirstLeftSideRow = CurrentRow - 1;
			int SecondRow = CurrentRow + 1;
			int ThirdRow = CurrentRow + 2;
			int ColumnCounterForDiagonalCheck = 2; // to prevent errors when checking diagonal wins

			for (SecondRow; SecondRow <= ThirdRow; SecondRow++) {
				if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck--;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[FirstLeftSideRow, 4] == "R")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 2, 3, 4
		if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
			int FirstLeftSideRow = CurrentRow - 1;
			int SecondLeftSideRow = CurrentRow - 2;
			int SecondRow = CurrentRow + 1;
			int ColumnCounterForDiagonalCheck_1 = 4; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= SecondLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[SecondRow, 2] == "R")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 3, 4, 5
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int FirstLeftSideRow = CurrentRow - 1;
			//int SecondLeftSideRow = CurrentRow - 2;
			int ThirdLeftSideRow = CurrentRow - 3;
			int ColumnCounterForDiagonalCheck_1 = 4; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= ThirdLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// third checking diagonal right down
		// rows: 3, 4, 5
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int SecondRow = CurrentRow - 1;
			int FourthRow = CurrentRow - 3;
			int ColumnCounterForDiagonalCheck = 2; // to prevent errors when checking diagonal wins

			for (SecondRow; SecondRow >= FourthRow; SecondRow--) {
				if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck--;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 2, 3, 4
		if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
			int FirstLeftSideRow = CurrentRow + 1;
			int SecondRow = CurrentRow - 1;
			int ThirdRow = CurrentRow - 2;
			int ColumnCounterForDiagonalCheck = 2; // to prevent errors when checking diagonal wins

			for (SecondRow; SecondRow >= ThirdRow; SecondRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck--;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[FirstLeftSideRow, 4] == "R")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 1, 2, 3
		if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
			int FirstLeftSideRow = CurrentRow + 1;
			int SecondLeftSideRow = CurrentRow + 2;
			int SecondRow = CurrentRow - 1;
			int ColumnCounterForDiagonalCheck_1 = 4; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= SecondLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[SecondRow, 2] == "R")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 0, 1, 2
		if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
			int FirstLeftSideRow = CurrentRow + 1;
			int ThirdLeftSideRow = CurrentRow + 3;
			int ColumnCounterForDiagonalCheck_1 = 4; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= ThirdLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// fourth checking vertical win
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int copyCurrentRow = CurrentRow - 1;
			int LastRow = CurrentRow - 3;
			for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
				if (C4BoardArray[copyCurrentRow, 3] == "R")
					CountThePieces++;
				else
					break;
			}
		}

		// fifth checking if player won
		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// need this goto line for the case no win was found
		goto endturn_1;

	} // bracket for red turn only

	  // @@@@@@@@@@@@@@@@@@@@@@@@@@@ YELLOW TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	if (C4NewGame == false && playerturn == false) {
		//checking next available position
		for (int Row = 0; Row < 6; Row++) {
			if (C4BoardArray[Row, 3] == "E") {
				C4BoardArray[Row, 3] = "Y";
				DisplayImage(Row, 3, playerturn);
				CurrentRow = Row; // store the row number where the piece was played
				break;
			}
		}

		////////////////// check win condition////////////////////////
		// first checking horizontal

		// right side: columns 0, 1, 2
		for (int Column = 2; Column >= 0; Column--) {
			if (C4BoardArray[CurrentRow, Column] == "Y")
				CountThePieces++;

			else
				break;
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// left side: columns 4, 5, 6
		for (int Column = 4; Column <= 6; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "Y")
				CountThePieces++;

			else
				break;
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// right middle side: columns 1, 2, 4
		for (int Column = 2; Column >= 1; Column--) {
			if (C4BoardArray[CurrentRow, Column] == "Y")
				CountThePieces++;

			else {
				CountThePieces = 0;
				break;
			}
		}

		if (CountThePieces == 2 && C4BoardArray[CurrentRow, 4] == "Y")
			CountThePieces++;

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// left middle side: columns 2, 4, 5
		for (int Column = 4; Column <= 5; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "Y")
				CountThePieces++;

			else {
				CountThePieces = 0;
				break;
			}
		}

		if (CountThePieces == 2 && C4BoardArray[CurrentRow, 2] == "Y")
			CountThePieces++;

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// second checking diagonal right up

		// rows: 0, 1, 2
		if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
			int SecondRow = CurrentRow + 1;
			int FourthRow = CurrentRow + 3;
			int ColumnCounterForDiagonalCheck = 2; // to prevent errors when checking diagonal wins

			for (SecondRow; SecondRow <= FourthRow; SecondRow++) {
				if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck--;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// rows: 1, 2, 3
		if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
			int FirstLeftSideRow = CurrentRow - 1;
			int SecondRow = CurrentRow + 1;
			int ThirdRow = CurrentRow + 2;
			int ColumnCounterForDiagonalCheck = 2; // to prevent errors when checking diagonal wins

			for (SecondRow; SecondRow <= ThirdRow; SecondRow++) {
				if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck--;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[FirstLeftSideRow, 4] == "Y")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 2, 3, 4
		if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
			int FirstLeftSideRow = CurrentRow - 1;
			int SecondLeftSideRow = CurrentRow - 2;
			int SecondRow = CurrentRow + 1;
			int ColumnCounterForDiagonalCheck_1 = 4; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= SecondLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[SecondRow, 2] == "Y")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 3, 4, 5
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int FirstLeftSideRow = CurrentRow - 1;
			//int SecondLeftSideRow = CurrentRow - 2;
			int ThirdLeftSideRow = CurrentRow - 3;
			int ColumnCounterForDiagonalCheck_1 = 4; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= ThirdLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// third checking diagonal right down
		// rows: 3, 4, 5
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int SecondRow = CurrentRow - 1;
			int FourthRow = CurrentRow - 3;
			int ColumnCounterForDiagonalCheck = 2; // to prevent errors when checking diagonal wins

			for (SecondRow; SecondRow >= FourthRow; SecondRow--) {
				if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck--;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 2, 3, 4
		if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
			int FirstLeftSideRow = CurrentRow + 1;
			int SecondRow = CurrentRow - 1;
			int ThirdRow = CurrentRow - 2;
			int ColumnCounterForDiagonalCheck = 2; // to prevent errors when checking diagonal wins

			for (SecondRow; SecondRow >= ThirdRow; SecondRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck--;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[FirstLeftSideRow, 4] == "Y")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 1, 2, 3
		if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
			int FirstLeftSideRow = CurrentRow + 1;
			int SecondLeftSideRow = CurrentRow + 2;
			int SecondRow = CurrentRow - 1;
			int ColumnCounterForDiagonalCheck_1 = 4; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= SecondLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[SecondRow, 2] == "Y")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 0, 1, 2
		if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
			int FirstLeftSideRow = CurrentRow + 1;
			int ThirdLeftSideRow = CurrentRow + 3;
			int ColumnCounterForDiagonalCheck_1 = 4; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= ThirdLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// fourth checking vertical win
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int copyCurrentRow = CurrentRow - 1;
			int LastRow = CurrentRow - 3;
			for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
				if (C4BoardArray[copyCurrentRow, 3] == "Y")
					CountThePieces++;
				else
					break;
			}
		}

		// fifth checking if player won
		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// need this goto line for the case no win was found
		goto endturn_1;

	} // bracket for yellow turn only

	goto leavebutton;

endturn_1:
	if (playerturn == true)
		playerturn = false;
	else if (playerturn == false)
		playerturn = true;

	// check if gameboard is full, then it is a tie
	int C4CheckingForTie = 0; // if this variable doesn't equal 42 then there are still empty spaces
	for (int C4CheckEmptyRow = 0; C4CheckEmptyRow < C4MaxRow; C4CheckEmptyRow++) {
		for (int C4CheckEmptyCol = 0; C4CheckEmptyCol < C4MaxCol; C4CheckEmptyCol++) {
			if (C4BoardArray[C4CheckEmptyRow, C4CheckEmptyCol] != "E")
				C4CheckingForTie++;
		}
	}

	if (C4NewGame == false && C4CheckingForTie == 42)
		C4NewGame = true;

leavebutton:
	playerturn = playerturn;

	if (playerturn == true) {
		pictureBox87->Hide();
		pictureBox86->Show();
	}

	else if (playerturn == false) {
		pictureBox86->Hide();
		pictureBox87->Show();
	}
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	axWindowsMediaPlayer1->Ctlcontrols->play();

	int CurrentRow; // row number can change
	int CurrentCol = 2; // column number cannot change

	int pieces = 0;
	// checking if column is available
	// if column is full leave the button
	for (int PieceCounter = 0; PieceCounter < 6; PieceCounter++) {
		if (C4BoardArray[PieceCounter, 2] != "E")
			pieces++;
	}

	if (pieces == 6)
		goto leavebutton;

	// @@@@@@@@@@@@@@@@@@@@@@@@@@@ RED TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	if (C4NewGame == false && playerturn == true) {
		//checking next available position
		for (int Row = 0; Row < 6; Row++) {
			if (C4BoardArray[Row, 2] == "E") {
				C4BoardArray[Row, 2] = "R";
				DisplayImage(Row, 2, playerturn);
				CurrentRow = Row; // store the row number where the piece was played
				break;
			}
		}

		////////////////// check win condition////////////////////////
		// first checking horizontal

		// left side: columns 3, 4, 5
		for (int Column = 3; Column <= 5; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "R")
				CountThePieces++;

			else
				break;
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// right middle side: columns 0, 1, 3
		for (int Column = 1; Column >= 0; Column--) {
			if (C4BoardArray[CurrentRow, Column] == "R")
				CountThePieces++;

			else {
				CountThePieces = 0;
				break;
			}
		}

		if (CountThePieces == 2 && C4BoardArray[CurrentRow, 3] == "R")
			CountThePieces++;

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// left middle side: columns 1, 3, 4
		for (int Column = 3; Column <= 4; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "R")
				CountThePieces++;

			else {
				CountThePieces = 0;
				break;
			}
		}

		if (CountThePieces == 2 && C4BoardArray[CurrentRow, 1] == "R")
			CountThePieces++;

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// second checking diagonal right up
		// rows: 1, 2, 3
		if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
			int FirstLeftSideRow = CurrentRow - 1;
			int SecondRow = CurrentRow + 1;
			int ThirdRow = CurrentRow + 2;
			int ColumnCounterForDiagonalCheck = 1; // to prevent errors when checking diagonal wins

			for (SecondRow; SecondRow <= ThirdRow; SecondRow++) {
				if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck--;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[FirstLeftSideRow, 3] == "R")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 2, 3, 4
		if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
			int FirstLeftSideRow = CurrentRow - 1;
			int SecondLeftSideRow = CurrentRow - 2;
			int SecondRow = CurrentRow + 1;
			int ColumnCounterForDiagonalCheck_1 = 3; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= SecondLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[SecondRow, 1] == "R")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 3, 4, 5
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int FirstLeftSideRow = CurrentRow - 1;
			//int SecondLeftSideRow = CurrentRow - 2;
			int ThirdLeftSideRow = CurrentRow - 3;
			int ColumnCounterForDiagonalCheck_1 = 3; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= ThirdLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// third checking diagonal right down
		// rows: 2, 3, 4
		if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
			int FirstLeftSideRow = CurrentRow + 1;
			int SecondRow = CurrentRow - 1;
			int ThirdRow = CurrentRow - 2;
			int ColumnCounterForDiagonalCheck = 1; // to prevent errors when checking diagonal wins

			for (SecondRow; SecondRow >= ThirdRow; SecondRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck--;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[FirstLeftSideRow, 3] == "R")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 1, 2, 3
		if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
			int FirstLeftSideRow = CurrentRow + 1;
			int SecondLeftSideRow = CurrentRow + 2;
			int SecondRow = CurrentRow - 1;
			int ColumnCounterForDiagonalCheck_1 = 3; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= SecondLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[SecondRow, 1] == "R")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 0, 1, 2
		if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
			int FirstLeftSideRow = CurrentRow + 1;
			int ThirdLeftSideRow = CurrentRow + 3;
			int ColumnCounterForDiagonalCheck_1 = 3; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= ThirdLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// fourth checking vertical win
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int copyCurrentRow = CurrentRow - 1;
			int LastRow = CurrentRow - 3;
			for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
				if (C4BoardArray[copyCurrentRow, 2] == "R")
					CountThePieces++;
				else
					break;
			}
		}

		// fifth checking if player won
		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// if player did not win go directly to endturn_1
		goto endturn_1;

	} // bracket for red turn only

	  // @@@@@@@@@@@@@@@@@@@@@@@@@@@ YELLOW TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	if (C4NewGame == false && playerturn == false) {
		//checking next available position
		for (int Row = 0; Row < 6; Row++) {
			if (C4BoardArray[Row, 2] == "E") {
				C4BoardArray[Row, 2] = "Y";
				DisplayImage(Row, 2, playerturn);
				CurrentRow = Row; // store the row number where the piece was played
				break;
			}
		}

		////////////////// check win condition////////////////////////
		// first checking horizontal

		// left side: columns 3, 4, 5
		for (int Column = 3; Column <= 5; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "Y")
				CountThePieces++;

			else
				break;
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// right middle side: columns 0, 1, 3
		for (int Column = 1; Column >= 0; Column--) {
			if (C4BoardArray[CurrentRow, Column] == "Y")
				CountThePieces++;

			else {
				CountThePieces = 0;
				break;
			}
		}

		if (CountThePieces == 2 && C4BoardArray[CurrentRow, 3] == "Y")
			CountThePieces++;

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// left middle side: columns 1, 3, 4
		for (int Column = 3; Column <= 4; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "Y")
				CountThePieces++;

			else {
				CountThePieces = 0;
				break;
			}
		}

		if (CountThePieces == 2 && C4BoardArray[CurrentRow, 1] == "Y")
			CountThePieces++;

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// second checking diagonal right up
		// rows: 1, 2, 3
		if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
			int FirstLeftSideRow = CurrentRow - 1;
			int SecondRow = CurrentRow + 1;
			int ThirdRow = CurrentRow + 2;
			int ColumnCounterForDiagonalCheck = 1; // to prevent errors when checking diagonal wins

			for (SecondRow; SecondRow <= ThirdRow; SecondRow++) {
				if (C4BoardArray[SecondRow, ColumnCounterForDiagonalCheck] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck--;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[FirstLeftSideRow, 3] == "Y")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 2, 3, 4
		if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
			int FirstLeftSideRow = CurrentRow - 1;
			int SecondLeftSideRow = CurrentRow - 2;
			int SecondRow = CurrentRow + 1;
			int ColumnCounterForDiagonalCheck_1 = 3; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= SecondLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[SecondRow, 1] == "Y")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 3, 4, 5
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int FirstLeftSideRow = CurrentRow - 1;
			//int SecondLeftSideRow = CurrentRow - 2;
			int ThirdLeftSideRow = CurrentRow - 3;
			int ColumnCounterForDiagonalCheck_1 = 3; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= ThirdLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// third checking diagonal right down
		// rows: 2, 3, 4
		if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
			int FirstLeftSideRow = CurrentRow + 1;
			int SecondRow = CurrentRow - 1;
			int ThirdRow = CurrentRow - 2;
			int ColumnCounterForDiagonalCheck = 1; // to prevent errors when checking diagonal wins

			for (SecondRow; SecondRow >= ThirdRow; SecondRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck--;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[FirstLeftSideRow, 3] == "Y")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 1, 2, 3
		if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
			int FirstLeftSideRow = CurrentRow + 1;
			int SecondLeftSideRow = CurrentRow + 2;
			int SecondRow = CurrentRow - 1;
			int ColumnCounterForDiagonalCheck_1 = 3; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= SecondLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[SecondRow, 1] == "Y")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 0, 1, 2
		if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
			int FirstLeftSideRow = CurrentRow + 1;
			int ThirdLeftSideRow = CurrentRow + 3;
			int ColumnCounterForDiagonalCheck_1 = 3; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= ThirdLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// fourth checking vertical win
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int copyCurrentRow = CurrentRow - 1;
			int LastRow = CurrentRow - 3;
			for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
				if (C4BoardArray[copyCurrentRow, 2] == "Y")
					CountThePieces++;
				else
					break;
			}
		}

		// fifth checking if player won
		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// if player did not win go directly to endturn_1
		goto endturn_1;

	} // bracket for yellow turn only

	goto leavebutton;

endturn_1:
	if (playerturn == true)
		playerturn = false;
	else if (playerturn == false)
		playerturn = true;

	// check if gameboard is full, then it is a tie
	int C4CheckingForTie = 0; // if this variable doesn't equal 42 then there are still empty spaces
	for (int C4CheckEmptyRow = 0; C4CheckEmptyRow < C4MaxRow; C4CheckEmptyRow++) {
		for (int C4CheckEmptyCol = 0; C4CheckEmptyCol < C4MaxCol; C4CheckEmptyCol++) {
			if (C4BoardArray[C4CheckEmptyRow, C4CheckEmptyCol] != "E")
				C4CheckingForTie++;
		}
	}

	if (C4NewGame == false && C4CheckingForTie == 42)
		C4NewGame = true;

leavebutton:
	playerturn = playerturn;

	if (playerturn == true) {
		pictureBox87->Hide();
		pictureBox86->Show();
	}

	else if (playerturn == false) {
		pictureBox86->Hide();
		pictureBox87->Show();
	}
}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

	axWindowsMediaPlayer1->Ctlcontrols->play();

	int CurrentRow; // row number can change
	int CurrentCol = 1; // column number cannot change

	int pieces = 0;
	// checking if column is available
	// if column is full leave the button
	for (int PieceCounter = 0; PieceCounter < 6; PieceCounter++) {
		if (C4BoardArray[PieceCounter, 1] != "E")
			pieces++;
	}

	if (pieces == 6)
		goto leavebutton;

	// @@@@@@@@@@@@@@@@@@@@@@@@@@@ RED TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	if (C4NewGame == false && playerturn == true) {
		//checking next available position
		for (int Row = 0; Row < 6; Row++) {
			if (C4BoardArray[Row, 1] == "E") {
				C4BoardArray[Row, 1] = "R";
				DisplayImage(Row, 1, playerturn);
				CurrentRow = Row; // store the row number where the piece was played
				break;
			}
		}

		////////////////// check win condition////////////////////////
		// first checking horizontal
		// left side: columns 2, 3, 4
		for (int Column = 2; Column <= 4; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "R")
				CountThePieces++;

			else
				break;
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// left middle side: columns 0, 2, 3
		for (int Column = 2; Column <= 3; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "R")
				CountThePieces++;

			else {
				CountThePieces = 0;
				break;
			}
		}

		if (CountThePieces == 2 && C4BoardArray[CurrentRow, 0] == "R")
			CountThePieces++;

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// second checking diagonal right up
		// rows: 2, 3, 4
		if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
			int FirstLeftSideRow = CurrentRow - 1;
			int SecondLeftSideRow = CurrentRow - 2;
			int SecondRow = CurrentRow + 1;
			int ColumnCounterForDiagonalCheck_1 = 2; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= SecondLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[SecondRow, 0] == "R")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 3, 4, 5
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int FirstLeftSideRow = CurrentRow - 1;
			//int SecondLeftSideRow = CurrentRow - 2;
			int ThirdLeftSideRow = CurrentRow - 3;
			int ColumnCounterForDiagonalCheck_1 = 2; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= ThirdLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// third checking diagonal right down
		// rows: 1, 2, 3
		if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
			int FirstLeftSideRow = CurrentRow + 1;
			int SecondLeftSideRow = CurrentRow + 2;
			int SecondRow = CurrentRow - 1;
			int ColumnCounterForDiagonalCheck_1 = 2; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= SecondLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[SecondRow, 0] == "R")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 0, 1, 2
		if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
			int FirstLeftSideRow = CurrentRow + 1;
			int ThirdLeftSideRow = CurrentRow + 3;
			int ColumnCounterForDiagonalCheck_1 = 2; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= ThirdLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// fourth checking vertical win
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int copyCurrentRow = CurrentRow - 1;
			int LastRow = CurrentRow - 3;
			for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
				if (C4BoardArray[copyCurrentRow, 1] == "R")
					CountThePieces++;
				else
					break;
			}
		}

		// fifth checking if player won
		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// if player did not win go to endturn_1
		goto endturn_1;

	} // bracket for red turn only

	  // @@@@@@@@@@@@@@@@@@@@@@@@@@@ YELLOW TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	if (C4NewGame == false && playerturn == false) {
		//checking next available position
		for (int Row = 0; Row < 6; Row++) {
			if (C4BoardArray[Row, 1] == "E") {
				C4BoardArray[Row, 1] = "Y";
				DisplayImage(Row, 1, playerturn);
				CurrentRow = Row; // store the row number where the piece was played
				break;
			}
		}

		////////////////// check win condition////////////////////////
		// first checking horizontal
		// left side: columns 2, 3, 4
		for (int Column = 2; Column <= 4; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "Y")
				CountThePieces++;

			else
				break;
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// left middle side: columns 0, 2, 3
		for (int Column = 2; Column <= 3; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "Y")
				CountThePieces++;

			else {
				CountThePieces = 0;
				break;
			}
		}

		if (CountThePieces == 2 && C4BoardArray[CurrentRow, 0] == "Y")
			CountThePieces++;

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// second checking diagonal right up
		// rows: 2, 3, 4
		if (CurrentRow == 2 || CurrentRow == 3 || CurrentRow == 4) {
			int FirstLeftSideRow = CurrentRow - 1;
			int SecondLeftSideRow = CurrentRow - 2;
			int SecondRow = CurrentRow + 1;
			int ColumnCounterForDiagonalCheck_1 = 2; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= SecondLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[SecondRow, 0] == "Y")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 3, 4, 5
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int FirstLeftSideRow = CurrentRow - 1;
			//int SecondLeftSideRow = CurrentRow - 2;
			int ThirdLeftSideRow = CurrentRow - 3;
			int ColumnCounterForDiagonalCheck_1 = 2; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= ThirdLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// third checking diagonal right down
		// rows: 1, 2, 3
		if (CurrentRow == 1 || CurrentRow == 2 || CurrentRow == 3) {
			int FirstLeftSideRow = CurrentRow + 1;
			int SecondLeftSideRow = CurrentRow + 2;
			int SecondRow = CurrentRow - 1;
			int ColumnCounterForDiagonalCheck_1 = 2; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= SecondLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			if (CountThePieces == 2 && C4BoardArray[SecondRow, 0] == "Y")
				CountThePieces++;

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// rows: 0, 1, 2
		if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
			int FirstLeftSideRow = CurrentRow + 1;
			int ThirdLeftSideRow = CurrentRow + 3;
			int ColumnCounterForDiagonalCheck_1 = 2; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= ThirdLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// fourth checking vertical win
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int copyCurrentRow = CurrentRow - 1;
			int LastRow = CurrentRow - 3;
			for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
				if (C4BoardArray[copyCurrentRow, 1] == "Y")
					CountThePieces++;
				else
					break;
			}
		}

		// fifth checking if player won
		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// if player did not win go to endturn_1
		goto endturn_1;

	} // bracket for yellow turn only

	goto leavebutton;

endturn_1:
	if (playerturn == true)
		playerturn = false;
	else if (playerturn == false)
		playerturn = true;

	// check if gameboard is full, then it is a tie
	int C4CheckingForTie = 0; // if this variable doesn't equal 42 then there are still empty spaces
	for (int C4CheckEmptyRow = 0; C4CheckEmptyRow < C4MaxRow; C4CheckEmptyRow++) {
		for (int C4CheckEmptyCol = 0; C4CheckEmptyCol < C4MaxCol; C4CheckEmptyCol++) {
			if (C4BoardArray[C4CheckEmptyRow, C4CheckEmptyCol] != "E")
				C4CheckingForTie++;
		}
	}

	if (C4NewGame == false && C4CheckingForTie == 42)
		C4NewGame = true;

leavebutton:
	playerturn = playerturn;

	if (playerturn == true) {
		pictureBox87->Hide();
		pictureBox86->Show();
	}

	else if (playerturn == false) {
		pictureBox86->Hide();
		pictureBox87->Show();
	}
}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

	axWindowsMediaPlayer1->Ctlcontrols->play();

	int CurrentRow; // row number can change
	int CurrentCol = 0; // column number cannot change

	int pieces = 0;
	// checking if column is available
	// if column is full leave the button
	for (int PieceCounter = 0; PieceCounter < 6; PieceCounter++) {
		if (C4BoardArray[PieceCounter, 0] != "E")
			pieces++;
	}

	if (pieces == 6)
		goto leavebutton;

	// @@@@@@@@@@@@@@@@@@@@@@@@@@@ RED TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	if (C4NewGame == false && playerturn == true) {
		//checking next available position
		for (int Row = 0; Row < 6; Row++) {
			if (C4BoardArray[Row, 0] == "E") {
				C4BoardArray[Row, 0] = "R";
				DisplayImage(Row, 0, playerturn);
				CurrentRow = Row; // store the row number where the piece was played
				break;
			}
		}

		////////////////// check win condition////////////////////////
		// first checking horizontal
		// left side: columns 1, 2, 3
		for (int Column = 1; Column <= 3; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "R")
				CountThePieces++;

			else
				break;
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// second checking diagonal right up
		// rows: 3, 4, 5
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int FirstLeftSideRow = CurrentRow - 1;
			//int SecondLeftSideRow = CurrentRow - 2;
			int ThirdLeftSideRow = CurrentRow - 3;
			int ColumnCounterForDiagonalCheck_1 = 1; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= ThirdLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// third checking diagonal right down
		// rows: 0, 1, 2
		if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
			int FirstLeftSideRow = CurrentRow + 1;
			int ThirdLeftSideRow = CurrentRow + 3;
			int ColumnCounterForDiagonalCheck_1 = 1; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= ThirdLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "R") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// fourth checking vertical win
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int copyCurrentRow = CurrentRow - 1;
			int LastRow = CurrentRow - 3;
			for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
				if (C4BoardArray[copyCurrentRow, 0] == "R")
					CountThePieces++;
				else
					break;
			}
		}

		// fifth checking if player won
		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// if player did not win go directly to endturn_1
		goto endturn_1;

	} // bracket for red turn only

	  // @@@@@@@@@@@@@@@@@@@@@@@@@@@ YELLOW TURN @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	if (C4NewGame == false && playerturn == false) {
		//checking next available position
		for (int Row = 0; Row < 6; Row++) {
			if (C4BoardArray[Row, 0] == "E") {
				C4BoardArray[Row, 0] = "Y";
				DisplayImage(Row, 0, playerturn);
				CurrentRow = Row; // store the row number where the piece was played
				break;
			}
		}

		////////////////// check win condition////////////////////////
		// first checking horizontal
		// left side: columns 1, 2, 3
		for (int Column = 1; Column <= 3; Column++) {
			if (C4BoardArray[CurrentRow, Column] == "Y")
				CountThePieces++;

			else
				break;
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// second checking diagonal right up
		// rows: 3, 4, 5
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int FirstLeftSideRow = CurrentRow - 1;
			//int SecondLeftSideRow = CurrentRow - 2;
			int ThirdLeftSideRow = CurrentRow - 3;
			int ColumnCounterForDiagonalCheck_1 = 1; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow >= ThirdLeftSideRow; FirstLeftSideRow--) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}

			CheckWinCondition(CountThePieces, playerturn);

			if (DoWeHaveAWinner == true) {
				DoWeHaveAWinner = false;
				// exit out of the if statement and end game
				goto endturn_1;
			}
		}

		// third checking diagonal right down
		// rows: 0, 1, 2
		if (CurrentRow == 0 || CurrentRow == 1 || CurrentRow == 2) {
			int FirstLeftSideRow = CurrentRow + 1;
			int ThirdLeftSideRow = CurrentRow + 3;
			int ColumnCounterForDiagonalCheck_1 = 1; // to prevent errors when checking diagonal wins

			for (FirstLeftSideRow; FirstLeftSideRow <= ThirdLeftSideRow; FirstLeftSideRow++) {
				if (C4BoardArray[FirstLeftSideRow, ColumnCounterForDiagonalCheck_1] == "Y") {
					CountThePieces++;
					ColumnCounterForDiagonalCheck_1++;
				}

				else {
					CountThePieces = 0;
					break;
				}
			}
		}

		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// fourth checking vertical win
		if (CurrentRow == 3 || CurrentRow == 4 || CurrentRow == 5) {
			int copyCurrentRow = CurrentRow - 1;
			int LastRow = CurrentRow - 3;
			for (copyCurrentRow; copyCurrentRow >= LastRow; copyCurrentRow--) {
				if (C4BoardArray[copyCurrentRow, 0] == "Y")
					CountThePieces++;
				else
					break;
			}
		}

		// fifth checking if player won
		CheckWinCondition(CountThePieces, playerturn);

		if (DoWeHaveAWinner == true) {
			DoWeHaveAWinner = false;
			// exit out of the if statement and end game
			goto endturn_1;
		}

		// if player did not win go directly to endturn_1
		goto endturn_1;

	} // bracket for yellow turn only

	goto leavebutton;

endturn_1:
	if (playerturn == true)
		playerturn = false;
	else if (playerturn == false)
		playerturn = true;

	// check if gameboard is full, then it is a tie
	int C4CheckingForTie = 0; // if this variable doesn't equal 42 then there are still empty spaces
	for (int C4CheckEmptyRow = 0; C4CheckEmptyRow < C4MaxRow; C4CheckEmptyRow++) {
		for (int C4CheckEmptyCol = 0; C4CheckEmptyCol < C4MaxCol; C4CheckEmptyCol++) {
			if (C4BoardArray[C4CheckEmptyRow, C4CheckEmptyCol] != "E")
				C4CheckingForTie++;
		}
	}

	if (C4NewGame == false && C4CheckingForTie == 42)
		C4NewGame = true;

leavebutton:
	playerturn = playerturn;

	if (playerturn == true) {
		pictureBox87->Hide();
		pictureBox86->Show();
	}

	else if (playerturn == false) {
		pictureBox86->Hide();
		pictureBox87->Show();
	}
}

private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
}

};
}