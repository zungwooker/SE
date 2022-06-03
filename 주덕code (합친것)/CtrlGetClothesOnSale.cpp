#include "ProductList.h"
#include "UIGetClothesOnSale.h"
#include "CtrlGetClothesOnSale.h"
#include "ShoppingSystem.h"

CtrlGetClothesOnSale::CtrlGetClothesOnSale(ShoppingSystem* shoppingSystem)
{
	Clothes* clothes = shoppingSystem->productList->getSalesStatics(shoppingSystem);
	shoppingSystem->uiGetClothesOnSale->startInterface(clothes, shoppingSystem);
}
