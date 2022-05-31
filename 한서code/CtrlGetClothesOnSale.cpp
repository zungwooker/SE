#include "ProductList.h"
#include "UIGetClothesOnSale.h"
#include "CtrlGetClothesOnSale.h"
#include "ClothesSale.h"
#include "ShoppingSystem.h"

CtrlGetClothesOnSale::CtrlGetClothesOnSale(ShoppingSystem* shoppingSystem)
{
	Clothes* clothesSale = shoppingSystem->productList->getSalesStatics(shoppingSystem);
	shoppingSystem->uiGetClothesOnSale->startInterface(clothesSale, shoppingSystem);
}
