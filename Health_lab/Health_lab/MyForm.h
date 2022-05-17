/*
				| Copyright 2022 | MaximFLUNN | Maxim Filatov Group : 3821B1PR2 |
				|      GitHub profile link : https://github.com/MaximFLUNN      |
------------------------------------------------------------------------------------------------------ -
								  | Header form file |
*/
#include <string>
#include "baseEngine.h"

#pragma once
namespace Healthlab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	const char warningSymbols[32] = {
		'_', '-', '"', '\'', '=',
		'+', ')', '(', '*', '&',
		'%', '$', '#', '№', '@',
		'\\', '/', ';', ':', '`',
		'~', '?', '!', ',', '.',
		'[', ']', '{', '}', '^', ' ', '\0'};
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:	int xmove = 0;
	private: System::Windows::Forms::Button^ Exit_1;
	private: System::Windows::Forms::Button^ Exit_2;
	private: System::Windows::Forms::Button^ Min_btn;
	private: System::Windows::Forms::Button^ Min_btn_o;

	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ Login_img;
	private: System::Windows::Forms::PictureBox^ Password_img;
	private: System::Windows::Forms::TextBox^ Login_text;
	private: System::Windows::Forms::TextBox^ Password_text;
	private: System::Windows::Forms::PictureBox^ lock_img;
	private: System::Windows::Forms::PictureBox^ unlock_img;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbl1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ pLogin;
	private: System::Windows::Forms::Label^ lR;


	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Timer^ timer10ms_1;
	private: System::Windows::Forms::Timer^ timer10ms_2;





































	public:


	public:

	public:

	public:
	public:	int ymove = 0;
		  bool isUser = true;
	private: System::Windows::Forms::Timer^ minus;
	private: System::Windows::Forms::Timer^ t0;
	private: System::Windows::Forms::Timer^ t100;
	private: System::Windows::Forms::PictureBox^ doctor_img;
	private: System::Windows::Forms::Panel^ pRegister;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ tSurname;



	private: System::Windows::Forms::TextBox^ tName;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tPatronymic;






	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TextBox^ tPhone;

	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::PictureBox^ pL2;

private: System::Windows::Forms::PictureBox^ pL1;

private: System::Windows::Forms::TextBox^ tPassword;

private: System::Windows::Forms::TextBox^ tLogin;

	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Button^ Reg_btn2;

private: System::Windows::Forms::Button^ Reg_btn1;
private: System::Windows::Forms::Label^ lL;



	public:
	private: System::Windows::Forms::Timer^ plus;
		   bool isChangeUser = false;
private: System::Windows::Forms::Label^ warningAll;
private: System::Windows::Forms::Label^ warningPhone;
private: System::Windows::Forms::Label^ warningPassword;
private: System::Windows::Forms::Label^ warningPatronymic;
private: System::Windows::Forms::Label^ warningLogin;
private: System::Windows::Forms::Label^ warningSurname;
private: System::Windows::Forms::Label^ warningName;
private: System::Windows::Forms::Label^ pwarningAllPart1;

private: System::Windows::Forms::Label^ pwarningPassword;


