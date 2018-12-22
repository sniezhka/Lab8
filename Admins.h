#pragma once
#include "Admin.h"
#include <stdlib.h>
#include<msclr\marshal_cppstd.h>
#include "Order.h"

namespace lab8_OOP {

	using namespace System;
	using namespace msclr::interop;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admins
	/// </summary>
	public ref class Admins : public System::Windows::Forms::Form
	{
	public:
		Admins(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Admins()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  title;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  code;

	private: System::Windows::Forms::TextBox^  year;

	private: System::Windows::Forms::TextBox^  price;

	private: System::Windows::Forms::TextBox^  author;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  size;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Admins::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->size = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->code = (gcnew System::Windows::Forms::TextBox());
			this->year = (gcnew System::Windows::Forms::TextBox());
			this->price = (gcnew System::Windows::Forms::TextBox());
			this->author = (gcnew System::Windows::Forms::TextBox());
			this->title = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, -2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(500, 334);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->size);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->code);
			this->tabPage1->Controls->Add(this->year);
			this->tabPage1->Controls->Add(this->price);
			this->tabPage1->Controls->Add(this->author);
			this->tabPage1->Controls->Add(this->title);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(492, 308);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Додати книжку";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Admins::tabPage1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Обсяг";
			// 
			// size
			// 
			this->size->Location = System::Drawing::Point(104, 202);
			this->size->Name = L"size";
			this->size->Size = System::Drawing::Size(100, 20);
			this->size->TabIndex = 11;
			this->size->TextChanged += gcnew System::EventHandler(this, &Admins::size_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Код";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Рік";
			this->label4->Click += gcnew System::EventHandler(this, &Admins::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Ціна";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Автор";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Назва";
			this->label1->Click += gcnew System::EventHandler(this, &Admins::label1_Click);
			// 
			// code
			// 
			this->code->Location = System::Drawing::Point(104, 246);
			this->code->Name = L"code";
			this->code->Size = System::Drawing::Size(100, 20);
			this->code->TabIndex = 5;
			// 
			// year
			// 
			this->year->Location = System::Drawing::Point(104, 156);
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(100, 20);
			this->year->TabIndex = 4;
			// 
			// price
			// 
			this->price->Location = System::Drawing::Point(104, 112);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(100, 20);
			this->price->TabIndex = 3;
			// 
			// author
			// 
			this->author->Location = System::Drawing::Point(104, 73);
			this->author->Name = L"author";
			this->author->Size = System::Drawing::Size(100, 20);
			this->author->TabIndex = 2;
			// 
			// title
			// 
			this->title->Location = System::Drawing::Point(104, 32);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(100, 20);
			this->title->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(275, 234);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 57);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Додати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Admins::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-4, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(496, 308);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Controls->Add(this->pictureBox3);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(492, 308);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Додати заяву в ЧС";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(152, 250);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Добавити в чорний список";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Admins::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(492, 230);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(492, 308);
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(492, 308);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// Admins
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 332);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Admins";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admins";
			this->Load += gcnew System::EventHandler(this, &Admins::Admins_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
		Order *ord = new Order;
#pragma endregion
	private: System::Void Admins_Load(System::Object^  sender, System::EventArgs^  e) {
		richTextBox1->LoadFile("Order.txt", RichTextBoxStreamType::PlainText);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Admin* admin = new Admin("tmp", "tmp", "tmp", 1, 2, 3, 4, "tmp");

		string author = msclr::interop::marshal_as<std::string>(this->author->Text);
		string name = msclr::interop::marshal_as<std::string>(this->title->Text);
		int year = System::Convert::ToInt32(this->year->Text);
		int size = System::Convert::ToInt32(this->size->Text);
		int price = System::Convert::ToInt32(this->price->Text);
		int code = System::Convert::ToInt32(this->code->Text);

		admin->AddBook(author,name,year,size,price,code);

		MessageBox::Show("Добавлено", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->author->Clear();
		this->title->Clear();
		this->year->Clear();
		this->code->Clear();
		this->price->Clear();
		this->size->Clear();
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void size_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	ofstream file("Order.txt", ios_base::trunc);
	file.close();
	richTextBox1->Clear();
}
};
}
