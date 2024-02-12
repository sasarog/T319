#pragma once
#include "MyStack.h"
namespace CLRStack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ CLRStackForm
	/// </summary>
	public ref class CLRStackForm : public System::Windows::Forms::Form
	{
	public:
		CLRStackForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~CLRStackForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ btnPush;
	private: System::Windows::Forms::Button^ btnPop;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnPush = (gcnew System::Windows::Forms::Button());
			this->btnPop = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(162, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(729, 98);
			this->textBox1->TabIndex = 0;
			// 
			// btnPush
			// 
			this->btnPush->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPush->Location = System::Drawing::Point(162, 216);
			this->btnPush->Name = L"btnPush";
			this->btnPush->Size = System::Drawing::Size(305, 125);
			this->btnPush->TabIndex = 1;
			this->btnPush->Text = L"PUSH";
			this->btnPush->UseVisualStyleBackColor = true;
			this->btnPush->Click += gcnew System::EventHandler(this, &CLRStackForm::btnPush_Click);
			// 
			// btnPop
			// 
			this->btnPop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPop->Location = System::Drawing::Point(586, 216);
			this->btnPop->Name = L"btnPop";
			this->btnPop->Size = System::Drawing::Size(305, 125);
			this->btnPop->TabIndex = 2;
			this->btnPop->Text = L"POP";
			this->btnPop->UseVisualStyleBackColor = true;
			this->btnPop->Click += gcnew System::EventHandler(this, &CLRStackForm::btnPop_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(164, 385);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 91);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ELEM";
			// 
			// CLRStackForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1189, 634);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnPop);
			this->Controls->Add(this->btnPush);
			this->Controls->Add(this->textBox1);
			this->Name = L"CLRStackForm";
			this->Text = L"CLRStackForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		MyStack eva;
	private: System::Void btnPush_Click(System::Object^ sender, System::EventArgs^ e) {
		eva.push(textBox1->Text);
		textBox1->Text = "";
	}

	private: System::Void btnPop_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			label1->Text = eva.pop();
		}
		catch (Exception^ ex) {
			MessageBox::Show(
				ex->Message,
				"Error",
				MessageBoxButtons::OKCancel,
				MessageBoxIcon::Error
			);
		}
	}
	};
}
