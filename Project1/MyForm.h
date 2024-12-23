#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private:
		System::ComponentModel::Container^ components;
		int n, m;
		array<array<int>^>^ mass;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите значение M (высота массива)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(402, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(161, 26);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(62, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите значение N (ширина массива)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(402, 131);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(161, 26);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(66, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 127);
			this->button1->TabIndex = 4;
			this->button1->Text = L"tap";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(66, 442);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(178, 108);
			this->button2->TabIndex = 5;
			this->button2->Text = L"tap2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(402, 248);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(868, 355);
			this->dataGridView1->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(916, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(916, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"label4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1399, 626);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Сбрасываем стиль всех ячеек на стандартный и обнуляем значения в ячейках
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				dataGridView1->Rows[i]->Cells[j]->Value = System::Convert::ToString( System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value)+10);// делает значения матрицы строковым значением
			}
		}

		n = System::Convert::ToInt32(textBox1->Text);//мы берем из окна ввода числа что ввел пользователь 
		m = System::Convert::ToInt32(textBox2->Text);
		dataGridView1->RowCount = n; // делаем размер матрицы по тем параметрам что дал пользователь
		dataGridView1->ColumnCount = m;
		
		

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		n = System::Convert::ToInt32(textBox1->Text);
		m = System::Convert::ToInt32(textBox2->Text);
		
		int mass[100][100];//массив берет числа из таблицы
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				mass[i][j] = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
		}
		// Перерасчет и обновление значений
		for (int col = 0; col < m; ++col) {
			int maxElement = mass[0][col];
			int maxIndex = 0;
			int sumkajdovo = 0;

			// Поиск максимального элемента и суммы четных элементов в столбце
			for (int row = 0; row < n; ++row) {
				if (mass[row][col] > maxElement) {
					maxElement = mass[row][col];
					maxIndex = row;
				}
				if (mass[row][col] % 2 == 0) {
					sumkajdovo += mass[row][col];
				}
			}

			// Заменяем максимальный элемент на сумму четных, если сумма не равна нулю 
			if (sumkajdovo != 0) {
				mass[maxIndex][col] = sumkajdovo;
				dataGridView1->Rows[maxIndex]->Cells[col]->Style->Font = gcnew System::Drawing::Font(dataGridView1->DefaultCellStyle->Font, System::Drawing::FontStyle::Bold);
			}
		}

		// Обновляем DataGridView
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				dataGridView1->Rows[i]->Cells[j]->Value = mass[i][j];
			}
		}

		this->label4->Text = L"Обработка завершена";
		this->label3->Text = L"Заменены максимальные элементы столбцов";
	}
	};
}


/*
for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				dataGridView1->Rows[i]->Cells[j]->Style->Font = gcnew System::Drawing::Font(dataGridView1->DefaultCellStyle->Font, System::Drawing::FontStyle::Regular);
				dataGridView1->Rows[i]->Cells[j]->Value = nullptr;
			}
		}

		n = System::Convert::ToInt32(textBox1->Text);
		m = System::Convert::ToInt32(textBox2->Text);
		dataGridView1->RowCount = n;
		dataGridView1->ColumnCount = m;

		// Инициализация массива
		mass = gcnew array<array<int>^>(n);
		for (int i = 0; i < n; i++) {
			mass[i] = gcnew array<int>(m);
		}

		// Заполнение DataGridView случайными значениями
		//Random^ rand = gcnew Random();
		//for (int i = 0; i < n; i++) {
		//	for (int j = 0; j < m; j++) {
		//		mass[i][j] = rand->Next(1, 100); // Случайные значения от 1 до 99
		//		dataGridView1->Rows[i]->Cells[j]->Value = mass[i][j];
		//	}
		//}
*/