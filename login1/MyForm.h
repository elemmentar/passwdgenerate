#pragma once
#include <iostream>
#include<cstdlib>
#include<ctime>
#include<string>

namespace login1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::TextBox^ num;
	private: System::Windows::Forms::Button^ generate;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ password;































	protected:


















	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->num = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->generate = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->num);
			this->panel1->Location = System::Drawing::Point(5, 23);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(576, 187);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(36, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Text length:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(123, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(306, 36);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Password Generator";
			// 
			// num
			// 
			this->num->Location = System::Drawing::Point(185, 110);
			this->num->Name = L"num";
			this->num->Size = System::Drawing::Size(116, 22);
			this->num->TabIndex = 1;
			// 
			// password
			// 
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->password->Location = System::Drawing::Point(185, 12);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(359, 22);
			this->password->TabIndex = 4;
			// 
			// generate
			// 
			this->generate->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->generate->Location = System::Drawing::Point(28, 3);
			this->generate->Name = L"generate";
			this->generate->Size = System::Drawing::Size(116, 37);
			this->generate->TabIndex = 0;
			this->generate->Text = L"generate";
			this->generate->UseVisualStyleBackColor = true;
			this->generate->Click += gcnew System::EventHandler(this, &MyForm::generate_Click);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->password);
			this->panel2->Controls->Add(this->generate);
			this->panel2->Location = System::Drawing::Point(5, 225);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(576, 43);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Location = System::Drawing::Point(5, 274);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(576, 262);
			this->panel3->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 332);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Generator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void exitlog_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Sendall_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void generate_Click(System::Object^ sender, System::EventArgs^ e) {
		int n;
		n= System::Convert::ToInt16(this->num->Text);
		const char symb[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int string_length = sizeof(symb) - 1;
		srand(time(0));
		
		char  ch;
		std::string word = "";
		
		if (n < 40 && n>0) {

			for (int i = 0; i < n; i++) {
				ch = symb[rand() % string_length];
				word += ch;
			}

			


			this->password->Text = gcnew String(word.c_str());
		}
		else {
			this->password->Text = "Numar prea mare sau prea mic";
		}
		
	}
	};
}
