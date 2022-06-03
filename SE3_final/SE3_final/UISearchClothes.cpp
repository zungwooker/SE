
#include <iostream>
#include <fstream>
#include "CtrlSearchClothes.h"
#include "ProductList.h"
#include "UISearchClothes.h"
#include "Clothes.h"
#include "ShoppingSystem.h"

UISearchClothes::UISearchClothes() {}

void UISearchClothes::startInterface() {}

void UISearchClothes::searchGoods(string content, ShoppingSystem* shoppingSystem) {
	ofstream ofs;

	shoppingSystem->ctrlSearchClothes->showGoods(content, shoppingSystem);

	ofs.open(shoppingSystem->outputurl, ios::out | ios::app);
	ofs << "4.1. 상품 정보 검색" << endl;
	if (shoppingSystem->curClothes != NULL) {
		ofs << "> " << shoppingSystem->curClothes->getsellerID()
			<< " " << shoppingSystem->curClothes->getname()
			<< " " << shoppingSystem->curClothes->getcompany()
			<< " " << shoppingSystem->curClothes->getprice()
			<< " " << shoppingSystem->curClothes->getstock()
			<< " " << shoppingSystem->curClothes->getaveragePurchaseSatisfaction()
			<< endl << endl;
	}
	ofs.close();
}
