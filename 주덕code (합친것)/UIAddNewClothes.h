#pragma once
#include <iostream>
#include <string>
#include "CtrlAddNewClothes.h"

using namespace std;

class UIAddNewClothes
{
public:
	UIAddNewClothes();
	void startInterface();
	void creasteNewClothes(string name, string company, int price, int quantity, ShoppingSystem *shoppingSystem);
};

