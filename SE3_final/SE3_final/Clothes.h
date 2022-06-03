#pragma once
#include <iostream>
using namespace std;

class Clothes {
private:
	string sellerID;
	string name;
	string company;
	int price;
	int quantity;
	int stock;
	float averagePurchaseSatisfaction = 0;
public:
	void setsellerID(string sellerID);
	void setname(string name);
	void setcompany(string company);
	void setprice(int price);
	void setquantity(int quantity);
	void setstock(int stock);
	void setaveragePurchaseSatisfaction(float averagePurchaseSatisfaction);
	string getsellerID();
	string getname();
	string getcompany();
	int getprice();
	int getquantity();
	int getstock();
	float getaveragePurchaseSatisfaction();
};