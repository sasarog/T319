#pragma once

namespace CLRBegin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CLRBeginMain
	/// </summary>
	public ref class CLRBeginMain : public System::Windows::Forms::Form
	{
	public:
		CLRBeginMain(void)
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
		~CLRBeginMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnMsgBox;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CLRBeginMain::typeid));
			this->btnMsgBox = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnMsgBox
			// 
			this->btnMsgBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMsgBox->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMsgBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMsgBox.Image")));
			this->btnMsgBox->Location = System::Drawing::Point(61, 60);
			this->btnMsgBox->Name = L"btnMsgBox";
			this->btnMsgBox->Size = System::Drawing::Size(579, 354);
			this->btnMsgBox->TabIndex = 0;
			this->btnMsgBox->Text = L"button1";
			this->btnMsgBox->UseVisualStyleBackColor = true;
			this->btnMsgBox->Click += gcnew System::EventHandler(this, &CLRBeginMain::btnMsgBox_Click);
			// 
			// CLRBeginMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1024);
			this->Controls->Add(this->btnMsgBox);
			this->Name = L"CLRBeginMain";
			this->Text = L"CLRBeginMain";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnMsgBox_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult dr;
		dr = MessageBox::Show(
			"Вы верите в бога?",
			"Заголовок",
			System::Windows::Forms::MessageBoxButtons::OKCancel,
			System::Windows::Forms::MessageBoxIcon::Stop
		);
		switch (dr)
		{
		case System::Windows::Forms::DialogResult::None:
			break;
		case System::Windows::Forms::DialogResult::OK:
			MessageBox::Show(
				"Бесхребетный"
			);

			break;
		case System::Windows::Forms::DialogResult::Cancel:
			break;
		case System::Windows::Forms::DialogResult::Abort:
			break;
		case System::Windows::Forms::DialogResult::Retry:
			break;
		case System::Windows::Forms::DialogResult::Ignore:
			break;
		case System::Windows::Forms::DialogResult::Yes:
			MessageBox::Show(
				"Идите в церковь."
			);
			break;
		case System::Windows::Forms::DialogResult::No:
			MessageBox::Show(
				"Молодец."
			);
			break;
		default:
			break;
		}
	}
	};
}
