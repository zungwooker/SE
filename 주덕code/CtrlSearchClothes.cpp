#pragma once
#include "CtrlSearchClothes.h"
#include "UISearchClothes.h"
#include "ProductList.h"
#include "Clothes.h"
#include "ShoppingSystem.h"

void CtrlSearchClothes::showGoods(string content, ShoppingSystem* shoppingSystem) {
	shoppingSystem->productList->getGoods(content, shoppingSystem);
}