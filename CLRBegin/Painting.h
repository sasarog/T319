#pragma once

namespace CLRBegin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Painting
	/// </summary>
	public ref class Painting : public System::Windows::Forms::Form
	{
	public:
		Painting(void)
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
		~Painting()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnPaint;
	private: System::Windows::Forms::Button^ btnSave;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnPaint = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(192, 89);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(857, 442);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Painting::pictureBox1_MouseMove);
			// 
			// btnPaint
			// 
			this->btnPaint->Location = System::Drawing::Point(192, 573);
			this->btnPaint->Name = L"btnPaint";
			this->btnPaint->Size = System::Drawing::Size(383, 94);
			this->btnPaint->TabIndex = 1;
			this->btnPaint->Text = L"button1";
			this->btnPaint->UseVisualStyleBackColor = true;
			this->btnPaint->Click += gcnew System::EventHandler(this, &Painting::btnPaint_Click);
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(594, 573);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(406, 108);
			this->btnSave->TabIndex = 2;
			this->btnSave->Text = L"button1";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &Painting::btnSave_Click);
			// 
			// Painting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1648, 731);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnPaint);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Painting";
			this->Text = L"Painting";
			this->Load += gcnew System::EventHandler(this, &Painting::Painting_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Graphics^ gr;

	private: System::Void btnPaint_Click(System::Object^ sender, System::EventArgs^ e) {

		Pen^ p = gcnew Pen(System::Drawing::Color::Red, 3);
		gr->Clear(Color::Black);
		gr->DrawLine(p, 0, 0, 500, 500);
	}
	private: System::Void Painting_Load(System::Object^ sender, System::EventArgs^ e) {
		gr = pictureBox1->CreateGraphics();
	}
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			PointF mousePos = e->Location;
			Pen^ p = gcnew Pen(System::Drawing::Color::Red, 3);
			PointF mousePos2 = mousePos;
			mousePos.X += 1;
			gr->DrawLine(p, mousePos, mousePos2);
		}
	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		//if (pictureBox1->Image != nullptr) //если в pictureBox есть изображение
		//{
			//создание диалогового окна "Сохранить как..", для сохранения изображения
			SaveFileDialog^ savedialog = gcnew SaveFileDialog();
			savedialog->Title = "Сохранить картинку как...";
			//отображать ли предупреждение, если пользователь указывает имя уже существующего файла
			savedialog->OverwritePrompt = true;
			//отображать ли предупреждение, если пользователь указывает несуществующий путь
			savedialog->CheckPathExists = true;
			//список форматов файла, отображаемый в поле "Тип файла"
			savedialog->Filter = "Image Files(*.BMP)|*.BMP|Image Files(*.JPG)|*.JPG|Image Files(*.GIF)|*.GIF|Image Files(*.PNG)|*.PNG|All files (*.*)|*.*";
			//отображается ли кнопка "Справка" в диалоговом окне
			savedialog->ShowHelp = true;
			if (savedialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) //если в диалоговом окне нажата кнопка "ОК"
			{
				try
				{
					Bitmap^ Bmp = gcnew Bitmap(pictureBox1->Image);
					Bmp->Save(savedialog->FileName);
				}
				catch(System::NullReferenceException^ ex)
				{
					MessageBox::Show("Невозможно сохранить изображение", "Ошибка",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		//}

	}
};
}
