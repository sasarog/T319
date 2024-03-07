#pragma once

namespace AnimeVideoProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ KinoForm
	/// </summary>
	public ref class KinoForm : public System::Windows::Forms::Form
	{
	public:
		KinoForm(void)
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
		~KinoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	protected:
	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;
	private: System::Windows::Forms::Button^ btnPlay;
	private: System::Windows::Forms::Button^ btnOpen;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TrackBar^ trackBar2;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(KinoForm::typeid));
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(89, 55);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(1036, 461);
			this->axWindowsMediaPlayer1->TabIndex = 0;
			// 
			// btnPlay
			// 
			this->btnPlay->Location = System::Drawing::Point(315, 574);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(206, 76);
			this->btnPlay->TabIndex = 1;
			this->btnPlay->Text = L"Play";
			this->btnPlay->UseVisualStyleBackColor = true;
			this->btnPlay->Click += gcnew System::EventHandler(this, &KinoForm::btnPlay_Click);
			// 
			// btnOpen
			// 
			this->btnOpen->Location = System::Drawing::Point(89, 574);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(206, 76);
			this->btnOpen->TabIndex = 2;
			this->btnOpen->Text = L"Open";
			this->btnOpen->UseVisualStyleBackColor = true;
			this->btnOpen->Click += gcnew System::EventHandler(this, &KinoForm::btnOpen_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(1276, 227);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar1->Size = System::Drawing::Size(56, 260);
			this->trackBar1->TabIndex = 3;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &KinoForm::trackBar1_Scroll);
			this->trackBar1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &KinoForm::trackBar1_MouseUp);
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(107, 512);
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(1018, 56);
			this->trackBar2->TabIndex = 4;
			this->trackBar2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &KinoForm::trackBar2_MouseUp);
			// 
			// KinoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1606, 707);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->btnOpen);
			this->Controls->Add(this->btnPlay);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Name = L"KinoForm";
			this->Text = L"KinoForm";
			this->Load += gcnew System::EventHandler(this, &KinoForm::KinoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void KinoForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnPlay_Click(System::Object^ sender, System::EventArgs^ e) {
		
		axWindowsMediaPlayer1->Ctlcontrols->play();
	}
	private: System::Void btnOpen_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog ofd;
		ofd.ShowDialog(); 		
		axWindowsMediaPlayer1->URL = ofd.FileName;
	}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void trackBar1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		  	axWindowsMediaPlayer1->settings->volume = trackBar1->Value;
			trackBar2->Maximum = axWindowsMediaPlayer1->currentMedia->duration;
}
private: System::Void trackBar2_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	axWindowsMediaPlayer1->Ctlcontrols->currentPosition = trackBar2->Value;
}
};
}
