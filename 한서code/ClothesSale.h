#pragma once
#include <iostream>
#include "Clothes.h"
using namespace std;

class ShoppingSystem;

class ClothesSale : public Clothes
{
public:
	ClothesSale();
	ClothesSale(string sellerID, string name, string company, int price, int quantity);
	void addClothes(string sellerID, string name, string company, int price, int quantity);
};

