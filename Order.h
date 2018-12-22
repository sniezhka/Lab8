
#pragma once
#include "Header.h"
#include "Book.h"
#include "Reader.h"
#include "Admin.h"

class Order{
public:
	Order(Book book, Reader reader, Admin admin, string date);
	Order(const Book &obj);
	~Order(){
		cout << "Object Order was destructed!\n";
	}
	Order(){};
	void setBook(Book book);
	void setReader(Reader reader);
	void setDate(string date);
	void MakeOrder(Admin admin);
	void PayOrder(int cardnumber, int price, int money, Admin admin);
	Book GetBook(){
		return book;
	}
	string GetDate(){
		return date;
	}
private:
	Book book;
	Reader reader;
	Admin admin;
	string date;
};