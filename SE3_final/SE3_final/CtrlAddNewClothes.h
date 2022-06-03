#pragma once
#include <iostream>

using namespace std;

class UISearchClothes;
class Clothes;
class ProductList;
class ShoppingSystem;

class CtrlAddNewClothes
{
public:
	bool addNewClothes(string name, string company, int price, int quantity, ShoppingSystem* shoppingSystem);
};

