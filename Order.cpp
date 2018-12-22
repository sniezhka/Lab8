#include "Header.h"
#include "Reader.h"
#include "Book.h"
#include "Order.h"
#include "Admin.h"
using namespace std;
Order::Order(Book book, Reader reader, Admin admin, string date){
	this->book = book;
	this->reader = reader;
	this->admin = admin;
	this->date = date;
}
void Order::setBook(Book book){
	this->book = book;
}
void Order::setReader(Reader reader){
	this->reader = reader;
}
void Order::setDate(string date){
	this->date = date;
}
void Order::MakeOrder(Admin admin){
	ofstream file("Orders.data", ios::app);
	file.write((char *)&(*this), sizeof(Order));
	file.close();
	cout << "Order was made!\n" << endl;
}
void Order::PayOrder(int cardnumber, int price, int money, Admin admin){
	if (cardnumber == admin.cardnumber){
		money -= price;
		admin.SetWallet(price);
		cout << "Your order was succesfully payed\n";
	}
}