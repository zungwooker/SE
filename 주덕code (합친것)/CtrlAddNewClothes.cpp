#pragma once
#include "CtrlAddNewClothes.h"
#include "UIAddNewClothes.h"
#include "Clothes.h"
#include "ProductList.h"
#include "ShoppingSystem.h"
#include "MemberInfoDatabase.h"

bool CtrlAddNewClothes::addNewClothes(string name, string company, int price, int quantity, ShoppingSystem *shoppingSystem) {
	if (shoppingSystem->productList->checkName(name, shoppingSystem)) {
		shoppingSystem->productList->createClothes(name, company, price, quantity, shoppingSystem);
		return true;
	}
	else
		return false;
}
