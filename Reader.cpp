#pragma once
#include "Header.h"
#include"Admin.h"
#include"Reader.h"
#include"Order.h"
#include"Book.h"

Reader::Reader(string name, string surname, int cardnumber, int money, int id, int age) :Human(name, surname, age){
	this->cardnumber = cardnumber;
	this->money = money;
	this->id = id;
}

void Reader::MakeOrder(Book book, Admin admin){
	Order order(book, *this, admin, "11.11");
	order.MakeOrder(admin);
}
void Reader::FindBook(Book *mass, Admin admin, int count, string title){
	ifstream file("Books.data");//item 5
	bool is_exist = 0;
	char yes_or_no;
	for (int i = 0; i < count; i++){
		file.read((char *)&mass[i], sizeof(Book));
		if (mass[i].GetTitle() == title){
			cout << "Ви хочете зробити замовлення? y/n\n";
			cin >> yes_or_no;
			if (yes_or_no == 'y'){
				MakeOrder(mass[i], admin);
				is_exist = 1;
				break;
			}
			else break;
		}
	}
	file.close();
	if (is_exist != 1){
		cout << "На жаль, ми не маємо цієї книги";
	}
}
Book Reader::FindBook(Admin admin, int count, string title){//15
	Book *mass = new Book[count];
	ifstream a_file("INFO.txt");
	bool is_exist = 0;
	for (int i = 0; i < count; i++){
		a_file >> mass[i].author;
		a_file >> mass[i].title;
		a_file >> mass[i].year;
		a_file >> mass[i].number_of_pages;
		a_file >> mass[i].price;
		a_file >> mass[i].code;
		if (mass[i].GetTitle() == title){
			return mass[i];
			is_exist = 1;
		}
	}
	a_file.close();
	if (is_exist){
		cout << "We are sorry, but we haven`t this book";
	}
}
int Reader::FindBook(Book *mass, int count, string title){
	/*Book *mass = new Book[5];*/
	ifstream a_file("INFO.txt");
	bool is_exist = 0;
	for (int i = 0; i < count; i++){
		a_file >> mass[i].author;
		a_file >> mass[i].title;
		a_file >> mass[i].year;
		a_file >> mass[i].number_of_pages;
		a_file >> mass[i].price;
		a_file >> mass[i].code;
		if (mass[i].GetTitle() == title){
			ofstream file("Order.txt", ios_base::app);
			file << mass[i].author << endl;
			file << mass[i].title << endl;
			file << mass[i].year << endl;
			file << mass[i].number_of_pages << endl;
			file << mass[i].price << endl;
			file << mass[i].code;


			file.close();
			return 1;
			is_exist = 1;
		}
	}
	a_file.close();
	if (is_exist){
		return -1;
	}
}
string Reader::GetName(){
	return name;
}
void Reader::SetName(string name){
	this->name = name;
}
int Reader::getСardnumber(){
	return cardnumber;
}