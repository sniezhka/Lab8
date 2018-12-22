#pragma once
#include "Header.h"
#include "Reader.h"
#include "Book.h"
#include "Admin.h"
Book::Book(string author, string title, int year, int number_of_pages, int price, int code){//�����������
	this->author = author;
	this->title = title;
	this->year = year;
	this->number_of_pages = number_of_pages;
	this->price = price;
	this->code = code;
	if (!object_count){
		object_count = 1;
	}
	else{
		object_count++;
	}
}

int Book::GetPrice(){//get �����
	return price;
}
void Book::SetPrice(int price){
	this->price = price;
}
int Book::GetNumberOfPages(){//get �����
	return number_of_pages;
}
int Book::GetYear(){//get �����
	return year;
}
string Book::GetTitle(){//get �����
	return title;
}
string Book::GetAuthor(){//get �����
	return author;
}

void Book::ShowBook(){
	cout << "Title: " << (*this).GetTitle() << endl;
	cout << "Author: " << (*this).GetAuthor() << endl;
	cout << "Price: " << (*this).GetPrice() << endl;
	cout << "Number Of Pages: " << (*this).GetNumberOfPages() << endl;
	cout << "Year: " << (*this).GetYear() << endl;
	cout << endl;
}