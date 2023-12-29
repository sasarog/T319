#pragma once

namespace CLRMatrix {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CLRMatrixForm
	/// </summary>
	public ref class CLRMatrixForm : public System::Windows::Forms::Form
	{
	public:
		CLRMatrixForm(void)
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
		~CLRMatrixForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvMatrix;
	protected:
	private: System::Windows::Forms::Button^ btnDo;
	private: System::Windows::Forms::Button^ btnShowMatrix;


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
			this->dgvMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->btnDo = (gcnew System::Windows::Forms::Button());
			this->btnShowMatrix = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatrix))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvMatrix
			// 
			this->dgvMatrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatrix->Location = System::Drawing::Point(12, 12);
			this->dgvMatrix->Name = L"dgvMatrix";
			this->dgvMatrix->RowHeadersWidth = 51;
			this->dgvMatrix->RowTemplate->Height = 24;
			this->dgvMatrix->Size = System::Drawing::Size(933, 508);
			this->dgvMatrix->TabIndex = 0;
			// 
			// btnDo
			// 
			this->btnDo->Location = System::Drawing::Point(12, 537);
			this->btnDo->Name = L"btnDo";
			this->btnDo->Size = System::Drawing::Size(420, 109);
			this->btnDo->TabIndex = 1;
			this->btnDo->Text = L"Работа с матрицей";
			this->btnDo->UseVisualStyleBackColor = true;
			this->btnDo->Click += gcnew System::EventHandler(this, &CLRMatrixForm::btnDo_Click);
			// 
			// btnShowMatrix
			// 
			this->btnShowMatrix->Location = System::Drawing::Point(449, 537);
			this->btnShowMatrix->Name = L"btnShowMatrix";
			this->btnShowMatrix->Size = System::Drawing::Size(420, 109);
			this->btnShowMatrix->TabIndex = 2;
			this->btnShowMatrix->Text = L"Вывод матрицы";
			this->btnShowMatrix->UseVisualStyleBackColor = true;
			this->btnShowMatrix->Click += gcnew System::EventHandler(this, &CLRMatrixForm::btnShowMatrix_Click);
			// 
			// CLRMatrixForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1345, 736);
			this->Controls->Add(this->btnShowMatrix);
			this->Controls->Add(this->btnDo);
			this->Controls->Add(this->dgvMatrix);
			this->Name = L"CLRMatrixForm";
			this->Text = L"CLRMatrixForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatrix))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		array<array<String^>^>^ readMatrix(String^ path) {
			StreamReader^ sReader = gcnew StreamReader(path);
			String^ fullData = sReader->ReadToEnd();
			sReader->Close();
			//Разделение строк
			array<String^>^ stringMas = fullData->Split(
				//Массив сепараторов
				gcnew array<wchar_t>(2) { '\r', '\n' },
				//Игнорировать пустые строки
				StringSplitOptions::RemoveEmptyEntries);
			//Массив двемерный из элементов в строковом формате
			array<array<String^>^>^ elemMas = gcnew  array<array<String^>^>(stringMas->Length);
			//Разделение массива строк на элементы в каждой строке
			for (int i = 0; i < stringMas->Length; i++) {
				elemMas[i] = stringMas[i]->Split(
					gcnew array<wchar_t>(2) { '\t', ' ' },
					StringSplitOptions::RemoveEmptyEntries
				);
			}
			return elemMas;
		}
	private: void writeMatrix(array<array<String^>^>^ elemMas, String^ path) {
		StreamWriter^ sw = gcnew StreamWriter(path);

		//Запись в файл
		for (int i = 0; i < elemMas->Length; i++) {//Строки
			for (int j = 0; j < elemMas[i]->Length; j++) { //столбцы
				sw->Write(elemMas[i][j] + " ");
			}
			//Перенос строки
			sw->Write("\n");
		}
		sw->Close();
	}
	private: System::Void btnDo_Click(System::Object^ sender, System::EventArgs^ e) {
		//Получение пути к файлу
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "Text files (*.txt)|*.txt";
		if (ofd->ShowDialog() != System::Windows::Forms::DialogResult::OK) {

			return;
		}
		//Путь к файлу
		String^ inputPath = ofd->FileName;
		//Получение данных из файла
		array<array<String^>^>^ elemMas = readMatrix(inputPath);

		SaveFileDialog^ sfd = gcnew SaveFileDialog();
		sfd->Filter = "Text files (*.txt)|*.txt";
		if (sfd->ShowDialog() != System::Windows::Forms::DialogResult::OK) {

			return;
		}

		for (int i = 0; i < elemMas->Length; i++) {
			String^ tmp = elemMas[i][0];
			elemMas[i][0] = elemMas[i][elemMas[i]->Length - 1];
			elemMas[i][elemMas[i]->Length - 1] = tmp;
		}
		writeMatrix(elemMas, sfd->FileName);



	}
	private: System::Void btnShowMatrix_Click(System::Object^ sender, System::EventArgs^ e) {
		//Получение пути к файлу
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "Text files (*.txt)|*.txt";
		if (ofd->ShowDialog() != System::Windows::Forms::DialogResult::OK) {

			return;
		}
		//Очистка таблицы
		dgvMatrix->Rows->Clear();
		dgvMatrix->Columns->Clear();
		//получение массива из файла
		array<array<String^>^>^ mas = readMatrix(ofd->FileName);
		//Добавление нужного количества столбцов
		for (int i = 0; i < mas[0]->Length; i++) {
			dgvMatrix->Columns->Add(i.ToString(), i.ToString());
		}
		//Добавление нужного количества строк
		for (int i = 0; i < mas->Length; i++) {
			dgvMatrix->Rows->Add(mas[i]);
		}
		
	}
	};
}
