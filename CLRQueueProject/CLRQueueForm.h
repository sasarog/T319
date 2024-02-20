#pragma once
#include "CLRQueueClass.h"
namespace CLRQueueProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ CLRQueueForm
	/// </summary>
	public ref class CLRQueueForm : public System::Windows::Forms::Form
	{
	public:
		CLRQueueForm(void)
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
		~CLRQueueForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbName;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbAge;

	private: System::Windows::Forms::Button^ btnPush;
	private: System::Windows::Forms::Button^ btnPop;
	private: System::Windows::Forms::Label^ lblOutput;

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
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbAge = (gcnew System::Windows::Forms::TextBox());
			this->btnPush = (gcnew System::Windows::Forms::Button());
			this->btnPop = (gcnew System::Windows::Forms::Button());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(79, 67);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(173, 22);
			this->tbName->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(76, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(370, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Age";
			// 
			// tbAge
			// 
			this->tbAge->Location = System::Drawing::Point(373, 67);
			this->tbAge->Name = L"tbAge";
			this->tbAge->Size = System::Drawing::Size(100, 22);
			this->tbAge->TabIndex = 3;
			// 
			// btnPush
			// 
			this->btnPush->Location = System::Drawing::Point(79, 125);
			this->btnPush->Name = L"btnPush";
			this->btnPush->Size = System::Drawing::Size(144, 68);
			this->btnPush->TabIndex = 4;
			this->btnPush->Text = L"PUSH";
			this->btnPush->UseVisualStyleBackColor = true;
			this->btnPush->Click += gcnew System::EventHandler(this, &CLRQueueForm::btnPush_Click);
			// 
			// btnPop
			// 
			this->btnPop->Location = System::Drawing::Point(243, 125);
			this->btnPop->Name = L"btnPop";
			this->btnPop->Size = System::Drawing::Size(159, 68);
			this->btnPop->TabIndex = 5;
			this->btnPop->Text = L"POP";
			this->btnPop->UseVisualStyleBackColor = true;
			this->btnPop->Click += gcnew System::EventHandler(this, &CLRQueueForm::btnPop_Click);
			// 
			// lblOutput
			// 
			this->lblOutput->AutoSize = true;
			this->lblOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOutput->Location = System::Drawing::Point(76, 218);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(118, 42);
			this->lblOutput->TabIndex = 6;
			this->lblOutput->Text = L"label3";
			// 
			// CLRQueueForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 386);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->btnPop);
			this->Controls->Add(this->btnPush);
			this->Controls->Add(this->tbAge);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbName);
			this->Name = L"CLRQueueForm";
			this->Text = L"CLRQueueForm";
			this->Load += gcnew System::EventHandler(this, &CLRQueueForm::CLRQueueForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: CLRQueueClass^ eva;
	private: System::Void btnPush_Click(System::Object^ sender, System::EventArgs^ e) {
		eva->Push(
			tbName->Text,
			Convert::ToInt32(tbAge->Text)
		);
	}
	private: System::Void CLRQueueForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->eva = gcnew 	CLRQueueClass();
	}
	private: System::Void btnPop_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			lblOutput->Text = eva->Pop();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
};
}
