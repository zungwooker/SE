#include "ProductList.h"
#include "UIGetSalesStatics.h"
#include "CtrlGetSaleStatics.h"
#include "ClothesSale.h"
#include "ShoppingSystem.h"


CtrlGetSaleStatics::CtrlGetSaleStatics(ShoppingSystem* shoppingSystem) {
	Clothes* clothes = shoppingSystem->productList->getSalesStatics(shoppingSystem);
	shoppingSystem->uiGetSaleStatics->startInterface(clothes, shoppingSystem);
}