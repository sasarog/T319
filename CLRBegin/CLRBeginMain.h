﻿#pragma once
 #include"Painting.h"
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
	private: System::Windows::Forms::Label^ lblX;
	private: System::Windows::Forms::Label^ lblY;
	private: System::Windows::Forms::TextBox^ txbxX;
	private: System::Windows::Forms::TextBox^ txbxY;
	private: System::Windows::Forms::Button^ btnSolution;
	private: System::Windows::Forms::Label^ lblResult;
	private: System::Windows::Forms::DataGridView^ dgvTable;
	private: System::Windows::Forms::Label^ lblXtoTable;
	private: System::Windows::Forms::TextBox^ txtbxXToTable;
	private: System::Windows::Forms::Button^ btnTable;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ btnNewWindow;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CLRBeginMain::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->btnMsgBox = (gcnew System::Windows::Forms::Button());
			this->lblX = (gcnew System::Windows::Forms::Label());
			this->lblY = (gcnew System::Windows::Forms::Label());
			this->txbxX = (gcnew System::Windows::Forms::TextBox());
			this->txbxY = (gcnew System::Windows::Forms::TextBox());
			this->btnSolution = (gcnew System::Windows::Forms::Button());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->dgvTable = (gcnew System::Windows::Forms::DataGridView());
			this->lblXtoTable = (gcnew System::Windows::Forms::Label());
			this->txtbxXToTable = (gcnew System::Windows::Forms::TextBox());
			this->btnTable = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnNewWindow = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnMsgBox
			// 
			this->btnMsgBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMsgBox->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMsgBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMsgBox.Image")));
			this->btnMsgBox->Location = System::Drawing::Point(21, 22);
			this->btnMsgBox->Name = L"btnMsgBox";
			this->btnMsgBox->Size = System::Drawing::Size(168, 131);
			this->btnMsgBox->TabIndex = 0;
			this->btnMsgBox->Text = L"button1";
			this->btnMsgBox->UseVisualStyleBackColor = true;
			this->btnMsgBox->Click += gcnew System::EventHandler(this, &CLRBeginMain::btnMsgBox_Click);
			// 
			// lblX
			// 
			this->lblX->AutoSize = true;
			this->lblX->Location = System::Drawing::Point(241, 25);
			this->lblX->Name = L"lblX";
			this->lblX->Size = System::Drawing::Size(15, 16);
			this->lblX->TabIndex = 1;
			this->lblX->Text = L"X";
			// 
			// lblY
			// 
			this->lblY->AutoSize = true;
			this->lblY->Location = System::Drawing::Point(402, 24);
			this->lblY->Name = L"lblY";
			this->lblY->Size = System::Drawing::Size(16, 16);
			this->lblY->TabIndex = 2;
			this->lblY->Text = L"Y";
			// 
			// txbxX
			// 
			this->txbxX->Location = System::Drawing::Point(244, 56);
			this->txbxX->Name = L"txbxX";
			this->txbxX->Size = System::Drawing::Size(100, 22);
			this->txbxX->TabIndex = 3;
			// 
			// txbxY
			// 
			this->txbxY->Location = System::Drawing::Point(405, 56);
			this->txbxY->Name = L"txbxY";
			this->txbxY->Size = System::Drawing::Size(100, 22);
			this->txbxY->TabIndex = 4;
			// 
			// btnSolution
			// 
			this->btnSolution->Location = System::Drawing::Point(244, 105);
			this->btnSolution->Name = L"btnSolution";
			this->btnSolution->Size = System::Drawing::Size(261, 23);
			this->btnSolution->TabIndex = 5;
			this->btnSolution->Text = L"Решение";
			this->btnSolution->UseVisualStyleBackColor = true;
			this->btnSolution->Click += gcnew System::EventHandler(this, &CLRBeginMain::btnSolution_Click);
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblResult->Location = System::Drawing::Point(244, 135);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(126, 46);
			this->lblResult->TabIndex = 6;
			this->lblResult->Text = L"label1";
			// 
			// dgvTable
			// 
			this->dgvTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTable->Location = System::Drawing::Point(30, 223);
			this->dgvTable->Name = L"dgvTable";
			this->dgvTable->RowHeadersWidth = 51;
			this->dgvTable->RowTemplate->Height = 24;
			this->dgvTable->Size = System::Drawing::Size(454, 318);
			this->dgvTable->TabIndex = 7;
			// 
			// lblXtoTable
			// 
			this->lblXtoTable->AutoSize = true;
			this->lblXtoTable->Location = System::Drawing::Point(660, 25);
			this->lblXtoTable->Name = L"lblXtoTable";
			this->lblXtoTable->Size = System::Drawing::Size(15, 16);
			this->lblXtoTable->TabIndex = 8;
			this->lblXtoTable->Text = L"X";
			// 
			// txtbxXToTable
			// 
			this->txtbxXToTable->Location = System::Drawing::Point(663, 55);
			this->txtbxXToTable->Name = L"txtbxXToTable";
			this->txtbxXToTable->Size = System::Drawing::Size(100, 22);
			this->txtbxXToTable->TabIndex = 9;
			// 
			// btnTable
			// 
			this->btnTable->Location = System::Drawing::Point(663, 105);
			this->btnTable->Name = L"btnTable";
			this->btnTable->Size = System::Drawing::Size(100, 70);
			this->btnTable->TabIndex = 10;
			this->btnTable->Text = L"button1";
			this->btnTable->UseVisualStyleBackColor = true;
			this->btnTable->Click += gcnew System::EventHandler(this, &CLRBeginMain::btnTable_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(523, 223);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(515, 300);
			this->chart1->TabIndex = 11;
			this->chart1->Text = L"chart1";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1490, 724);
			this->tabControl1->TabIndex = 12;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnMsgBox);
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Controls->Add(this->btnTable);
			this->tabPage1->Controls->Add(this->dgvTable);
			this->tabPage1->Controls->Add(this->lblX);
			this->tabPage1->Controls->Add(this->txtbxXToTable);
			this->tabPage1->Controls->Add(this->lblY);
			this->tabPage1->Controls->Add(this->lblXtoTable);
			this->tabPage1->Controls->Add(this->txbxX);
			this->tabPage1->Controls->Add(this->txbxY);
			this->tabPage1->Controls->Add(this->lblResult);
			this->tabPage1->Controls->Add(this->btnSolution);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1482, 695);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->btnNewWindow);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1482, 695);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnNewWindow
			// 
			this->btnNewWindow->Location = System::Drawing::Point(65, 54);
			this->btnNewWindow->Name = L"btnNewWindow";
			this->btnNewWindow->Size = System::Drawing::Size(367, 147);
			this->btnNewWindow->TabIndex = 0;
			this->btnNewWindow->Text = L"Новое окно";
			this->btnNewWindow->UseVisualStyleBackColor = true;
			this->btnNewWindow->Click += gcnew System::EventHandler(this, &CLRBeginMain::btnNewWindow_Click);
			// 
			// CLRBeginMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1509, 742);
			this->Controls->Add(this->tabControl1);
			this->Name = L"CLRBeginMain";
			this->Text = L"CLRBeginMain";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnMsgBox_Click(System::Object^ sender, System::EventArgs^ e) {
		//Переменная для резкльтата диалога с пользователем
		System::Windows::Forms::DialogResult dr;
		//Сам диалог
		dr = MessageBox::Show(
			//Текст в диалоге
			"Вы верите в бога?",
			//Текст заголовка
			"Заголовок",
			//Какой набор кнопок будет в диалоге
			System::Windows::Forms::MessageBoxButtons::OKCancel,
			//Какая иконка будет в диалоге
			System::Windows::Forms::MessageBoxIcon::Stop
		);
		//Использование результата диалога в свиче.
		//Результат является enum то есть каждое слово является числом
		switch (dr)
		{
			//Разные кейсы для разных результатов диалогов
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
	/// <summary>
	/// вывод сообщения об ошибке
	/// </summary>
	/// <param name="eva">Указатель на сам объект исключения</param>
	/// <returns></returns>
	private: System::Void error(System::Exception^ eva) {
		MessageBox::Show(
			//e->message - текст, описывающий ошибку
			eva->Message,
			"Ошибка",
			System::Windows::Forms::MessageBoxButtons::OK,
			System::Windows::Forms::MessageBoxIcon::Error,
			System::Windows::Forms::MessageBoxDefaultButton::Button1

		);
	}
	private: System::Void btnSolution_Click(System::Object^ sender, System::EventArgs^ e) {
		//Пробуем выполнять этот код
		try {
			//Чтение данных из текстбокса Х,
			//Преобразование того, что прочитается в double
			//Присвоение полученного числа в переменную Х
			double x = Convert::ToDouble(txbxX->Text);
			//То же самое для у
			double y = Convert::ToDouble(txbxY->Text);
			//Высчитывание значения с использованием возведения в степень
			double result = Math::Pow(x, 2) + Math::Sqrt(y);
			//Вывод результата в label
			//Посколько поле имеет ти данных String, 
			//переменную тип double нужно преобразовать в String
			lblResult->Text = result.ToString();
		}
		//Если будет исключение, программа не вылетит, а выполнится код
		//который в фигурных скобках catch
		catch (System::FormatException^ eva) {
			//Отправляем обработчик в функцию для печати
			//Это наша собственно нами написанная функция
			this->error(eva);
		}

	}
	private: System::Void btnTable_Click(System::Object^ sender, System::EventArgs^ e) {
		double x;
		//Аналог массива
		DataTable^ dt = gcnew DataTable();
		//Добавляем два double столбца в таблицу
		//Сама таблица чисто в оперативке
		dt->Columns->Add("X", double::typeid);
		dt->Columns->Add("X^2", double::typeid);
		try {
			//Для случайных чисел
			Random rd;
			//Берём значение из текстбокса
			x = Convert::ToDouble(txtbxXToTable->Text);
			//Заполняем таблицу строками со значением
			for (int i = 1; i <= x; i++) {
				dt->Rows->Add(i, Math::Pow(i, 2));
			}
			//В качестве источника данных для таблицы, на которую всё выводится
			//сделаем нашу таблицу, которая в оперативке
			dgvTable->DataSource = dt;
			//Тут код для чартов
			//Какой столбец таблицы будет в графике
			// под нулевым номером считаться за горизонтальные значения
			chart1->Series[0]->XValueMember = "X";
			//Что будет считаться за вертикалные значения
			chart1->Series[0]->YValueMembers = "X^2";
			//Тип графика
			chart1->Series[0]->ChartType = 
				System::Windows::Forms::DataVisualization::Charting
				//Выбирается рандомно
				::SeriesChartType(rd.Next(0,34));
			//В качестве источника данных указывается таблица наша в оперативке
			chart1->DataSource = dt;
			//Связывание чарта с таблицей
			chart1->DataBind();

		}
		catch (System::FormatException^ ex) {
			this->error(ex);
		}
	}
	private: System::Void btnNewWindow_Click(System::Object^ sender, System::EventArgs^ e) {
		//Для открытия нового окна создаём объект этого окна
		CLRBegin::Painting^ painting = gcnew Painting();
		//Текущее окно скрываем от отображения
		this->Hide();
		//Открытие второго окна
		painting->ShowDialog();
		//После того, как окно отработало, обратно показываем наше
		this->Show();
	}
};
}
