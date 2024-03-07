#pragma once
#include "KinoForm.h"
namespace AnimeVideoProject {
	enum napravlenie {
		verh,
		niz,
		levo,
		pravo
	};

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AnimeForm
	/// </summary>
	public ref class AnimeForm : public System::Windows::Forms::Form
	{
	public:
		AnimeForm(void)
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
		~AnimeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ btnStart;
	private: System::Windows::Forms::Button^ btnStop;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ btnVerh;
	private: System::Windows::Forms::Button^ btnNiz;
	private: System::Windows::Forms::Button^ btnLevo;
	private: System::Windows::Forms::Button^ btnPravo;
	private: System::Windows::Forms::Button^ btnOpenKinoForm;
	private: System::ComponentModel::IContainer^ components;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnVerh = (gcnew System::Windows::Forms::Button());
			this->btnNiz = (gcnew System::Windows::Forms::Button());
			this->btnLevo = (gcnew System::Windows::Forms::Button());
			this->btnPravo = (gcnew System::Windows::Forms::Button());
			this->btnOpenKinoForm = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(70, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1141, 589);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(70, 607);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(203, 67);
			this->btnStart->TabIndex = 1;
			this->btnStart->Text = L"START";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &AnimeForm::btnStart_Click);
			// 
			// btnStop
			// 
			this->btnStop->Location = System::Drawing::Point(279, 607);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(203, 67);
			this->btnStop->TabIndex = 2;
			this->btnStop->Text = L"STOP";
			this->btnStop->UseVisualStyleBackColor = true;
			this->btnStop->Click += gcnew System::EventHandler(this, &AnimeForm::btnStop_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 5;
			this->timer1->Tick += gcnew System::EventHandler(this, &AnimeForm::timer1_Tick);
			// 
			// btnVerh
			// 
			this->btnVerh->Location = System::Drawing::Point(1287, 125);
			this->btnVerh->Name = L"btnVerh";
			this->btnVerh->Size = System::Drawing::Size(63, 42);
			this->btnVerh->TabIndex = 3;
			this->btnVerh->Text = L"VERH";
			this->btnVerh->UseVisualStyleBackColor = true;
			this->btnVerh->Click += gcnew System::EventHandler(this, &AnimeForm::btnVerh_Click);
			// 
			// btnNiz
			// 
			this->btnNiz->Location = System::Drawing::Point(1287, 232);
			this->btnNiz->Name = L"btnNiz";
			this->btnNiz->Size = System::Drawing::Size(63, 42);
			this->btnNiz->TabIndex = 4;
			this->btnNiz->Text = L"NIZ";
			this->btnNiz->UseVisualStyleBackColor = true;
			this->btnNiz->Click += gcnew System::EventHandler(this, &AnimeForm::btnNiz_Click);
			// 
			// btnLevo
			// 
			this->btnLevo->Location = System::Drawing::Point(1217, 178);
			this->btnLevo->Name = L"btnLevo";
			this->btnLevo->Size = System::Drawing::Size(63, 42);
			this->btnLevo->TabIndex = 5;
			this->btnLevo->Text = L"Levo";
			this->btnLevo->UseVisualStyleBackColor = true;
			this->btnLevo->Click += gcnew System::EventHandler(this, &AnimeForm::btnLevo_Click);
			// 
			// btnPravo
			// 
			this->btnPravo->Location = System::Drawing::Point(1353, 178);
			this->btnPravo->Name = L"btnPravo";
			this->btnPravo->Size = System::Drawing::Size(63, 42);
			this->btnPravo->TabIndex = 6;
			this->btnPravo->Text = L"Pravo";
			this->btnPravo->UseVisualStyleBackColor = true;
			this->btnPravo->Click += gcnew System::EventHandler(this, &AnimeForm::btnPravo_Click);
			// 
			// btnOpenKinoForm
			// 
			this->btnOpenKinoForm->Location = System::Drawing::Point(702, 608);
			this->btnOpenKinoForm->Name = L"btnOpenKinoForm";
			this->btnOpenKinoForm->Size = System::Drawing::Size(207, 66);
			this->btnOpenKinoForm->TabIndex = 7;
			this->btnOpenKinoForm->Text = L"KINO";
			this->btnOpenKinoForm->UseVisualStyleBackColor = true;
			this->btnOpenKinoForm->Click += gcnew System::EventHandler(this, &AnimeForm::btnOpenKinoForm_Click);
			// 
			// AnimeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1438, 678);
			this->Controls->Add(this->btnOpenKinoForm);
			this->Controls->Add(this->btnPravo);
			this->Controls->Add(this->btnLevo);
			this->Controls->Add(this->btnNiz);
			this->Controls->Add(this->btnVerh);
			this->Controls->Add(this->btnStop);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"AnimeForm";
			this->Text = L"AnimeForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		napravlenie napr;
		//Переменные позиции прямоугольника
	private:	int xPos = 0, yPos = 200;
	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {
		//Включение таймера
		timer1->Enabled = true;
	}
	private: System::Void btnStop_Click(System::Object^ sender, System::EventArgs^ e) {
		//Выключение таймера
		timer1->Stop();
	}
	private: void PaintAnime(int x, int y) {
		Graphics^ gr = pictureBox1->CreateGraphics();
		gr->Clear(Color::Green);
		gr->FillRectangle(gcnew SolidBrush(Color::Red), x, y, 100, 200);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		PaintAnime(xPos, yPos);
		switch (napr)
		{
		case AnimeVideoProject::verh:
			yPos -= 2;
			break;
		case AnimeVideoProject::niz:
			yPos += 2;
			break;
		case AnimeVideoProject::levo:
			xPos -= 2;
			break;
		case AnimeVideoProject::pravo:
			xPos += 2;
			break;
		default:
			break;
		}

	}
	private: System::Void btnVerh_Click(System::Object^ sender, System::EventArgs^ e) {
		this->napr = AnimeVideoProject::verh;
	}
	private: System::Void btnLevo_Click(System::Object^ sender, System::EventArgs^ e) {
		this->napr = AnimeVideoProject::levo;
	}
	private: System::Void btnPravo_Click(System::Object^ sender, System::EventArgs^ e) {
		this->napr = AnimeVideoProject::pravo;
	}
	private: System::Void btnNiz_Click(System::Object^ sender, System::EventArgs^ e) {
		this->napr = AnimeVideoProject::niz;
	}
	private: System::Void btnOpenKinoForm_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ f = gcnew AnimeVideoProject::KinoForm();
		
		this->Hide();
		f->ShowDialog();
		this->Show();
	}
};
}
