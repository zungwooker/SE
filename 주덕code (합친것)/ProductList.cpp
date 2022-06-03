#pragma once
#include <fstream>
#include "Clothes.h"
#include "ProductList.h"
#include "ShoppingSystem.h"
#include "MemberInfoDatabase.h"


ProductList::ProductList() {
	listClothes = new Clothes[100];
	curidx = 0;
}

bool ProductList::getGoods(string content, ShoppingSystem* shoppingSystem) {

	for (int i = 0; i < 100; i++) {
		if (listClothes[i].getname() == content) {
			shoppingSystem->curClothes = &listClothes[i];
			return true;
		}
		else {
			shoppingSystem->curClothes = NULL;
		}
	}
	return true;
}

bool ProductList::checkName(string name, ShoppingSystem* shoppingSystem) {

	for (int i = 0; i < 100; i++) {
		if (listClothes[i].getname() == shoppingSystem->memberInfoDatabase->getCurID())
			return false;
		else
			return true;
	}
}

void ProductList::createClothes(string name, string company, int price, int quantity, ShoppingSystem* shoppingSystem) {
	listClothes[curidx].setsellerID(shoppingSystem->memberInfoDatabase->getCurID());
	listClothes[curidx].setname(name);
	listClothes[curidx].setcompany(company);
	listClothes[curidx].setprice(price);
	listClothes[curidx].setquantity(quantity);
	listClothes[curidx].setstock(quantity);
	curidx++;
}

Clothes* ProductList::getClothesOnSale(ShoppingSystem* shoppingSystem) {
	listClothesOnSale = new Clothes[100];
	int cur = 0;
	for (int i = 0; i < 100; i++) {
		if (listClothes[i].getsellerID() == shoppingSystem->memberInfoDatabase->getCurID())
		{
			listClothesOnSale[cur].setsellerID(listClothes[i].getsellerID());
			listClothesOnSale[cur].setname(listClothes[i].getname());
			listClothesOnSale[cur].setcompany(listClothes[i].getcompany());
			listClothesOnSale[cur].setprice(listClothes[i].getprice());
			listClothesOnSale[cur].setquantity(listClothes[i].getquantity());
			listClothesOnSale[cur].setstock(listClothes[i].getstock());
			listClothesOnSale[cur].setaveragePurchaseSatisfaction(listClothes->getaveragePurchaseSatisfaction());
			cur++;
		}
	}
	return listClothesOnSale;
}

Clothes* ProductList::getSoldOutClothes(ShoppingSystem* shoppingSystem) {

	listSoldOutClothes = new Clothes[100];
	int cur = 0;

	Clothes temp;
	char c1[100], c2[100];

	for (int i = 0; i < 100; i++) {
		if (listClothes[i].getsellerID() == shoppingSystem->memberInfoDatabase->getCurID())
		{
			if (listClothes[i].getstock() == 0) {
				listSoldOutClothes[cur].setsellerID(listClothes[i].getsellerID());
				listSoldOutClothes[cur].setname(listClothes[i].getname());
				listSoldOutClothes[cur].setcompany(listClothes[i].getcompany());
				listSoldOutClothes[cur].setprice(listClothes[i].getprice());
				listSoldOutClothes[cur].setquantity(listClothes[i].getquantity());
				listSoldOutClothes[cur].setstock(listClothes[i].getstock());
				listSoldOutClothes[cur].setaveragePurchaseSatisfaction(listClothes->getaveragePurchaseSatisfaction());
				cur++;
			}
		}
	}

	for (int i = 0;i < cur;i++) {
		for (int j = 0; j < cur - (i + 1);j++) {
			strcpy_s(c1, listSoldOutClothes[j].getname().c_str());
			strcpy_s(c2, listSoldOutClothes[j + 1].getname().c_str());

			if (strcmp(c1, c2) > 0) {
				temp = listSoldOutClothes[j];
				listSoldOutClothes[j] = listSoldOutClothes[j + 1];
				listSoldOutClothes[j + 1] = temp;
			}
		}
	}

	return listSoldOutClothes;
}

Clothes* ProductList::getSalesStatics(ShoppingSystem* shoppingSystem) {
	listClothesOnSale = new Clothes[100];
	int cur = 0;
	for (int i = 0; i < 100; i++) {
		if (listClothes[i].getsellerID() == shoppingSystem->memberInfoDatabase->getCurID())
		{
			listClothesOnSale[cur].setsellerID(listClothes[i].getsellerID());
			listClothesOnSale[cur].setname(listClothes[i].getname());
			listClothesOnSale[cur].setcompany(listClothes[i].getcompany());
			listClothesOnSale[cur].setprice(listClothes[i].getprice());
			listClothesOnSale[cur].setquantity(listClothes[i].getquantity());
			listClothesOnSale[cur].setstock(listClothes[i].getstock());
			listClothesOnSale[cur].setaveragePurchaseSatisfaction(listClothes->getaveragePurchaseSatisfaction());
			cur++;
		}
	}
	return listClothesOnSale;
}
