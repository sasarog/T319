#pragma once

namespace PaintingProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ PaintingForm
	/// </summary>
	public ref class PaintingForm : public System::Windows::Forms::Form
	{
	public:
		PaintingForm(void)
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
		~PaintingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ btnPrint;
	private: System::Windows::Forms::TrackBar^ trB1;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->trB1 = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trB1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1087, 600);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnPrint
			// 
			this->btnPrint->Location = System::Drawing::Point(1105, 12);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(189, 103);
			this->btnPrint->TabIndex = 1;
			this->btnPrint->Text = L"PRINT";
			this->btnPrint->UseVisualStyleBackColor = true;
			this->btnPrint->Click += gcnew System::EventHandler(this, &PaintingForm::btnPrint_Click);
			// 
			// trB1
			// 
			this->trB1->Location = System::Drawing::Point(1133, 180);
			this->trB1->Maximum = 100;
			this->trB1->Minimum = 10;
			this->trB1->Name = L"trB1";
			this->trB1->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trB1->Size = System::Drawing::Size(56, 332);
			this->trB1->SmallChange = 10;
			this->trB1->TabIndex = 2;
			this->trB1->Value = 10;
			// 
			// PaintingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1306, 643);
			this->Controls->Add(this->trB1);
			this->Controls->Add(this->btnPrint);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"PaintingForm";
			this->Text = L"PaintingForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trB1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ eva = pictureBox1->CreateGraphics();
		eva->Clear(Color::Cyan);
		Pen^ p = gcnew Pen(Color::Green, 5);
		Point p1(1 * trB1->Value, 3 * trB1->Value);
		Point p2(4 * trB1->Value, 1 * trB1->Value);
		Point p3(7 * trB1->Value, 3 * trB1->Value);
		Point p4(7 * trB1->Value, 7 * trB1->Value);
		Point p5(1 * trB1->Value, 7 * trB1->Value);
		Point krug(1 * trB1->Value, 7 * trB1->Value);

		eva->DrawLine(p, p1, p2);
		eva->DrawLine(p, p2, p3);
		eva->DrawLine(p, p3, p4);
		eva->DrawLine(p, p5, p4);
		eva->DrawLine(p, p5, p1);
		eva->DrawLine(p, p1, p3);
		eva->DrawEllipse(p,
			3.5 * trB1->Value, 1.5 * trB1->Value,
			1 * trB1->Value, 1 * trB1->Value);
		;// (Color::Red);
		SolidBrush^ sb = gcnew SolidBrush(Color::Red);
		RectangleF rect(
			3.75 * trB1->Value, 1.75 * trB1->Value,
			0.5 * trB1->Value, 0.5 * trB1->Value);
		eva->FillEllipse(sb, rect);
		eva->DrawString(
			"ABOBA",
			gcnew System::Drawing::Font("Arial", 14),
			sb,
			0, 0);
	}
	};
}
