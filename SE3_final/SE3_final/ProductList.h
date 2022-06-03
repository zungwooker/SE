#pragma once
#include <iostream>
using namespace std;

class Clothes;
class ShoppingSystem;

class ProductList {
public:
	Clothes* listClothes;
	Clothes* listClothesOnSale;
	Clothes* listSoldOutClothes;
	int curidx;
	ProductList();
	bool getGoods(string content, ShoppingSystem* shoppingSystem);
	bool checkName(string name, ShoppingSystem* shoppingSystem);
	void createClothes( string name, string company, int price, int quantity, ShoppingSystem* shoppingSystem);
	Clothes* getClothesOnSale(ShoppingSystem* shoppingSystem);
	Clothes* getSoldOutClothes(ShoppingSystem* shoppingSystem);
	Clothes* getSalesStatics(ShoppingSystem* shoppingSystem);
};