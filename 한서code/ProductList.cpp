#pragma once
#include <fstream>
#include "Clothes.h"
#include "ProductList.h"
#include "ShoppingSystem.h"
#include "MemberInfoDatabase.h"


ProductList::ProductList() {
	listClothes = new Clothes[100];
	listClothesOnSale = new Clothes[100];
	listSoldOutClothes = new Clothes[100];
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
		if (listClothes[i].getname() == shoppingSystem->memberInfoDatabase->getCurID())
			return false;
		else
			return true;
	}
}

void ProductList::createClothes(string name, string company, int price, int quantity, ShoppingSystem* shoppingSystem)
{
	listClothes[curidx].setsellerID(shoppingSystem->memberInfoDatabase->getCurID());
	listClothes[curidx].setname(name);
	listClothes[curidx].setcompany(company);
	listClothes[curidx].setprice(price);
	listClothes[curidx].setquantity(quantity);
	listClothes[curidx].setstock(quantity);
	curidx++;
}

Clothes* ProductList::getClothesOnSale(ShoppingSystem* shoppingSystem) {
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
	int cur = 0;
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
	return listSoldOutClothes;
}

Clothes* ProductList::getSalesStatics(ShoppingSystem* shoppingSystem) {
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