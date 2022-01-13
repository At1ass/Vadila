#pragma once

#include <array>
#include <string>

namespace Vadila {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	
	
	/// <summary>
	/// Сводка для Gamers
	/// </summary>
	public ref class Gamers : public System::Windows::Forms::Form
	{
	private: array<String^>^ nicknames = gcnew array<String^>(6);
	private: array<bool>^ player_active = gcnew array<bool>(6);
	private: array<int>^ player_pay = gcnew array<int>(6);

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;


	public:
		
		Gamers(void)
		{
			InitializeComponent();
			Array::Clear(nicknames, 0, 6);
			Array::Clear(player_active, 0, 6);
			Array::Clear(player_pay, 0, 6);
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Gamers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Игрок 1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(26, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(28, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Игрок 2";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(26, 110);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Игрок 3";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(26, 149);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Игрок 4";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(26, 189);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Игрок 5";
			this->label5->Click += gcnew System::EventHandler(this, &Gamers::label5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(26, 228);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 212);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Игрок 6";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 277);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Новая игра";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Gamers::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(178, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Ставки на игру:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(164, 30);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Gamers::textBox7_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(164, 71);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 15;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Gamers::textBox8_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(164, 110);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 16;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Gamers::textBox9_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(164, 149);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 17;
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Gamers::textBox10_KeyPress);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(164, 189);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 18;
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Gamers::textBox11_KeyPress);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(164, 228);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 19;
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Gamers::textBox12_KeyPress);
			// 
			// Gamers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 328);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Gamers";
			this->Text = L"Gamers";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: array<String^>^ players_names() {
		return nicknames;
	}
	public: array<int>^ players_payds() {
		return player_pay;
	}
	public: array<bool>^ valid_players() {
		return player_active;
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		array<String^>^ tmp = gcnew  array<String^>(6);
		nicknames[0] = textBox1->Text;
		nicknames[1] = textBox2->Text;
		nicknames[2] = textBox3->Text;
		nicknames[3] = textBox4->Text;
		nicknames[4] = textBox5->Text;
		nicknames[5] = textBox6->Text;

		tmp[0] = textBox7->Text;
		tmp[1] = textBox8->Text;
		tmp[2] = textBox9->Text;
		tmp[3] = textBox10->Text;
		tmp[4] = textBox11->Text;
		tmp[5] = textBox12->Text;

		std::size_t i = 0;
		std::size_t index = -1;
		int pay;
		for each (String ^ v in nicknames) {
			++index;
			if (v->Trim() == "") {
				player_active[i] = false;
				player_pay[i++] = -1;
			}
			else {
				player_active[i] = true;
				if (!int::TryParse(tmp[i], pay)) {
					player_pay[i++] = -1;
					continue;
				}
				player_pay[i++] = pay;

			}
		}

		std::size_t active = 0;
		std::size_t pay_active = 0;
		for each (bool act in player_active) {
			if (act) active++;
		}

		for each (int p in player_pay) {
			if (p != -1) pay_active++;
		}

		if (active != pay_active)
		{
			MessageBox::Show("Неверно указаны ставки!!!");

			return;
		}

		if (2 > active) {
			MessageBox::Show("Недостаточно участников. Необходимо 2 и более");
			
			return;
		}

		this->Close();
	}

	private: void validation(Windows::Forms::KeyPressEventArgs^ e) {
		char press = e->KeyChar;

		if (!Char::IsDigit(press) && press != 8) {
			e->Handled = true;
		}
	}
private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validation(e);
}
private: System::Void textBox12_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validation(e);
}
private: System::Void textBox11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validation(e);
}
private: System::Void textBox10_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validation(e);
}
private: System::Void textBox9_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validation(e);
}
private: System::Void textBox8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	validation(e);
}
};
}
