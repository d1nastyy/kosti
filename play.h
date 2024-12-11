#pragma once
#include <string>
#include <fstream>
#include <msclr/marshal_cppstd.h>

namespace kosti {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	using namespace std;

	/// <summary>
	/// Сводка для play
	/// </summary>
	public ref class play : public System::Windows::Forms::Form
	{
	public:
		play(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			Random^ rand = gcnew Random();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~play()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxName;
	protected:
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBoxSurname;
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::Label^ labelSurname;
	private: System::Windows::Forms::Button^ buttonNameOk;
	private: System::Windows::Forms::ComboBox^ comboBoxChislo;
	private: System::Windows::Forms::Label^ labelChislo;
	private: System::Windows::Forms::Label^ labelStavka;
	private: System::Windows::Forms::TextBox^ textBoxStavka;
	private: System::Windows::Forms::Label^ labelBalans;
	private: System::Windows::Forms::Label^ labelBalans100;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ buttonClose;
	private: System::ComponentModel::IContainer^ components;
	private:int balans, stavkaCount;
	private: Random^ rand = gcnew Random();
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
		   /// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		void Start()
		{
			balans = 100;
			stavkaCount = 1;
			labelBalans100->Text = balans.ToString();
		}
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(play::typeid));
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelSurname = (gcnew System::Windows::Forms::Label());
			this->buttonNameOk = (gcnew System::Windows::Forms::Button());
			this->comboBoxChislo = (gcnew System::Windows::Forms::ComboBox());
			this->labelChislo = (gcnew System::Windows::Forms::Label());
			this->labelStavka = (gcnew System::Windows::Forms::Label());
			this->textBoxStavka = (gcnew System::Windows::Forms::TextBox());
			this->labelBalans = (gcnew System::Windows::Forms::Label());
			this->labelBalans100 = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(251, 23);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(100, 20);
			this->textBoxName->TabIndex = 0;
			this->textBoxName->TextChanged += gcnew System::EventHandler(this, &play::textBoxName_TextChanged);
			this->textBoxName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &play::textBoxName_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(-263, -105);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->Location = System::Drawing::Point(380, 23);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(100, 20);
			this->textBoxSurname->TabIndex = 2;
			this->textBoxSurname->TextChanged += gcnew System::EventHandler(this, &play::textBoxSurname_TextChanged);
			this->textBoxSurname->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &play::textBoxSurname_KeyPress);
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->BackColor = System::Drawing::SystemColors::WindowText;
			this->labelName->ForeColor = System::Drawing::SystemColors::Control;
			this->labelName->Location = System::Drawing::Point(286, 7);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(29, 13);
			this->labelName->TabIndex = 3;
			this->labelName->Text = L"Имя";
			// 
			// labelSurname
			// 
			this->labelSurname->AutoSize = true;
			this->labelSurname->BackColor = System::Drawing::SystemColors::WindowText;
			this->labelSurname->ForeColor = System::Drawing::SystemColors::Control;
			this->labelSurname->Location = System::Drawing::Point(401, 7);
			this->labelSurname->Name = L"labelSurname";
			this->labelSurname->Size = System::Drawing::Size(56, 13);
			this->labelSurname->TabIndex = 4;
			this->labelSurname->Text = L"Фамилия";
			// 
			// buttonNameOk
			// 
			this->buttonNameOk->Enabled = false;
			this->buttonNameOk->Location = System::Drawing::Point(329, 49);
			this->buttonNameOk->Name = L"buttonNameOk";
			this->buttonNameOk->Size = System::Drawing::Size(75, 23);
			this->buttonNameOk->TabIndex = 5;
			this->buttonNameOk->Text = L"OK";
			this->buttonNameOk->UseVisualStyleBackColor = true;
			this->buttonNameOk->Click += gcnew System::EventHandler(this, &play::buttonNameOk_Click);
			// 
			// comboBoxChislo
			// 
			this->comboBoxChislo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxChislo->FormattingEnabled = true;
			this->comboBoxChislo->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->comboBoxChislo->Location = System::Drawing::Point(25, 85);
			this->comboBoxChislo->Name = L"comboBoxChislo";
			this->comboBoxChislo->Size = System::Drawing::Size(128, 21);
			this->comboBoxChislo->TabIndex = 6;
			this->comboBoxChislo->SelectedIndexChanged += gcnew System::EventHandler(this, &play::comboBox1_SelectedIndexChanged);
			// 
			// labelChislo
			// 
			this->labelChislo->BackColor = System::Drawing::Color::Black;
			this->labelChislo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelChislo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->labelChislo->Location = System::Drawing::Point(9, 59);
			this->labelChislo->Name = L"labelChislo";
			this->labelChislo->Size = System::Drawing::Size(162, 23);
			this->labelChislo->TabIndex = 7;
			this->labelChislo->Text = L"Выберите число:";
			this->labelChislo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelStavka
			// 
			this->labelStavka->BackColor = System::Drawing::Color::Black;
			this->labelStavka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelStavka->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->labelStavka->Location = System::Drawing::Point(12, 207);
			this->labelStavka->Name = L"labelStavka";
			this->labelStavka->Size = System::Drawing::Size(151, 23);
			this->labelStavka->TabIndex = 8;
			this->labelStavka->Text = L"Выберите ставку:";
			this->labelStavka->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxStavka
			// 
			this->textBoxStavka->Location = System::Drawing::Point(25, 233);
			this->textBoxStavka->Name = L"textBoxStavka";
			this->textBoxStavka->Size = System::Drawing::Size(128, 20);
			this->textBoxStavka->TabIndex = 9;
			this->textBoxStavka->TextChanged += gcnew System::EventHandler(this, &play::textBoxStavka_TextChanged);
			this->textBoxStavka->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &play::textBoxStavka_KeyPress);
			// 
			// labelBalans
			// 
			this->labelBalans->BackColor = System::Drawing::Color::Black;
			this->labelBalans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelBalans->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->labelBalans->Location = System::Drawing::Point(505, 48);
			this->labelBalans->Name = L"labelBalans";
			this->labelBalans->Size = System::Drawing::Size(72, 23);
			this->labelBalans->TabIndex = 11;
			this->labelBalans->Text = L"Баланс:";
			this->labelBalans->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelBalans100
			// 
			this->labelBalans100->BackColor = System::Drawing::Color::Black;
			this->labelBalans100->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelBalans100->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->labelBalans100->Location = System::Drawing::Point(576, 48);
			this->labelBalans100->Name = L"labelBalans100";
			this->labelBalans100->Size = System::Drawing::Size(146, 23);
			this->labelBalans100->TabIndex = 12;
			this->labelBalans100->Text = L"100";
			this->labelBalans100->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"1.png");
			this->imageList1->Images->SetKeyName(1, L"2.png");
			this->imageList1->Images->SetKeyName(2, L"3.png");
			this->imageList1->Images->SetKeyName(3, L"4.png");
			this->imageList1->Images->SetKeyName(4, L"5.png");
			this->imageList1->Images->SetKeyName(5, L"6.png");
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(509, 100);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(60, 59);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// buttonClose
			// 
			this->buttonClose->BackColor = System::Drawing::Color::DarkRed;
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClose->ForeColor = System::Drawing::Color::Lime;
			this->buttonClose->Location = System::Drawing::Point(329, 553);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(75, 23);
			this->buttonClose->TabIndex = 15;
			this->buttonClose->Text = L"Завершить";
			this->buttonClose->UseVisualStyleBackColor = false;
			this->buttonClose->Click += gcnew System::EventHandler(this, &play::buttonClose_Click);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(16, 259);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Сделать ставку";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &play::button1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(644, 100);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(60, 59);
			this->pictureBox3->TabIndex = 18;
			this->pictureBox3->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(180, 392);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->ShortcutsEnabled = false;
			this->textBox1->Size = System::Drawing::Size(372, 155);
			this->textBox1->TabIndex = 16;
			// 
			// play
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(725, 585);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->labelBalans100);
			this->Controls->Add(this->labelBalans);
			this->Controls->Add(this->textBoxStavka);
			this->Controls->Add(this->labelStavka);
			this->Controls->Add(this->labelChislo);
			this->Controls->Add(this->comboBoxChislo);
			this->Controls->Add(this->buttonNameOk);
			this->Controls->Add(this->labelSurname);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->textBoxSurname);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBoxName);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"play";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Кости";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &play::play_FormClosed);
			this->Load += gcnew System::EventHandler(this, &play::play_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void play_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void play_Load(System::Object^ sender, System::EventArgs^ e) {
		labelChislo->Visible = false;
		comboBoxChislo->Visible = false;
		labelStavka->Visible = false;
		textBoxStavka->Visible = false;
		labelBalans->Visible = false;
		labelBalans100->Visible = false;
		pictureBox2->Visible = false;
		textBox1->Visible = false;
		textBoxStavka->Visible = false;
		pictureBox3->Visible = false;
		button1->Visible = false;
	}
	private: System::Void buttonNameOk_Click(System::Object^ sender, System::EventArgs^ e) {
		buttonNameOk->Visible = false;
		labelName->Visible = false;
		labelSurname->Visible = false;
		textBoxName->Visible = false;
		textBoxSurname->Visible = false;

		labelChislo->Visible = true;
		comboBoxChislo->Visible = true;
		labelStavka->Visible = true;
		textBoxStavka->Visible = true;
		labelBalans->Visible = true;
		labelBalans100->Visible = true;
		pictureBox2->Visible = false;
		textBox1->Visible = true;
		textBoxStavka->Visible = true;
		pictureBox3->Visible = false;
		button1->Visible = true;
		Start();
		
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxStavka->Text->Length == 0 || comboBoxChislo->Text->Length == 0)
	{
		button1->Enabled = false;
	}
	else
	{
		button1->Enabled = true;
	}
}
private: System::Void textBoxName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxName->Text->Length == 0 || textBoxSurname->Text->Length == 0)
	{
		buttonNameOk->Enabled = false;
	}
	else
	{
		buttonNameOk->Enabled = true;
	}
}
private: System::Void textBoxSurname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxName->Text->Length == 0 || textBoxSurname->Text->Length == 0)
	{
		buttonNameOk->Enabled = false;
	}
	else
	{
		buttonNameOk->Enabled = true;
	}
}
private: System::Void textBoxName_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsLetter(e->KeyChar) && e->KeyChar != (char)Keys::Back) 
	{
		e->Handled = true; 
	}
}
private: System::Void textBoxSurname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsLetter(e->KeyChar) && e->KeyChar != (char)Keys::Back)
	{
		e->Handled = true;
	}
}
private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = Convert::ToString(textBoxName->Text);
	String^ surname = Convert::ToString(textBoxSurname->Text);
	double stavka = Convert::ToDouble(textBoxStavka->Text);
	ofstream File("user.txt", ios_base::app);
	String^ user = name + " " + surname + " " + balans+" очков "+ DateTime::Now;
	if (File.is_open())
	{
		File << msclr::interop::marshal_as<std::string>(user) << endl;
		File.close();
	}
	else
	{
		MessageBox::Show("Не удалось открыть файл для записи рейтинга", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox2->Visible = true;
	pictureBox3->Visible = true;
	double stavka=Convert::ToDouble(textBoxStavka->Text);
	double chislo = Convert::ToDouble(comboBoxChislo->Text);
	if (balans < stavka)
	{
		MessageBox::Show("Ставка должна быть меньше баланса!");
		return;
	}
	
	int dice1 = rand->Next(1, 7);
	pictureBox2->Image = imageList1->Images[dice1 - 1];
	int dice2 = rand->Next(1, 7);
	pictureBox3->Image = imageList1->Images[dice2 - 1];
	
	textBox1->Text += ("Ставка №" + stavkaCount++)+"\r\n";
	textBox1->Text += ("Вы поставили " + stavka.ToString() + " очков на число " + chislo.ToString())+"\r\n";
	textBox1->Text += ("Выпадает число " + (dice1 + dice2).ToString()) + "\r\n";
	
	if (dice1 + dice2 == chislo)
	{
		textBox1->Text += ("Вы угадали число и получаете " + (stavka * 4).ToString() + " очков" + "\r\n");
		balans += stavka * 4;
	}
	else
	if (((dice1 + dice2 < 7) && (chislo < 7)))
	{
		textBox1->Text += ("Вы поставили на число меньше семи и выигрываете " + stavka.ToString() + " очков" + "\r\n");
		balans += stavka;
	}
	else
		if (((dice1 + dice2 > 7) && (chislo > 7)))
		{
			textBox1->Text += ("Вы поставили на число больше семи и выигрываете " + stavka.ToString() + " очков" + "\r\n");
			balans += stavka;
		}
		else
			if ((chislo) == 7)
			{
				textBox1->Text += ("Вы поставили на неудачное число и проигрываете " + stavka.ToString() + " очков" + "\r\n");
				balans -= stavka;
			}
			else
				if((chislo)>7)
				{ 
					textBox1->Text += ("Вы поставили на число больше семи и проигрываете " + stavka.ToString() + " очков" + "\r\n");
					balans -= stavka;
				}
				else
				{
					textBox1->Text += ("Вы поставили на число меньше семи и проигрываете " + stavka.ToString() + " очков" + "\r\n");
					balans -= stavka;
				}
			textBox1->Text += ("Текущий баланс: " + balans.ToString() + "\r\n");
			textBox1->Text += "" + "\r\n";
			textBox1->Focus();
			textBox1->ScrollToCaret();
			textBox1->DeselectAll();
			labelBalans100->Text = balans.ToString();
			if (balans <= 0)
			{
				System::Windows::Forms::DialogResult Result;
				Result = MessageBox::Show(
					L"Вы проиграли!"+"\nЖелаете сыграть еще?",
					L"",
					MessageBoxButtons::YesNo,
					MessageBoxIcon::Question);
				if (Result == System::Windows::Forms::DialogResult::No)
				{
					String^ name = Convert::ToString(textBoxName->Text);
					String^ surname = Convert::ToString(textBoxSurname->Text);
					double stavka = Convert::ToDouble(textBoxStavka->Text);
					ofstream File("user.txt", ios_base::app);
					String^ user = name + " " + surname + " " + balans + " очков " + DateTime::Now;
					if (File.is_open())
					{
						File << msclr::interop::marshal_as<std::string>(user) << endl;
						File.close();
					}
					else
					{
						MessageBox::Show("Не удалось открыть файл для записи рейтинга", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					Application::Exit();
				}
				else if (Result == System::Windows::Forms::DialogResult::Yes)
				{
					String^ name = Convert::ToString(textBoxName->Text);
					String^ surname = Convert::ToString(textBoxSurname->Text);
					double stavka = Convert::ToDouble(textBoxStavka->Text);
					ofstream File("user.txt", ios_base::app);
					String^ user = name + " " + surname + " " + balans + " очков " + DateTime::Now;
					if (File.is_open())
					{
						File << msclr::interop::marshal_as<std::string>(user) << endl;
						File.close();
					}
					else
					{
						MessageBox::Show("Не удалось открыть файл для записи рейтинга", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					Start();
				}
			}
			if (balans >= 10000)
			{
				System::Windows::Forms::DialogResult Result;
				Result = MessageBox::Show(
					L"Вы выиграли!" + "\nЖелаете сыграть еще?",
					L"",
					MessageBoxButtons::YesNo,
					MessageBoxIcon::Question);
				if (Result == System::Windows::Forms::DialogResult::No)
				{
					String^ name = Convert::ToString(textBoxName->Text);
					String^ surname = Convert::ToString(textBoxSurname->Text);
					double stavka = Convert::ToDouble(textBoxStavka->Text);
					ofstream File("user.txt", ios_base::app);
					String^ user = name + " " + surname + " " + balans + " очков " + DateTime::Now;
					if (File.is_open())
					{
						File << msclr::interop::marshal_as<std::string>(user) << endl;
						File.close();
					}
					else
					{
						MessageBox::Show("Не удалось открыть файл для записи рейтинга", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					Application::Exit();
				}
				else if (Result == System::Windows::Forms::DialogResult::Yes)
				{
					String^ name = Convert::ToString(textBoxName->Text);
					String^ surname = Convert::ToString(textBoxSurname->Text);
					double stavka = Convert::ToDouble(textBoxStavka->Text);
					ofstream File("user.txt", ios_base::app);
					String^ user = name + " " + surname + " " + balans + " очков " + DateTime::Now;
					if (File.is_open())
					{
						File << msclr::interop::marshal_as<std::string>(user) << endl;
						File.close();
					}
					else
					{
						MessageBox::Show("Не удалось открыть файл для записи рейтинга", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					Start();
				}
			}
}
private: System::Void textBoxStavka_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == 8) 
	{
		return;
	}
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) 
	{
		return;
	}
	if (e->KeyChar == '.', ',')
	{
		e->Handled = true;
	}
}
private: System::Void textBoxStavka_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxStavka->Text->Length == 0 || comboBoxChislo->Text->Length == 0)
	{
		button1->Enabled = false;
	}
	else
	{
		button1->Enabled = true;
	}
}
};
}
