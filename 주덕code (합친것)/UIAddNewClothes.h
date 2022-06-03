#pragma once
#include <iostream>
#include <string>
#include "CtrlAddNewClothes.h"

using namespace std;

class UIAddNewClothes
{
public:
	int price, quantity;
	stringstream prmeter3(pricestring);
	stringstream prmeter4(quantitystring);
	UIAddNewClothes();
	void startInterface();
	void creasteNewClothes(string name, string company, string pricestring, string quantitystring, ShoppingSystem *shoppingSystem);
};