private: System::Windows::Forms::Label^ pwarningLogin;
private: System::Windows::Forms::Label^ pwarningAllPart2;


	   BASE* startDataBase = new BASE();
       
		  
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Exit_1 = (gcnew System::Windows::Forms::Button());
			this->Exit_2 = (gcnew System::Windows::Forms::Button());
			this->Min_btn = (gcnew System::Windows::Forms::Button());
			this->Min_btn_o = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->Login_img = (gcnew System::Windows::Forms::PictureBox());
			this->Password_img = (gcnew System::Windows::Forms::PictureBox());
			this->Login_text = (gcnew System::Windows::Forms::TextBox());
			this->Password_text = (gcnew System::Windows::Forms::TextBox());
			this->lock_img = (gcnew System::Windows::Forms::PictureBox());
			this->unlock_img = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pLogin = (gcnew System::Windows::Forms::Panel());
			this->pwarningAllPart2 = (gcnew System::Windows::Forms::Label());
			this->pwarningAllPart1 = (gcnew System::Windows::Forms::Label());
			this->pwarningPassword = (gcnew System::Windows::Forms::Label());
			this->pwarningLogin = (gcnew System::Windows::Forms::Label());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lR = (gcnew System::Windows::Forms::Label());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->doctor_img = (gcnew System::Windows::Forms::PictureBox());
			this->timer10ms_1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer10ms_2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->minus = (gcnew System::Windows::Forms::Timer(this->components));
			this->plus = (gcnew System::Windows::Forms::Timer(this->components));
			this->t0 = (gcnew System::Windows::Forms::Timer(this->components));
			this->t100 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pRegister = (gcnew System::Windows::Forms::Panel());
			this->lL = (gcnew System::Windows::Forms::Label());
			this->Reg_btn2 = (gcnew System::Windows::Forms::Button());
			this->Reg_btn1 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tPhone = (gcnew System::Windows::Forms::TextBox());
			this->tPatronymic = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->warningAll = (gcnew System::Windows::Forms::Label());
			this->warningPhone = (gcnew System::Windows::Forms::Label());
			this->warningPassword = (gcnew System::Windows::Forms::Label());
			this->warningPatronymic = (gcnew System::Windows::Forms::Label());
			this->warningLogin = (gcnew System::Windows::Forms::Label());
			this->warningSurname = (gcnew System::Windows::Forms::Label());
			this->warningName = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pL2 = (gcnew System::Windows::Forms::PictureBox());
			this->pL1 = (gcnew System::Windows::Forms::PictureBox());
			this->tPassword = (gcnew System::Windows::Forms::TextBox());
			this->tSurname = (gcnew System::Windows::Forms::TextBox());
			this->tLogin = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->tName = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Login_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Password_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lock_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->unlock_img))->BeginInit();
			this->pLogin->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->doctor_img))->BeginInit();
			this->pRegister->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pL2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pL1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// Exit_1
			// 
			this->Exit_1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->Exit_1, L"Exit_1");
			this->Exit_1->FlatAppearance->BorderSize = 0;
			this->Exit_1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Exit_1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Exit_1->Name = L"Exit_1";
			this->Exit_1->TabStop = false;
			this->Exit_1->UseVisualStyleBackColor = false;
			this->Exit_1->Click += gcnew System::EventHandler(this, &MyForm::EXIT_Click);
			this->Exit_1->MouseLeave += gcnew System::EventHandler(this, &MyForm::EXIT_uph_Click);
			// 
			// Exit_2
			// 
			this->Exit_2->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->Exit_2, L"Exit_2");
			this->Exit_2->FlatAppearance->BorderSize = 0;
			this->Exit_2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Exit_2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Exit_2->Name = L"Exit_2";
			this->Exit_2->TabStop = false;
			this->Exit_2->UseVisualStyleBackColor = false;
			this->Exit_2->MouseEnter += gcnew System::EventHandler(this, &MyForm::EXIT_downh_Click);
			// 
			// Min_btn
			// 
			this->Min_btn->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->Min_btn, L"Min_btn");
			this->Min_btn->FlatAppearance->BorderSize = 0;
			this->Min_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Min_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Min_btn->Name = L"Min_btn";
			this->Min_btn->TabStop = false;
			this->Min_btn->UseVisualStyleBackColor = false;
			this->Min_btn->Click += gcnew System::EventHandler(this, &MyForm::Minimaze_Click);
			this->Min_btn->MouseLeave += gcnew System::EventHandler(this, &MyForm::Min_uph_Click);
			// 
			// Min_btn_o
			// 
			this->Min_btn_o->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->Min_btn_o, L"Min_btn_o");
			this->Min_btn_o->FlatAppearance->BorderSize = 0;
			this->Min_btn_o->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Min_btn_o->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Min_btn_o->Name = L"Min_btn_o";
			this->Min_btn_o->TabStop = false;
			this->Min_btn_o->UseVisualStyleBackColor = false;
			this->Min_btn_o->MouseEnter += gcnew System::EventHandler(this, &MyForm::Min_downh_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Name = L"label1";
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->label1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->label1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
			// 
			// notifyIcon1
			// 
			resources->ApplyResources(this->notifyIcon1, L"notifyIcon1");
			this->notifyIcon1->Click += gcnew System::EventHandler(this, &MyForm::notifyIcon1_Click);
			// 
			// Login_img
			// 
			resources->ApplyResources(this->Login_img, L"Login_img");
			this->Login_img->Name = L"Login_img";
			this->Login_img->TabStop = false;
			// 
			// Password_img
			// 
			resources->ApplyResources(this->Password_img, L"Password_img");
			this->Password_img->Name = L"Password_img";
			this->Password_img->TabStop = false;
			// 
			// Login_text
			// 
			this->Login_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->Login_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->Login_text, L"Login_text");
			this->Login_text->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->Login_text->Name = L"Login_text";
			this->Login_text->TabStop = false;
			// 
			// Password_text
			// 
			this->Password_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->Password_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->Password_text, L"Password_text");
			this->Password_text->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->Password_text->Name = L"Password_text";
			this->Password_text->TabStop = false;
			// 
			// lock_img
			// 
			this->lock_img->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->lock_img, L"lock_img");
			this->lock_img->Name = L"lock_img";
			this->lock_img->TabStop = false;
			this->lock_img->Click += gcnew System::EventHandler(this, &MyForm::lock_img_Click);
			// 
			// unlock_img
			// 
			this->unlock_img->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->unlock_img, L"unlock_img");
			this->unlock_img->Name = L"unlock_img";
			this->unlock_img->TabStop = false;
			this->unlock_img->Click += gcnew System::EventHandler(this, &MyForm::unlock_img_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Silver;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Name = L"label2";
			// 
			// lbl1
			// 
			resources->ApplyResources(this->lbl1, L"lbl1");
			this->lbl1->BackColor = System::Drawing::Color::Transparent;
			this->lbl1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lbl1->Name = L"lbl1";
			this->lbl1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->lbl1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->lbl1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Silver;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Name = L"label3";
			// 
			// pLogin
			// 
			this->pLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->pLogin, L"pLogin");
			this->pLogin->Controls->Add(this->pwarningAllPart2);
			this->pLogin->Controls->Add(this->pwarningAllPart1);
			this->pLogin->Controls->Add(this->pwarningPassword);
			this->pLogin->Controls->Add(this->pwarningLogin);
			this->pLogin->Controls->Add(this->btn1);
			this->pLogin->Controls->Add(this->label6);
			this->pLogin->Controls->Add(this->lR);
			this->pLogin->Controls->Add(this->label3);
			this->pLogin->Controls->Add(this->lbl1);
			this->pLogin->Controls->Add(this->label2);
			this->pLogin->Controls->Add(this->unlock_img);
			this->pLogin->Controls->Add(this->lock_img);
			this->pLogin->Controls->Add(this->Password_text);
			this->pLogin->Controls->Add(this->label1);
			this->pLogin->Controls->Add(this->Login_text);
			this->pLogin->Controls->Add(this->Password_img);
			this->pLogin->Controls->Add(this->Login_img);
			this->pLogin->Controls->Add(this->btn2);
			this->pLogin->Controls->Add(this->doctor_img);
			this->pLogin->Controls->Add(this->pictureBox1);
			this->pLogin->Name = L"pLogin";
			this->pLogin->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->pLogin->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->pLogin->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
			// 
			// pwarningAllPart2
			// 
			resources->ApplyResources(this->pwarningAllPart2, L"pwarningAllPart2");
			this->pwarningAllPart2->BackColor = System::Drawing::Color::Transparent;
			this->pwarningAllPart2->ForeColor = System::Drawing::Color::Red;
			this->pwarningAllPart2->Name = L"pwarningAllPart2";
			// 
			// pwarningAllPart1
			// 
			resources->ApplyResources(this->pwarningAllPart1, L"pwarningAllPart1");
			this->pwarningAllPart1->BackColor = System::Drawing::Color::Transparent;
			this->pwarningAllPart1->ForeColor = System::Drawing::Color::Red;
			this->pwarningAllPart1->Name = L"pwarningAllPart1";
			// 
			// pwarningPassword
			// 
			resources->ApplyResources(this->pwarningPassword, L"pwarningPassword");
			this->pwarningPassword->BackColor = System::Drawing::Color::Transparent;
			this->pwarningPassword->ForeColor = System::Drawing::Color::Red;
			this->pwarningPassword->Name = L"pwarningPassword";
			// 
			// pwarningLogin
			// 
			resources->ApplyResources(this->pwarningLogin, L"pwarningLogin");
			this->pwarningLogin->BackColor = System::Drawing::Color::Transparent;
			this->pwarningLogin->ForeColor = System::Drawing::Color::Red;
			this->pwarningLogin->Name = L"pwarningLogin";
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->btn1, L"btn1");
			this->btn1->FlatAppearance->BorderSize = 0;
			this->btn1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn1->Name = L"btn1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->MouseEnter += gcnew System::EventHandler(this, &MyForm::btnIn_downh_Click);
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Name = L"label6";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// lR
			// 
			resources->ApplyResources(this->lR, L"lR");
			this->lR->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->lR->Name = L"lR";
			this->lR->Click += gcnew System::EventHandler(this, &MyForm::swapPanel);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->btn2, L"btn2");
			this->btn2->FlatAppearance->BorderSize = 0;
			this->btn2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn2->ForeColor = System::Drawing::SystemColors::Control;
			this->btn2->Name = L"btn2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->btn2->MouseLeave += gcnew System::EventHandler(this, &MyForm::btnIn_uph_Click);
			// 
			// doctor_img
			// 
			resources->ApplyResources(this->doctor_img, L"doctor_img");
			this->doctor_img->Name = L"doctor_img";
			this->doctor_img->TabStop = false;
			this->doctor_img->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->doctor_img->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->doctor_img->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
			// 
			// timer10ms_1
			// 
			this->timer10ms_1->Interval = 10;
			this->timer10ms_1->Tick += gcnew System::EventHandler(this, &MyForm::timer10ms_1_Tick);
			// 
			// timer10ms_2
			// 
			this->timer10ms_2->Interval = 10;
			this->timer10ms_2->Tick += gcnew System::EventHandler(this, &MyForm::timer10ms_2_Tick);
			// 
			// minus
			// 
			this->minus->Interval = 30;
			this->minus->Tick += gcnew System::EventHandler(this, &MyForm::minus_Tick);
			// 
			// plus
			// 
			this->plus->Interval = 30;
			this->plus->Tick += gcnew System::EventHandler(this, &MyForm::plus_Tick);
			// 
			// t0
			// 
			this->t0->Interval = 10;
			this->t0->Tick += gcnew System::EventHandler(this, &MyForm::t0_Tick);
			// 
			// t100
			// 
			this->t100->Interval = 10;
			this->t100->Tick += gcnew System::EventHandler(this, &MyForm::t100_Tick);
			// 
			// pRegister
			// 
			this->pRegister->Controls->Add(this->lL);
			this->pRegister->Controls->Add(this->Reg_btn2);
			this->pRegister->Controls->Add(this->Reg_btn1);
			this->pRegister->Controls->Add(this->label13);
			this->pRegister->Controls->Add(this->label10);
			this->pRegister->Controls->Add(this->tPhone);
			this->pRegister->Controls->Add(this->tPatronymic);
			this->pRegister->Controls->Add(this->pictureBox15);
			this->pRegister->Controls->Add(this->pictureBox10);
			this->pRegister->Controls->Add(this->label12);
			this->pRegister->Controls->Add(this->label8);
			this->pRegister->Controls->Add(this->label11);
			this->pRegister->Controls->Add(this->warningAll);
			this->pRegister->Controls->Add(this->warningPhone);
			this->pRegister->Controls->Add(this->warningPassword);
			this->pRegister->Controls->Add(this->warningPatronymic);
			this->pRegister->Controls->Add(this->warningLogin);
			this->pRegister->Controls->Add(this->warningSurname);
			this->pRegister->Controls->Add(this->warningName);
			this->pRegister->Controls->Add(this->label7);
			this->pRegister->Controls->Add(this->pL2);
			this->pRegister->Controls->Add(this->pL1);
			this->pRegister->Controls->Add(this->tPassword);
			this->pRegister->Controls->Add(this->tSurname);
			this->pRegister->Controls->Add(this->tLogin);
			this->pRegister->Controls->Add(this->pictureBox12);
			this->pRegister->Controls->Add(this->tName);
			this->pRegister->Controls->Add(this->pictureBox11);
			this->pRegister->Controls->Add(this->pictureBox5);
			this->pRegister->Controls->Add(this->pictureBox6);
			this->pRegister->Controls->Add(this->label4);
			this->pRegister->Controls->Add(this->pictureBox3);
			resources->ApplyResources(this->pRegister, L"pRegister");
			this->pRegister->Name = L"pRegister";
			this->pRegister->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->pRegister->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->pRegister->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
			// 
			// lL
			// 
			resources->ApplyResources(this->lL, L"lL");
			this->lL->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->lL->Name = L"lL";
			this->lL->Click += gcnew System::EventHandler(this, &MyForm::swapPanel);
			// 
			// Reg_btn2
			// 
			this->Reg_btn2->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->Reg_btn2, L"Reg_btn2");
			this->Reg_btn2->FlatAppearance->BorderSize = 0;
			this->Reg_btn2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Reg_btn2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Reg_btn2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Reg_btn2->Name = L"Reg_btn2";
			this->Reg_btn2->UseVisualStyleBackColor = false;
			this->Reg_btn2->MouseEnter += gcnew System::EventHandler(this, &MyForm::btnIn_downh_Click);
			// 
			// Reg_btn1
			// 
			this->Reg_btn1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->Reg_btn1, L"Reg_btn1");
			this->Reg_btn1->FlatAppearance->BorderSize = 0;
			this->Reg_btn1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Reg_btn1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Reg_btn1->ForeColor = System::Drawing::SystemColors::Control;
			this->Reg_btn1->Name = L"Reg_btn1";
			this->Reg_btn1->UseVisualStyleBackColor = false;
			this->Reg_btn1->Click += gcnew System::EventHandler(this, &MyForm::Reg_btn1_Click);
			this->Reg_btn1->MouseLeave += gcnew System::EventHandler(this, &MyForm::btnIn_uph_Click);
			// 
			// label13
			// 
			resources->ApplyResources(this->label13, L"label13");
			this->label13->BackColor = System::Drawing::Color::Silver;
			this->label13->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label13->Name = L"label13";
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->BackColor = System::Drawing::Color::Silver;
			this->label10->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label10->Name = L"label10";
			// 
			// tPhone
			// 
			this->tPhone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->tPhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->tPhone, L"tPhone");
			this->tPhone->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tPhone->Name = L"tPhone";
			this->tPhone->TabStop = false;
			// 
			// tPatronymic
			// 
			this->tPatronymic->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->tPatronymic->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->tPatronymic, L"tPatronymic");
			this->tPatronymic->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tPatronymic->Name = L"tPatronymic";
			this->tPatronymic->TabStop = false;
			// 
			// pictureBox15
			// 
			resources->ApplyResources(this->pictureBox15, L"pictureBox15");
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox10
			// 
			resources->ApplyResources(this->pictureBox10, L"pictureBox10");
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->TabStop = false;
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->BackColor = System::Drawing::Color::Silver;
			this->label12->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label12->Name = L"label12";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->BackColor = System::Drawing::Color::Silver;
			this->label8->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label8->Name = L"label8";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->BackColor = System::Drawing::Color::Silver;
			this->label11->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label11->Name = L"label11";
			// 
			// warningAll
			// 
			resources->ApplyResources(this->warningAll, L"warningAll");
			this->warningAll->BackColor = System::Drawing::Color::Transparent;
			this->warningAll->ForeColor = System::Drawing::Color::Red;
			this->warningAll->Name = L"warningAll";
			// 
			// warningPhone
			// 
			resources->ApplyResources(this->warningPhone, L"warningPhone");
			this->warningPhone->BackColor = System::Drawing::Color::Transparent;
			this->warningPhone->ForeColor = System::Drawing::Color::Red;
			this->warningPhone->Name = L"warningPhone";
			// 
			// warningPassword
			// 
			resources->ApplyResources(this->warningPassword, L"warningPassword");
			this->warningPassword->BackColor = System::Drawing::Color::Transparent;
			this->warningPassword->ForeColor = System::Drawing::Color::Red;
			this->warningPassword->Name = L"warningPassword";
			// 
			// warningPatronymic
			// 
			resources->ApplyResources(this->warningPatronymic, L"warningPatronymic");
			this->warningPatronymic->BackColor = System::Drawing::Color::Transparent;
			this->warningPatronymic->ForeColor = System::Drawing::Color::Red;
			this->warningPatronymic->Name = L"warningPatronymic";
			// 
			// warningLogin
			// 
			resources->ApplyResources(this->warningLogin, L"warningLogin");
			this->warningLogin->BackColor = System::Drawing::Color::Transparent;
			this->warningLogin->ForeColor = System::Drawing::Color::Red;
			this->warningLogin->Name = L"warningLogin";
			// 
			// warningSurname
			// 
			resources->ApplyResources(this->warningSurname, L"warningSurname");
			this->warningSurname->BackColor = System::Drawing::Color::Transparent;
			this->warningSurname->ForeColor = System::Drawing::Color::Red;
			this->warningSurname->Name = L"warningSurname";
			// 
			// warningName
			// 
			resources->ApplyResources(this->warningName, L"warningName");
			this->warningName->BackColor = System::Drawing::Color::Transparent;
			this->warningName->ForeColor = System::Drawing::Color::Red;
			this->warningName->Name = L"warningName";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->BackColor = System::Drawing::Color::Silver;
			this->label7->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label7->Name = L"label7";
			// 
			// pL2
			// 
			this->pL2->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->pL2, L"pL2");
			this->pL2->Name = L"pL2";
			this->pL2->TabStop = false;
			this->pL2->Click += gcnew System::EventHandler(this, &MyForm::unlock_img_Click);
			// 
			// pL1
			// 
			this->pL1->BackColor = System::Drawing::Color::Silver;
			resources->ApplyResources(this->pL1, L"pL1");
			this->pL1->Name = L"pL1";
			this->pL1->TabStop = false;
			this->pL1->Click += gcnew System::EventHandler(this, &MyForm::lock_img_Click);
			// 
			// tPassword
			// 
			this->tPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->tPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->tPassword, L"tPassword");
			this->tPassword->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tPassword->Name = L"tPassword";
			this->tPassword->TabStop = false;
			// 
			// tSurname
			// 
			this->tSurname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->tSurname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->tSurname, L"tSurname");
			this->tSurname->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tSurname->Name = L"tSurname";
			this->tSurname->TabStop = false;
			// 
			// tLogin
			// 
			this->tLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->tLogin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->tLogin, L"tLogin");
			this->tLogin->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tLogin->Name = L"tLogin";
			this->tLogin->TabStop = false;
			// 
			// pictureBox12
			// 
			resources->ApplyResources(this->pictureBox12, L"pictureBox12");
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->TabStop = false;
			// 
			// tName
			// 
			this->tName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->tName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->tName, L"tName");
			this->tName->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->tName->Name = L"tName";
			this->tName->TabStop = false;
			// 
			// pictureBox11
			// 
			resources->ApplyResources(this->pictureBox11, L"pictureBox11");
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox5
			// 
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			resources->ApplyResources(this->pictureBox6, L"pictureBox6");
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->TabStop = false;
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Name = L"label4";
			this->label4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->label4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->label4->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
			// 
			// pictureBox3
			// 
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			this->pictureBox3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->pictureBox3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->pictureBox3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ControlBox = false;
			this->Controls->Add(this->Min_btn_o);
			this->Controls->Add(this->Min_btn);
			this->Controls->Add(this->Exit_2);
			this->Controls->Add(this->Exit_1);
			this->Controls->Add(this->pLogin);
			this->Controls->Add(this->pRegister);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->TransparencyKey = System::Drawing::Color::Black;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Login_img))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Password_img))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lock_img))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->unlock_img))->EndInit();
			this->pLogin->ResumeLayout(false);
			this->pLogin->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->doctor_img))->EndInit();
			this->pRegister->ResumeLayout(false);
			this->pRegister->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pL2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pL1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		notifyIcon1->BalloonTipTitle = "Health lab";
		notifyIcon1->BalloonTipText = "Приложение работает в фоне. Нажмите, чтобы открыть.";
		notifyIcon1->Visible = false;
		MyForm::Opacity = 0.0;
		timer10ms_1->Enabled = true;
		startDataBase->readFile();
	}
	private: System::Void MyForm_MouseMove1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button != System::Windows::Forms::MouseButtons::Left)
		{
			xmove = e->X;
			ymove = e->Y;
		}
		else
		{
			this->Left = this->Left + (e->X - xmove);
			this->Top = this->Top + (e->Y - ymove);
		}
	}
	private: System::Void MyForm_Transperent100(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		timer10ms_2->Enabled = false;
		timer10ms_1->Enabled = true;		
	}
	private: System::Void MyForm_Transperent65(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (MyForm::Opacity > 0.79) {
			timer10ms_1->Enabled = false;
			timer10ms_2->Enabled = true;
		}
	}
	private: System::Void timer10ms_1_Tick(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Opacity += 0.01;
		if (MyForm::Opacity == 1.0) { timer10ms_1->Enabled = false; }
		//btn2->Size = System::Drawing::Size(btn2->Size.Width + 1, btn2->Size.Height + 1);
		//btn2->Refresh();
	}
	private: System::Void plus_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (btn2->Size.Width < 178) {
			btn2->Size = System::Drawing::Size(btn2->Size.Width + 2, btn2->Size.Height);
			btn1->Size = System::Drawing::Size(btn1->Size.Width + 2, btn1->Size.Height);
		}
		if (btn2->Size.Height < 70) {
			btn2->Size = System::Drawing::Size(btn2->Size.Width, btn2->Size.Height + 1);
			btn1->Size = System::Drawing::Size(btn1->Size.Width, btn1->Size.Height + 1);
		}
		if (btn2->Location.X > 121) {
			btn2->Location = Point(btn2->Location.X - 1, btn2->Location.Y);
			btn1->Location = Point(btn1->Location.X - 1, btn1->Location.Y);
		}
		if (btn2->Location.Y > 394) {
			btn2->Location = Point(btn2->Location.X, btn2->Location.Y - 1);
			btn1->Location = Point(btn1->Location.X, btn1->Location.Y - 1);
		}
		///////////////////////////////////////reg
		if (Reg_btn1->Size.Width < 178) {
			Reg_btn1->Size = System::Drawing::Size(btn1->Size.Width + 2, btn1->Size.Height);
			Reg_btn2->Size = System::Drawing::Size(btn1->Size.Width + 2, btn1->Size.Height);
		}
		if (Reg_btn1->Size.Height < 70) {
			Reg_btn1->Size = System::Drawing::Size(btn1->Size.Width, btn1->Size.Height + 1);
			Reg_btn2->Size = System::Drawing::Size(btn1->Size.Width, btn1->Size.Height + 1);
		}
		if (Reg_btn1->Location.X > 448) {
			Reg_btn1->Location = Point(Reg_btn1->Location.X - 1, Reg_btn1->Location.Y);
			Reg_btn2->Location = Point(Reg_btn2->Location.X - 1, Reg_btn2->Location.Y);
		}
		if (Reg_btn1->Location.Y > 390) {
			Reg_btn1->Location = Point(Reg_btn1->Location.X, Reg_btn1->Location.Y - 1);
			Reg_btn2->Location = Point(Reg_btn2->Location.X, Reg_btn2->Location.Y - 1);
		}
	}
	private: System::Void minus_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (btn2->Size.Width > 168) {
			btn2->Size = System::Drawing::Size(btn2->Size.Width - 2, btn2->Size.Height);
			btn1->Size = System::Drawing::Size(btn1->Size.Width - 2, btn1->Size.Height);
		}
		if (btn2->Size.Height > 65) {
			btn2->Size = System::Drawing::Size(btn2->Size.Width, btn2->Size.Height - 1);
			btn1->Size = System::Drawing::Size(btn1->Size.Width, btn1->Size.Height - 1);
		}
		if (btn2->Location.X < 126) {
			btn2->Location = Point(btn2->Location.X + 1, btn2->Location.Y);
			btn1->Location = Point(btn1->Location.X + 1, btn1->Location.Y);
		}
		if (btn2->Location.Y < 396) {
			btn2->Location = Point(btn2->Location.X, btn2->Location.Y + 1);
			btn1->Location = Point(btn1->Location.X, btn1->Location.Y + 1);
		}
		////////////////////////////////////reg
		if (Reg_btn1->Size.Width > 168) {
			Reg_btn1->Size = System::Drawing::Size(btn1->Size.Width - 2, btn1->Size.Height);
			Reg_btn2->Size = System::Drawing::Size(btn1->Size.Width - 2, btn1->Size.Height);
		}
		if (Reg_btn1->Size.Height > 65) {
			Reg_btn1->Size = System::Drawing::Size(btn1->Size.Width, btn1->Size.Height - 1);
			Reg_btn2->Size = System::Drawing::Size(btn1->Size.Width, btn1->Size.Height - 1);
		}
		if (Reg_btn1->Location.X < 453) {
			Reg_btn1->Location = Point(Reg_btn1->Location.X + 1, Reg_btn1->Location.Y);
			Reg_btn2->Location = Point(Reg_btn2->Location.X + 1, Reg_btn2->Location.Y);
		}
		if (Reg_btn1->Location.Y < 392) {
			Reg_btn1->Location = Point(Reg_btn1->Location.X, Reg_btn1->Location.Y + 1);
			Reg_btn2->Location = Point(Reg_btn2->Location.X, Reg_btn2->Location.Y + 1);
		}
		///
		//if (btn2->Size.Width == 168 && btn2->Size.Height == 65 && btn2->Location.X == 126 && btn2->Location.Y == 396) { 
		//	plus->Enabled = false;
		//	minus->Enabled = false; 
		//}
	}
	private: System::Void timer10ms_2_Tick(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Opacity -= 0.01;
		if (MyForm::Opacity <= 0.8) { timer10ms_2->Enabled = false; }
	}
	private: System::Void EXIT_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::Application::Exit();
	}
	private: System::Void EXIT_downh_Click(System::Object^ sender, System::EventArgs^ e) {
		Exit_2->Visible = false;
	}
	private: System::Void EXIT_uph_Click(System::Object^ sender, System::EventArgs^ e) {		
		Exit_2->Visible = true;
	}
	private: System::Void Min_downh_Click(System::Object^ sender, System::EventArgs^ e) {
		Min_btn_o->Visible = false;
	}
	private: System::Void Min_uph_Click(System::Object^ sender, System::EventArgs^ e) {
		Min_btn_o->Visible = true;
	}
	private: System::Void Minimaze_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void btnIn_downh_Click(System::Object^ sender, System::EventArgs^ e) {
		btn1->Visible = false;
		Reg_btn2->Visible = false;
		plus->Enabled = true;
		minus->Enabled = false;
	}
	private: System::Void btnIn_uph_Click(System::Object^ sender, System::EventArgs^ e) {
		btn1->Visible = true;
		Reg_btn2->Visible = true;
		plus->Enabled = false;
		minus->Enabled = true;
	}
	private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
		if (WindowState == FormWindowState::Minimized) {
			notifyIcon1->Visible = true;
			notifyIcon1->ShowBalloonTip(1500);
		}
	}
	private: System::Void notifyIcon1_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowInTaskbar = true;
		notifyIcon1->Visible = false;
		this->WindowState = FormWindowState::Normal;
	}
	private: System::Void unlock_img_Click(System::Object^ sender, System::EventArgs^ e) {
		if (((PictureBox^)sender)->Name == "unlock_img") {
			Password_text->PasswordChar = '*';
			unlock_img->Visible = false;
			lock_img->Visible = true;
		}
		else if (((PictureBox^)sender)->Name == "pL2") {
			tPassword->PasswordChar = '*';
			pL2->Visible = false;
			pL1->Visible = true;
		}
	}
	private: System::Void lock_img_Click(System::Object^ sender, System::EventArgs^ e) {
		if (((PictureBox^)sender)->Name == "lock_img") {
			Password_text->PasswordChar = false;
			lock_img->Visible = false;
			unlock_img->Visible = true;
		}
		else if (((PictureBox^)sender)->Name == "pL1") {
			tPassword->PasswordChar = false;
			pL1->Visible = false;
			pL2->Visible = true;
		}	
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (t0->Enabled == false && t100->Enabled == false)	t0->Enabled = true;
		isChangeUser = true;
	}
	private: System::Void t0_Tick(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Opacity -= 0.1;
		if (MyForm::Opacity == 0) {
			t0->Enabled = false;
			t100->Enabled = true;
			if (isChangeUser) SwichUser();
			else {
				if (pLogin->Visible == true && pRegister->Visible == false) {
					pLogin->Visible = false;
					pRegister->Visible = true;
					tName->Text = "";
					tSurname->Text = "";
					tPatronymic->Text = "";
					tLogin->Text = "";
					tPassword->Text = "";
					tPhone->Text = "";
				}
				else {
					pLogin->Visible = true;
					pRegister->Visible = false;
					Login_text->Text = "";
					Password_text->Text = "";
				}
			}
		}
	}
	private: System::Void t100_Tick(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Opacity += 0.1;
		if (MyForm::Opacity == 1.0) {
			t100->Enabled = false;
		}
	}
	void SwichUser() {
		clearWarningsLogin();
		Login_text->Text = "";
		Password_text->Text = "";
		isUser = !isUser;
		if (!isUser) {
			lbl1->Text = "Вход как сотрудника";
			lbl1->Location = Point(70, 179);
			label6->Text = "Войти как пациент";
			doctor_img->Visible = true;
			lR->Visible = false;
		}
		else {
			lbl1->Text = "Вход";
			lbl1->Location = Point(166, 179);
			label6->Text = "Войти как сотрудник";
			doctor_img->Visible = false;
			lR->Visible = true;
		}
		isChangeUser = false;
	}
	private: System::Void swapPanel(System::Object^ sender, System::EventArgs^ e) {
		if (t0->Enabled == false && t100->Enabled == false)	t0->Enabled = true;
		clearWarningsALL();
	}
	void clearWarningsLogin() {
		pwarningLogin->Visible = false;
		pwarningPassword->Visible = false;
		pwarningAllPart1->Visible = false;
		pwarningAllPart2->Visible = false;
	}
	void clearWarningsALL() {
		pwarningLogin->Visible = false;
		pwarningPassword->Visible = false;
		pwarningAllPart1->Visible = false;
		pwarningAllPart2->Visible = false;
		warningName->Visible = false;
		warningSurname->Visible = false;
		warningPatronymic->Visible = false;
		warningLogin->Visible = false;
		warningPassword->Visible = false;
		warningPhone->Visible = false;
		warningAll->Visible = false;
	}
	/// <summary>
	/// Перевод из System::String^ в std::string
	/// </summary>
	/// <param name="s">- Что нужно перевести</param>
	/// <param name="os">- Куда нужно перевести</param>
	/// <returns></returns>
	std::string StringConverter(String^ s) {
		const char* chars = (const char*)(Runtime::InteropServices::Marshal::StringToHGlobalAnsi(s)).ToPointer();
		std::string os = chars;
		Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)chars));
		return os;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkCorrectLogin()) {
			if (startDataBase->sendMessageLogin(
				StringConverter(Login_text->Text),
				StringConverter(Password_text->Text), isUser)) {
				MessageBox::Show("   Вы успешно авторизованы!   ");
			}
			else {
				MessageBox::Show("   Пользователь не найден!   ");
			}
		}
	}
	private: System::Void Reg_btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkCorrectRegister()) {
			if (startDataBase->sendMessageRegister(
				StringConverter(tName->Text),
				StringConverter(tSurname->Text),
				StringConverter(tPatronymic->Text),
				StringConverter(tLogin->Text),
				StringConverter(tPassword->Text),
				StringConverter(tPhone->Text))) {
				MessageBox::Show("   Пользователь успешно зарегистрирован!   ");
			}
			else {
				MessageBox::Show("   Такой логин уже занят!   ");
			}
		}
	}
	bool checkCorrectLogin() {
		bool correct = true;
		if (!checkCorrectDataInLine(Login_text->Text, pwarningLogin)) { correct = false; }
		if (!checkCorrectDataInLine(Password_text->Text, pwarningPassword)) { correct = false; }
		if (correct) {
			pwarningAllPart1->Visible = false;
			pwarningAllPart2->Visible = false;
			return true;
		}
		pwarningAllPart1->Visible = true;
		pwarningAllPart2->Visible = true;
		return false;
	}
	bool checkCorrectRegister() {
		bool correct = true;
		if (!checkCorrectDataInLine(tName->Text, warningName)) { correct = false; }
		if (!checkCorrectDataInLine(tSurname->Text, warningSurname)) { correct = false; }
		if (!checkCorrectDataInLine(tPatronymic->Text, warningPatronymic)) { correct = false; }
		if (!checkCorrectDataInLine(tLogin->Text, warningLogin)) { correct = false; }
		if (!checkCorrectDataInLine(tPassword->Text, warningPassword)) { correct = false; }
		if (!checkCorrectDataInLine(tPhone->Text, warningPhone)) { correct = false; }
		if (correct) {
			warningAll->Visible = false;
			return true;
		}
		else {
			warningAll->Visible = true;
			return false;
		}
	}
	bool checkCorrectDataInLine(String^ line, Label^ warning) {
		if (line->Length == 0) { 
			warning->Visible = true;
			return false; 
		}
		for (int i = 0; i < line->Length; i++) {
			for (int j = 0; j < 32; j++) {
				if (line[i] == warningSymbols[j]) {
					warning->Visible = true;
					return false;
				}
			}
		}
		warning->Visible = false;
		return true;
	}
};
}
