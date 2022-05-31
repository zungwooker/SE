#pragma once
#include <iostream>
#include "Clothes.h"
using namespace std;

class ShoppingSystem;

class ClothesSale : public Clothes
{
public:
	ClothesSale();
	ClothesSale(string name, string company, int price, int quantity, ShoppingSystem* shoppingSystem);
	void addClothes(string name, string company, int price, int quantity, ShoppingSystem *shoppingSystem);
};

