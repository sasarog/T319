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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
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
			this->btnMsgBox->Size = System::Drawing::Size(168, 131);
			this->btnMsgBox->TabIndex = 0;
			this->btnMsgBox->Text = L"button1";
			this->btnMsgBox->UseVisualStyleBackColor = true;
			this->btnMsgBox->Click += gcnew System::EventHandler(this, &CLRBeginMain::btnMsgBox_Click);
			// 
			// lblX
			// 
			this->lblX->AutoSize = true;
			this->lblX->Location = System::Drawing::Point(432, 87);
			this->lblX->Name = L"lblX";
			this->lblX->Size = System::Drawing::Size(15, 16);
			this->lblX->TabIndex = 1;
			this->lblX->Text = L"X";
			// 
			// lblY
			// 
			this->lblY->AutoSize = true;
			this->lblY->Location = System::Drawing::Point(593, 86);
			this->lblY->Name = L"lblY";
			this->lblY->Size = System::Drawing::Size(16, 16);
			this->lblY->TabIndex = 2;
			this->lblY->Text = L"Y";
			// 
			// txbxX
			// 
			this->txbxX->Location = System::Drawing::Point(435, 118);
			this->txbxX->Name = L"txbxX";
			this->txbxX->Size = System::Drawing::Size(100, 22);
			this->txbxX->TabIndex = 3;
			// 
			// txbxY
			// 
			this->txbxY->Location = System::Drawing::Point(596, 118);
			this->txbxY->Name = L"txbxY";
			this->txbxY->Size = System::Drawing::Size(100, 22);
			this->txbxY->TabIndex = 4;
			// 
			// btnSolution
			// 
			this->btnSolution->Location = System::Drawing::Point(435, 167);
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
			this->lblResult->Location = System::Drawing::Point(435, 197);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(126, 46);
			this->lblResult->TabIndex = 6;
			this->lblResult->Text = L"label1";
			// 
			// dgvTable
			// 
			this->dgvTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTable->Location = System::Drawing::Point(1060, 87);
			this->dgvTable->Name = L"dgvTable";
			this->dgvTable->RowHeadersWidth = 51;
			this->dgvTable->RowTemplate->Height = 24;
			this->dgvTable->Size = System::Drawing::Size(454, 318);
			this->dgvTable->TabIndex = 7;
			// 
			// lblXtoTable
			// 
			this->lblXtoTable->AutoSize = true;
			this->lblXtoTable->Location = System::Drawing::Point(851, 87);
			this->lblXtoTable->Name = L"lblXtoTable";
			this->lblXtoTable->Size = System::Drawing::Size(15, 16);
			this->lblXtoTable->TabIndex = 8;
			this->lblXtoTable->Text = L"X";
			// 
			// txtbxXToTable
			// 
			this->txtbxXToTable->Location = System::Drawing::Point(854, 117);
			this->txtbxXToTable->Name = L"txtbxXToTable";
			this->txtbxXToTable->Size = System::Drawing::Size(100, 22);
			this->txtbxXToTable->TabIndex = 9;
			// 
			// btnTable
			// 
			this->btnTable->Location = System::Drawing::Point(854, 167);
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
			this->chart1->Location = System::Drawing::Point(1060, 434);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(515, 300);
			this->chart1->TabIndex = 11;
			this->chart1->Text = L"chart1";
			// 
			// CLRBeginMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1024);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->btnTable);
			this->Controls->Add(this->txtbxXToTable);
			this->Controls->Add(this->lblXtoTable);
			this->Controls->Add(this->dgvTable);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->btnSolution);
			this->Controls->Add(this->txbxY);
			this->Controls->Add(this->txbxX);
			this->Controls->Add(this->lblY);
			this->Controls->Add(this->lblX);
			this->Controls->Add(this->btnMsgBox);
			this->Name = L"CLRBeginMain";
			this->Text = L"CLRBeginMain";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
	private: System::Void error(System::Exception^ eva) {
		MessageBox::Show(
			eva->Message,
			"Ошибка",
			System::Windows::Forms::MessageBoxButtons::OK,
			System::Windows::Forms::MessageBoxIcon::Error,
			System::Windows::Forms::MessageBoxDefaultButton::Button1

		);
	}
	private: System::Void btnSolution_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			double x = Convert::ToDouble(txbxX->Text);
			double y = Convert::ToDouble(txbxY->Text);
			double result = Math::Pow(x, 2) + Math::Sqrt(y);
			lblResult->Text = result.ToString();
		}
		catch (System::FormatException^ eva) {
			this->error(eva);
		}

	}
	private: System::Void btnTable_Click(System::Object^ sender, System::EventArgs^ e) {
		double x;
		DataTable^ dt = gcnew DataTable();
		dt->Columns->Add("X", double::typeid);
		dt->Columns->Add("X^2", double::typeid);
		try {
			Random rd;
			x = Convert::ToDouble(txtbxXToTable->Text);
			for (int i = 1; i <= x; i++) {
				dt->Rows->Add(i, Math::Pow(i, 2));
			}
			dgvTable->DataSource = dt;
			chart1->Series[0]->XValueMember = "X";
			chart1->Series[0]->YValueMembers = "X^2";
			chart1->Series[0]->ChartType = 
				System::Windows::Forms::DataVisualization::Charting
				::SeriesChartType(rd.Next(0,34));
			chart1->DataSource = dt;
			chart1->DataBind();

		}
		catch (System::FormatException^ ex) {
			this->error(ex);
		}
	}
	};
}
