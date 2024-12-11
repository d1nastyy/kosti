#pragma once
#include "play.h"

namespace kosti {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
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
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonPlay;
	protected:
	private: System::Windows::Forms::Button^ buttonRules;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->buttonPlay = (gcnew System::Windows::Forms::Button());
			this->buttonRules = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonPlay
			// 
			this->buttonPlay->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonPlay->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonPlay->Font = (gcnew System::Drawing::Font(L"Impact", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPlay->ForeColor = System::Drawing::Color::Teal;
			this->buttonPlay->Location = System::Drawing::Point(249, 12);
			this->buttonPlay->Name = L"buttonPlay";
			this->buttonPlay->Size = System::Drawing::Size(216, 50);
			this->buttonPlay->TabIndex = 0;
			this->buttonPlay->Text = L"Играть";
			this->buttonPlay->UseVisualStyleBackColor = false;
			this->buttonPlay->Click += gcnew System::EventHandler(this, &main::buttonPlay_Click);
			// 
			// buttonRules
			// 
			this->buttonRules->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonRules->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonRules->Font = (gcnew System::Drawing::Font(L"Impact", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRules->ForeColor = System::Drawing::Color::NavajoWhite;
			this->buttonRules->Location = System::Drawing::Point(261, 523);
			this->buttonRules->Name = L"buttonRules";
			this->buttonRules->Size = System::Drawing::Size(189, 50);
			this->buttonRules->TabIndex = 1;
			this->buttonRules->Text = L"Правила";
			this->buttonRules->UseVisualStyleBackColor = false;
			this->buttonRules->Click += gcnew System::EventHandler(this, &main::buttonRules_Click);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(725, 585);
			this->Controls->Add(this->buttonRules);
			this->Controls->Add(this->buttonPlay);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Кости";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonRules_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Играющий называет любое число в диапазоне от 2 до 12 и ставку, которую он делает в этот ход. " + "Программа с помощью датчика случайных чисел дважды выбирает числа от 1 до 6 (бросает кубик,которого цифры от 1 до 6)."
		+" Если сумма выпавших цифр меньше 7 и играющий задумал число меньшее 7, он выигрывает сделанную ставку. Если сумма выпавших цифр больше 7 и играющий задумал число большее 7, он также выигрывает сделанную ставку."
		+" Если играющий угадал сумму цифр, он получает в четыре раза больше очков, чем сделанная ставка. Ставка проиграна, если не имеет место ни одна из описанных ситуаций. В начальный момент у играющего 100 очков.");
	}
	private: System::Void buttonPlay_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		play^ form2 = gcnew play();
		form2 -> Show();
	}
	};
}
