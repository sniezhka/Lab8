#pragma once
#include "Header.h"
using namespace std;
class  Book
{
	//int price;
	//int number_of_pages;
	//string title;
	//string author;
	//int year;
 // int object_count;//8
public:
	int price;
	int number_of_pages;
	string title;
	string author;
	int year;
	int object_count;//8
	int code;
	class book_creating{};
	class book_deleting{};
	Book(string, string, int, int, int, int);//конструктор
	Book(){};//5
	~Book(){
		cout << "Object Book was destructed" << endl;
		object_count--;
	}
	 int ObjectCount(){//8
		return object_count;
	}
	int GetPrice();
	int GetNumberOfPages();
	int GetYear();
	string GetTitle();
	string GetAuthor();
	void SetPrice(int price);
	int SetYear();
	string SetTitle();
	void ShowBook();
	void Service_Dinamic(Book *array, int &lenAr, int number){//6
		try{
			if (number > lenAr || number < 1)
			{
				throw(book_deleting());
			}

			for (int ix = number - 1; ix < lenAr - 1; ix++)
			{
				array[ix] = array[ix + 1];
			}
			delete[lenAr] array;
			lenAr--;
		}
		catch (book_deleting){
			cout << "Wrong number of element" << endl;
		}
	}
	void Service_Static(Book *array, int &lenAr, int number){//6
		try{
			if (number > lenAr || number < 1)
			{
				throw(book_deleting());
			}

			for (int ix = number - 1; ix < lenAr - 1; ix++)
			{
				array[ix] = array[ix + 1];
			}
			//delete[lenAr] array;
			lenAr--;
		}
		catch (book_deleting){
			cout << "Wrong number of element" << endl;
		}

	}
};