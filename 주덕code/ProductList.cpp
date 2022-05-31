#pragma once
#include "Clothes.h"
#include "ProductList.h"
#include "ShoppingSystem.h"


ProductList::ProductList() {
	listClothes = new Clothes[100];
}


void ProductList::setdata() {
	listClothes[0].setsellerID("mbc");
	listClothes[0].setname("hat");
	listClothes[0].setcompany("chulsoo");
	listClothes[0].setprice(2000);
	listClothes[0].setquantity(1);
	listClothes[0].setstock(listClothes[0].getquantity());
}

void ProductList::getGoods(string content, ShoppingSystem* shoppingSystem) {
	//data 가져오기

	for (int i = 0; i < 100; i++) {
		if (listClothes[i].getname() == content) {
			shoppingSystem->curClothes= &listClothes[i];
			break;
		}
	}
}