#include "ProductList.h"
#include "UIGetSoldOutClothes.h"
#include "CtrlGetSoldOutClothes.h"
#include "Clothes.h"
#include "ShoppingSystem.h"

CtrlGetSoldOutClothes::CtrlGetSoldOutClothes(ShoppingSystem* shoppingSystem)
{
	Clothes* clothes = shoppingSystem->productList->getSoldOutClothes(shoppingSystem);
	shoppingSystem->uiGetSoldOutClothes->startInterface(clothes, shoppingSystem);
}
