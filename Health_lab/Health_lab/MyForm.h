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
	private: System::Windows::Forms::Timer^ minus;
	private: System::Windows::Forms::Timer^ t0;
	private: System::Windows::Forms::Timer^ t100;
	private: System::Windows::Forms::PictureBox^ doctor_img;

	public:
	private: System::Windows::Forms::Timer^ plus;
		  
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
			this->doctor_img = (gcnew System::Windows::Forms::PictureBox());
			this->timer10ms_1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer10ms_2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->minus = (gcnew System::Windows::Forms::Timer(this->components));
			this->plus = (gcnew System::Windows::Forms::Timer(this->components));
			this->t0 = (gcnew System::Windows::Forms::Timer(this->components));
			this->t100 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Login_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Password_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lock_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->unlock_img))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->doctor_img))->BeginInit();
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
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			resources->ApplyResources(this->panel1, L"panel1");
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
			this->panel1->Controls->Add(this->doctor_img);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Name = L"panel1";
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent65);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove1);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_Transperent100);
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
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(147)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label5->Name = L"label5";
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
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
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
			this->Controls->Add(this->panel1);
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
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->doctor_img))->EndInit();
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
		if (btn2->Size.Width == 168 && btn2->Size.Height == 65 && btn2->Location.X == 126 && btn2->Location.Y == 396) { 
			plus->Enabled = false;
			minus->Enabled = false; 
		}
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
		plus->Enabled = true;
		minus->Enabled = false;
	}
	private: System::Void btnIn_uph_Click(System::Object^ sender, System::EventArgs^ e) {
		btn1->Visible = true;
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
		if (t0->Enabled == false && t100->Enabled == false)	t0->Enabled = true;
	}
	private: System::Void t0_Tick(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Opacity -= 0.1;
		if (MyForm::Opacity == 0) {
			t0->Enabled = false;
			t100->Enabled = true;
			SwichUser();
		}
	}
	private: System::Void t100_Tick(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Opacity += 0.1;
		if (MyForm::Opacity == 1.0) {
			t100->Enabled = false;
		}
	}
	void SwichUser() {
		Login_text->Text = "";
		Password_text->Text = "";
		isUser = !isUser;
		if (!isUser) {
			lbl1->Text = "Вход как сотрудника";
			lbl1->Location = Point(70, 179);
			label6->Text = "Войти как пациент";
			doctor_img->Visible = true;
		}
		else {
			lbl1->Text = "Вход";
			lbl1->Location = Point(166, 179);
			label6->Text = "Войти как сотрудник";
			doctor_img->Visible = false;
		}
	}
};
}
