/*
				| Copyright 2022 | MaximFLUNN | Maxim Filatov Group : 3821B1PR2 |
				|      GitHub profile link : https://github.com/MaximFLUNN      |
------------------------------------------------------------------------------------------------------ -
								  | Header form file |
*/
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->timer10ms_1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer10ms_2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Login_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Password_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lock_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->unlock_img))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Exit_1
			// 
			this->Exit_1->BackColor = System::Drawing::Color::Transparent;
			this->Exit_1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit_1.BackgroundImage")));
			this->Exit_1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Exit_1->FlatAppearance->BorderSize = 0;
			this->Exit_1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Exit_1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Exit_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit_1->Location = System::Drawing::Point(1035, 20);
			this->Exit_1->Name = L"Exit_1";
			this->Exit_1->Size = System::Drawing::Size(25, 25);
			this->Exit_1->TabIndex = 0;
			this->Exit_1->TabStop = false;
			this->Exit_1->UseVisualStyleBackColor = false;
			this->Exit_1->Click += gcnew System::EventHandler(this, &MyForm::EXIT_Click);
			this->Exit_1->MouseLeave += gcnew System::EventHandler(this, &MyForm::EXIT_uph_Click);
			// 
			// Exit_2
			// 
			this->Exit_2->BackColor = System::Drawing::Color::Transparent;
			this->Exit_2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exit_2.BackgroundImage")));
			this->Exit_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Exit_2->FlatAppearance->BorderSize = 0;
			this->Exit_2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Exit_2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Exit_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit_2->Location = System::Drawing::Point(1035, 20);
			this->Exit_2->Name = L"Exit_2";
			this->Exit_2->Size = System::Drawing::Size(25, 25);
			this->Exit_2->TabIndex = 0;
			this->Exit_2->TabStop = false;
			this->Exit_2->UseVisualStyleBackColor = false;
			this->Exit_2->MouseEnter += gcnew System::EventHandler(this, &MyForm::EXIT_downh_Click);
			// 
			// Min_btn
			// 
			this->Min_btn->BackColor = System::Drawing::Color::Transparent;
			this->Min_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Min_btn.BackgroundImage")));
			this->Min_btn->FlatAppearance->BorderSize = 0;
			this->Min_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Min_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Min_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Min_btn->Location = System::Drawing::Point(1005, 20);
			this->Min_btn->Name = L"Min_btn";
			this->Min_btn->Size = System::Drawing::Size(25, 25);
			this->Min_btn->TabIndex = 0;
			this->Min_btn->TabStop = false;
			this->Min_btn->UseVisualStyleBackColor = false;
			this->Min_btn->Click += gcnew System::EventHandler(this, &MyForm::Minimaze_Click);
			this->Min_btn->MouseLeave += gcnew System::EventHandler(this, &MyForm::Min_uph_Click);
			// 
			// Min_btn_o
			// 
			this->Min_btn_o->BackColor = System::Drawing::Color::Transparent;
			this->Min_btn_o->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Min_btn_o.BackgroundImage")));
			this->Min_btn_o->FlatAppearance->BorderSize = 0;
			this->Min_btn_o->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Min_btn_o->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Min_btn_o->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Min_btn_o->Location = System::Drawing::Point(1005, 20);
			this->Min_btn_o->Name = L"Min_btn_o";
			this->Min_btn_o->Size = System::Drawing::Size(25, 25);
			this->Min_btn_o->TabIndex = 0;
			this->Min_btn_o->TabStop = false;
			this->Min_btn_o->UseVisualStyleBackColor = false;
			this->Min_btn_o->MouseEnter += gcnew System::EventHandler(this, &MyForm::Min_downh_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Polaris", 7.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(152, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Health  lab";
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->label1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->label1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(136, 20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(136, 123);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"Health lab";
			this->notifyIcon1->Click += gcnew System::EventHandler(this, &MyForm::notifyIcon1_Click);
			// 
			// Login_img
			// 
			this->Login_img->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Login_img.BackgroundImage")));
			this->Login_img->Location = System::Drawing::Point(3, 219);
			this->Login_img->Name = L"Login_img";
			this->Login_img->Size = System::Drawing::Size(399, 65);
			this->Login_img->TabIndex = 2;
			this->Login_img->TabStop = false;
			// 
			// Password_img
			// 
			this->Password_img->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Password_img.BackgroundImage")));
			this->Password_img->Location = System::Drawing::Point(3, 311);
			this->Password_img->Name = L"Password_img";
			this->Password_img->Size = System::Drawing::Size(399, 65);
			this->Password_img->TabIndex = 2;
			this->Password_img->TabStop = false;
			// 
			// Login_text
			// 
			this->Login_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->Login_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Login_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Login_text->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->Login_text->Location = System::Drawing::Point(19, 236);
			this->Login_text->Name = L"Login_text";
			this->Login_text->Size = System::Drawing::Size(365, 33);
			this->Login_text->TabIndex = 0;
			this->Login_text->TabStop = false;
			this->Login_text->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Password_text
			// 
			this->Password_text->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->Password_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Password_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Password_text->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->Password_text->Location = System::Drawing::Point(19, 326);
			this->Password_text->Name = L"Password_text";
			this->Password_text->PasswordChar = '*';
			this->Password_text->Size = System::Drawing::Size(365, 33);
			this->Password_text->TabIndex = 0;
			this->Password_text->TabStop = false;
			this->Password_text->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lock_img
			// 
			this->lock_img->BackColor = System::Drawing::Color::Silver;
			this->lock_img->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lock_img.BackgroundImage")));
			this->lock_img->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->lock_img->Location = System::Drawing::Point(336, 319);
			this->lock_img->Name = L"lock_img";
			this->lock_img->Size = System::Drawing::Size(48, 43);
			this->lock_img->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->lock_img->TabIndex = 4;
			this->lock_img->TabStop = false;
			this->lock_img->Click += gcnew System::EventHandler(this, &MyForm::lock_img_Click);
			// 
			// unlock_img
			// 
			this->unlock_img->BackColor = System::Drawing::Color::Silver;
			this->unlock_img->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"unlock_img.BackgroundImage")));
			this->unlock_img->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->unlock_img->Location = System::Drawing::Point(336, 319);
			this->unlock_img->Name = L"unlock_img";
			this->unlock_img->Size = System::Drawing::Size(48, 43);
			this->unlock_img->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->unlock_img->TabIndex = 4;
			this->unlock_img->TabStop = false;
			this->unlock_img->Visible = false;
			this->unlock_img->Click += gcnew System::EventHandler(this, &MyForm::unlock_img_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Silver;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(25, 229);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Логин";
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->BackColor = System::Drawing::Color::Transparent;
			this->lbl1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lbl1->Location = System::Drawing::Point(166, 179);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(78, 35);
			this->lbl1->TabIndex = 5;
			this->lbl1->Text = L"Вход";
			this->lbl1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->lbl1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->lbl1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Silver;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(25, 319);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Пароль";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->Controls->Add(this->btn1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->lbl1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->unlock_img);
			this->panel1->Controls->Add(this->lock_img);
			this->panel1->Controls->Add(this->Password_text);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Login_text);
			this->panel1->Controls->Add(this->Password_img);
			this->panel1->Controls->Add(this->Login_img);
			this->panel1->Controls->Add(this->btn2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(360, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(405, 536);
			this->panel1->TabIndex = 1;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
			// 
			// btn1
			// 
			this->btn1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn1.BackgroundImage")));
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn1->FlatAppearance->BorderSize = 0;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 18.25F, System::Drawing::FontStyle::Bold));
			this->btn1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btn1->Location = System::Drawing::Point(126, 396);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(168, 65);
			this->btn1->TabIndex = 9;
			this->btn1->Text = L"Войти";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->MouseEnter += gcnew System::EventHandler(this, &MyForm::btnIn_downh_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.3F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(147, 509);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 18);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Войти как сотрудник";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label5->Location = System::Drawing::Point(300, 379);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 18);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Нет аккаунта\?";
			// 
			// btn2
			// 
			this->btn2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn2.BackgroundImage")));
			this->btn2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn2->FlatAppearance->BorderSize = 0;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 18.25F, System::Drawing::FontStyle::Bold));
			this->btn2->ForeColor = System::Drawing::SystemColors::Control;
			this->btn2->Location = System::Drawing::Point(126, 396);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(168, 65);
			this->btn2->TabIndex = 9;
			this->btn2->Text = L"Войти";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->btn2->MouseLeave += gcnew System::EventHandler(this, &MyForm::btnIn_uph_Click);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1080, 560);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Min_btn_o);
			this->Controls->Add(this->Min_btn);
			this->Controls->Add(this->Exit_2);
			this->Controls->Add(this->Exit_1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
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
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		notifyIcon1->BalloonTipTitle = "Health lab";
		notifyIcon1->BalloonTipText = "Приложение работает в фоне. Нажмите, чтобы открыть.";
		notifyIcon1->Visible = false;
		MyForm::Opacity = 0.0;
		timer10ms_1->Enabled = true;
		//System::Threading::Thread::Sleep(1000);
		//if (Task::Delay(5000)) {
		//MyForm::Opacity = 1.0;
		//}
		//await Task::Delay(10);
		//}
		
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
	}
	private: System::Void btnIn_uph_Click(System::Object^ sender, System::EventArgs^ e) {
		btn1->Visible = true;
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
		Password_text->PasswordChar = '*';
		unlock_img->Visible = false;
		lock_img->Visible = true;
	}
	private: System::Void lock_img_Click(System::Object^ sender, System::EventArgs^ e) {
		Password_text->PasswordChar = false;
		lock_img->Visible = false;
		unlock_img->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		isUser = !isUser;
		if (!isUser) {
			lbl1->Text = "Вход как сотрудника";
			lbl1->Location = Point(70, 179);
			label6->Text = "Войти как пациент";
		}
		else {
			lbl1->Text = "Вход";
			lbl1->Location = Point(166, 179);
			label6->Text = "Войти как сотрудник";
		}
	}
};
}
