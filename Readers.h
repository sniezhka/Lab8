#pragma once
#include "Header.h"
#include "Book.h"
#include "Admin.h"
#include "Orders.h"
#include <msclr/marshal.h>
#include<msclr\marshal_cppstd.h>

namespace lab8_OOP {

	using namespace System;
	using namespace msclr::interop;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Readers
	/// </summary>
	public ref class Readers : public System::Windows::Forms::Form
	{
	public:
		Readers(void)
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
		~Readers()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  title_book;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  price_book;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  count_of_pages;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  author;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  year_book;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  code;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;







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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->title_book = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price_book = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->count_of_pages = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->author = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->year_book = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->title_book,
					this->price_book, this->count_of_pages, this->author, this->year_book, this->code
			});
			this->dataGridView1->Location = System::Drawing::Point(-1, -1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(681, 300);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Readers::dataGridView1_CellContentClick);
			// 
			// title_book
			// 
			this->title_book->HeaderText = L"Назва";
			this->title_book->Name = L"title_book";
			// 
			// price_book
			// 
			this->price_book->HeaderText = L"Ціна";
			this->price_book->Name = L"price_book";
			// 
			// count_of_pages
			// 
			this->count_of_pages->HeaderText = L"Обсяг";
			this->count_of_pages->Name = L"count_of_pages";
			// 
			// author
			// 
			this->author->HeaderText = L"Автор";
			this->author->Name = L"author";
			// 
			// year_book
			// 
			this->year_book->HeaderText = L"Рік";
			this->year_book->Name = L"year_book";
			// 
			// code
			// 
			this->code->HeaderText = L"Код";
			this->code->Name = L"code";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(111, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Оформити замовлення";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Readers::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(345, 305);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Вийти";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Readers::button2_Click_1);
			// 
			// Readers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 333);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Readers";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Readers";
			this->Load += gcnew System::EventHandler(this, &Readers::Readers_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Readers_Load(System::Object^  sender, System::EventArgs^  e) {
		Admin* admin = new Admin("tmp", "tmp", "tmp", 1, 2, 3, 4, "tmp");
		/*admin->ReadToFile(books, 1);*/
		Book *books = new Book[5];
		admin->ReadToFile(books, 5);
		for (int i = 0; i < 5; i++)
		{
			
			int rowIndex = dataGridView1->Rows->Add();
			dataGridView1->Rows[rowIndex]->Cells[0]->Value = msclr::interop::marshal_as<String^>(books[i].GetTitle()); //Назва
			dataGridView1->Rows[rowIndex]->Cells[1]->Value = System::Convert::ToString(books[i].GetPrice()); //Ціна
			dataGridView1->Rows[rowIndex]->Cells[2]->Value = System::Convert::ToString(books[i].GetNumberOfPages()); //Обсяг
			dataGridView1->Rows[rowIndex]->Cells[3]->Value = msclr::interop::marshal_as<String^>(books[i].GetAuthor()); //Автор
			dataGridView1->Rows[rowIndex]->Cells[4]->Value = System::Convert::ToString(books[i].GetYear()); //Рік
			dataGridView1->Rows[rowIndex]->Cells[5]->Value = System::Convert::ToString(books[i].code); //Код
		}
		
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Orders ^ F = gcnew Orders(); //створення нової форми 
	F->ShowDialog();//запуск форми в модальному режимі 
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
