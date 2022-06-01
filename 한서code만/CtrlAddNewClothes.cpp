#pragma once
#include "CtrlAddNewClothes.h"
#include "UIAddNewClothes.h"
#include "Clothes.h"
#include "ClothesSale.h" 
#include "ProductList.h"
#include "ShoppingSystem.h"

bool CtrlAddNewClothes::addNewClothes(string name, string company, int price, int quantity, ShoppingSystem *shoppingSystem)
{
	if (shoppingSystem->productList->checkName(name, shoppingSystem)) {
		shoppingSystem->productList->createClothes(name, company, price, quantity, shoppingSystem);
		shoppingSystem->clothesSale->addClothes(name, company, price, quantity, shoppingSystem);
		return true;
	}
	else
		return false;
}
