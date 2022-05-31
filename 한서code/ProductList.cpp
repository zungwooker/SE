#pragma once
#include <fstream>
#include "Clothes.h"
#include "ProductList.h"
#include "ShoppingSystem.h"


ProductList::ProductList() {
	listClothes = new Clothes[100];
	curidx = 0;
}

void ProductList::getGoods(string content, ShoppingSystem* shoppingSystem) {

	for (int i = 0; i < 100; i++) {
		if (listClothes[i].getname() == content) {
			shoppingSystem->curClothes = &listClothes[i];
			break;
		}
	}
}

bool ProductList::checkName(string name, ShoppingSystem* shoppingSystem)
{

	for (int i = 0; i < 100; i++) {
		if (listClothes[i].getname() == name) 
			return false;
		else
			return true;
	}
}

void ProductList::createClothes(string name, string company, int price, int quantity, ShoppingSystem* shoppingSystem)
{
	listClothes[curidx].setsellerID(shoppingSystem->curID);
	listClothes[curidx].setname(name);
	listClothes[curidx].setcompany(company);
	listClothes[curidx].setprice(price);
	listClothes[curidx].setquantity(quantity);
	listClothes[curidx].setstock(quantity);
	curidx++;
}

Clothes* ProductList::getClothesOnSale(ShoppingSystem* shoppingSystem) {

	return listClothes;
}

Clothes* ProductList::getSoldOutClothes(ShoppingSystem* shoppingSystem) {

	return listClothes;
}

Clothes* ProductList::getSalesStatics(ShoppingSystem* shoppingSystem) {

	return listClothes;
}