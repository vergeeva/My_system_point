#pragma once
#include "My_system.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			A = gcnew my_system_point(100);
			value = gcnew my_material_point(1,1,1);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		my_system_point^ A;
		my_material_point^ value;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"x = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"y = ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(66, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(89, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(66, 61);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(89, 22);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(66, 101);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(89, 22);
			this->textBox3->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"масса";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::PaleGreen;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(72, 44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(175, 143);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::PaleGreen;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Enabled = false;
			this->dataGridView1->Location = System::Drawing::Point(404, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(374, 285);
			this->dataGridView1->TabIndex = 7;
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"Координаты";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"Масса";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Location = System::Drawing::Point(6, 209);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(309, 29);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button2->Location = System::Drawing::Point(38, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(308, 29);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Удалить элемент";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(96, 24);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Введите данные:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(76, 54);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(137, 22);
			this->textBox4->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 17);
			this->label5->TabIndex = 6;
			this->label5->Text = L"масса";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(411, 332);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(203, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Координаты центра тяжести:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(410, 355);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(218, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Наибольший по массе элемент:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(411, 385);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(234, 17);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Масса самого тяжелого элемента:";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(682, 380);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(96, 22);
			this->textBox6->TabIndex = 16;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(658, 352);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(120, 22);
			this->textBox7->TabIndex = 17;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(643, 327);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(135, 22);
			this->textBox8->TabIndex = 18;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(6, 394);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(320, 22);
			this->textBox5->TabIndex = 19;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(30, 374);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(245, 17);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Состояние выполнения программы:";
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(682, 406);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(96, 22);
			this->textBox9->TabIndex = 21;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(410, 409);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(235, 17);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Суммарная масса всех элементов:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(65, 21);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(53, 22);
			this->textBox10->TabIndex = 6;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(238, 15);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(70, 22);
			this->textBox11->TabIndex = 23;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(23, 24);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 17);
			this->label11->TabIndex = 6;
			this->label11->Text = L"x = ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(201, 20);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 17);
			this->label12->TabIndex = 6;
			this->label12->Text = L"y = ";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Location = System::Drawing::Point(124, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(68, 30);
			this->button3->TabIndex = 24;
			this->button3->Text = L"по х";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Location = System::Drawing::Point(314, 10);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(68, 30);
			this->button4->TabIndex = 25;
			this->button4->Text = L"по у";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Location = System::Drawing::Point(219, 46);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 30);
			this->button5->TabIndex = 26;
			this->button5->Text = L"по массе";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::LightGreen;
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(7, 244);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(391, 127);
			this->groupBox2->TabIndex = 27;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Удаление";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(806, 440);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Система материальных точек";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != ""&& textBox2->Text != ""&& textBox3->Text != "") //Второе условие, чтобы не было исключений,
	{
		value->X = Convert::ToDouble(this->textBox1->Text);
		value->Y = Convert::ToDouble(this->textBox2->Text);
		value->M = Convert::ToDouble(this->textBox3->Text);
		if (A->add(value))
		{
			this->textBox5->Text = "Добавление прошло успешно";
			this->textBox8->Text = Convert::ToString(A->center_of_heavy());
			this->textBox7->Text = Convert::ToString(A->find_max()->ToString());
			this->textBox6->Text = Convert::ToString(A->find_max()->M);
			this->textBox9->Text = Convert::ToString(A->m_sum());
		}
		else
		{
			this->textBox5->Text = "Слишком много точек";
		}
		A->View(dataGridView1);
	}
	else
	{
		this->textBox5->Text = "Введите данные х, у, масса в окна выше";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox4->Text != "")
	{
		value->X = Convert::ToDouble(this->textBox10->Text);
		value->Y = Convert::ToDouble(this->textBox11->Text);
		value->M = Convert::ToDouble(this->textBox4->Text);

		if ((A->del(value)))
		{
			this->textBox5->Text = "Элемент успешно удалён";
			this->textBox8->Text = Convert::ToString(A->center_of_heavy());
			this->textBox7->Text = Convert::ToString(A->find_max()->ToString());
			this->textBox6->Text = Convert::ToString(A->find_max()->M);
			this->textBox9->Text = Convert::ToString(A->m_sum());
		}
		else this->textBox5->Text = "Нечего удалять";
		A->View(dataGridView1);
	}
	else
	{
		this->textBox5->Text = "Введите условия в окне удаления";
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox10->Text != "")
	{
		if ((A->del_x(Convert::ToDouble(textBox10->Text))))
		{
			this->textBox5->Text = "Элемент успешно удалён";
			this->textBox8->Text = Convert::ToString(A->center_of_heavy());
			this->textBox7->Text = Convert::ToString(A->find_max()->ToString());
			this->textBox6->Text = Convert::ToString(A->find_max()->M);
			this->textBox9->Text = Convert::ToString(A->m_sum());
		}
		else this->textBox5->Text = "Нечего удалять";
		A->View(dataGridView1);
	}
	else
	{
		this->textBox5->Text = "Введите условия в окне удаления";
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox11->Text != "")
	{
		if ((A->del_y(Convert::ToDouble(textBox11->Text))))
		{
			this->textBox5->Text = "Элемент успешно удалён";
			this->textBox8->Text = Convert::ToString(A->center_of_heavy());
			this->textBox7->Text = Convert::ToString(A->find_max()->ToString());
			this->textBox6->Text = Convert::ToString(A->find_max()->M);
			this->textBox9->Text = Convert::ToString(A->m_sum());
		}
		else this->textBox5->Text = "Нечего удалять";
		A->View(dataGridView1);
	}
	else
	{
		this->textBox5->Text = "Введите условия в окне удаления";
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text != "")
	{
		if ((A->del_m(Convert::ToDouble(textBox4->Text))))
		{
			this->textBox5->Text = "Элемент успешно удалён";
			this->textBox8->Text = Convert::ToString(A->center_of_heavy());
			this->textBox7->Text = Convert::ToString(A->find_max()->ToString());
			this->textBox6->Text = Convert::ToString(A->find_max()->M);
			this->textBox9->Text = Convert::ToString(A->m_sum());
		}
		else this->textBox5->Text = "Нечего удалять";
		A->View(dataGridView1);
	}
	else
	{
		this->textBox5->Text = "Введите условия в окне удаления";
	}
}
};
}
