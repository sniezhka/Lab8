#pragma once
#include "Header.h"
#include "Book.h"
#include "Admin.h"
#include "Orders.h"
#include "Order.h"
#include <msclr/marshal.h>
#include<msclr\marshal_cppstd.h>
#include "Reader.h"

namespace lab8_OOP {

	using namespace System;
	using namespace msclr::interop;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Orders
	/// </summary>
	public ref class Orders : public System::Windows::Forms::Form
	{
	public:
		Orders(void)
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
		~Orders()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^  tabPage1;
	protected:

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TabControl^  Ордер;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Orders::typeid));
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Ордер = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Ордер->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(486, 271);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ордер";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(359, 198);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 59);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Вихід";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Orders::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(150, 187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 54);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Оплатити ордер";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Orders::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(150, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(144, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(138, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Будь ласка, введіть назву книги";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(150, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 57);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Знайти та  замовити книгу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Orders::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(486, 274);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Ордер
			// 
			this->Ордер->Controls->Add(this->tabPage1);
			this->Ордер->Location = System::Drawing::Point(-1, -3);
			this->Ордер->Name = L"Ордер";
			this->Ордер->SelectedIndex = 0;
			this->Ордер->Size = System::Drawing::Size(494, 297);
			this->Ордер->TabIndex = 0;
			// 
			// Orders
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(493, 288);
			this->Controls->Add(this->Ордер);
			this->Name = L"Orders";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Orders";
			this->Load += gcnew System::EventHandler(this, &Orders::Orders_Load);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Ордер->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		Reader *reader = new Reader("Walter", "White", 1111, 120, 1234, 18);
		Book *foundbook = new Book;
		Admin *admin = new Admin;
		Order *ord = new Order;
		Book *mass = new Book[5];
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ sys = textBox1->Text;
		string strtitle = msclr::interop::marshal_as<std::string>(sys);
		if (strtitle != ""){
			*foundbook = reader->FindBook(*admin, 5, strtitle);
			if (reader->FindBook(mass, 5, strtitle)==1){
				MessageBox::Show("Книгу знайдено", "Ордер створено", MessageBoxButtons::OK, MessageBoxIcon::Information);
				button2->Visible = true;
			}
			else{
				MessageBox::Show("Книги не знайдено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
private: System::Void Orders_Load(System::Object^  sender, System::EventArgs^  e) {
	button2->Visible = false;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	reader->MakeOrder(*foundbook, *admin);
	ord->PayOrder(admin->cardnumber, foundbook->GetPrice(), reader->money, *admin);
	MessageBox::Show("Книгу оплачено", "Ордер створено", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}

};
}
