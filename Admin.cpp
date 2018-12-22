#pragma once
#include "Header.h"
#include "Admin.h"
#include"Book.h"
#include "Reader.h"
#include "Order.h"

Admin::Admin(string name, string surname, string work, int cardnumber, int salary, int age, int premium, string password) : Human(name, surname, age){//конструктор
	this->work = work;
	this->cardnumber = cardnumber;
	this->salary = salary;
	this->premium = premium;
	this->password = password;
	this->SetWallet(0);
}
Admin::Admin(string name) :Human(name){//конструктор
}
void Admin::AddToBlackList(Order order){// додати невиплачене замовлення до чорного списку
	ofstream bllist("Blacklist.data");
	bllist.write((char *)&order, sizeof(order));
	bllist.close();
}
void Admin::SetName(){
	this->name = "Anonym";
}
void Admin::AddBook(string author, string name, int year, int number_of_pages, int price, int code){//додати нової книги
	Book book(author, name, year, number_of_pages, price, code); //item 3 //item 6
	//ofstream file("Books.data", ios::app);//item 5

	//file.write((char *)&book, sizeof(Book));

	/*file.close();*/
	ofstream a_file("INFO.txt", ios_base::app);
		a_file << book.author << endl;
		a_file << book.title<< endl;
		a_file << book.year << endl;
		a_file << book.number_of_pages<< endl;
		a_file << book.price <<endl;
		a_file << book.code;
	
	a_file.close();

}
void Admin::ClassName(){// item 4 //повернення classname
	cout << typeid(*this).name();
}
string Admin::GetName(){
	return name;
}
void Admin::SetName(string name){
	this->name = name;
}
void Admin::PayForBook(int cardnumber, int price, int money){ //отримання грошей за замовлення
	if (cardnumber == this->cardnumber){
		if (money >= price){
			money -= price;
			this->wallet += price;
			cout << "Ваше замовлення сплачено\n";
		}
		else{
			cout << "Ви не маєте достатньо грошей\n";
		}
	}
	else{
		cout << "Номер картки не правильний\n";
	}
}
void ChangeWork(Admin &ob){//10 дружня ф-ія
	ob.work = "Senioradmin";
}
void Admin::ReadToFile(Book*book, int n){

		/*ifstream file("Books.data");
		
		for (int i = 0; i < n; i++){
	
			file.read((char *)&book[i], sizeof(book));
		}
		file.close();*/
	ifstream a_file("INFO.txt");
	for (int i = 0; i < n; i++){
		a_file >> book[i].author;
		a_file >> book[i].title;
		a_file >> book[i].year;
		a_file >> book[i].number_of_pages;
		a_file >> book[i].price;
		a_file >> book[i].code;

	}

}
