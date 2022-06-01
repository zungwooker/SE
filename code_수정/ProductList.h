#pragma once
#include <iostream>
using namespace std;

class Clothes;
class ShoppingSystem;

class ProductList {
public:
	Clothes* listClothes;
	ProductList();
	void setdata();
	void getGoods(string content, ShoppingSystem* shoppingSystem);
};