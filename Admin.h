#pragma once
#include "Header.h"
#include"Book.h"
#include"Human.h"
class Order;
class Admin :virtual public Human {//1 ��������� �����������
	string work;
	 int salary;//12
	 int wallet;
	 int premium;
public:
	string password;
	class admin_creating{};
	class admin_deleting{};
	void ReadToFile(Book*book, int n);
	virtual void Business_card(){//4
		cout << "Name" << name << "\tSurname" << surname << "\tWork" << work << endl;
	}
	void who_is_this_man() { cout << "����" << endl; };//��������� 2
	int cardnumber;
	Admin(string, string, string, int, int, int, int, string);//�����������  4
	explicit Admin(string);//�����������
	Admin(){};//4
	Admin(const Admin &obj)//4
	{
	}
	~Admin(){
		cout << "Object Admin was destructed" << endl;
	}
	void funcs(){
		cout << "Admin func" << endl;
	}
	friend void ChangeWork(Admin &);//10
	string GetName();
	void PayForBook(int, int, int);//��������� ������ �� �����
	void SetName(string);
	void SetName();
	void AddToBlackList(Order);//������� ���������� �� ������� ������
	void AddBook(string, string, int, int, int, int);//item 3 //��������� ���� �����
	void ClassName();//�����, �� ������� ��'� �����


	 int getSalary(){//12
		return salary;
	}
	void setSalary(int salary){//12
		this->salary = salary;
	}
	string getPassword(){//12
		return password;
	}
	void setPassword(string password){//12
		this->password = password;
	}
	 int GetPremium(){
		return premium;
	}
	void SetPremium(int premium)
	{
		this->premium = premium;
	}
	void SetWallet(int value){
		wallet += value;
	};//12
	Admin func(){//15
		Admin admin;
		admin.setSalary(800);
		return admin;
	}
};