#include "PurchaseHistoryList.h"
#include "Clothes.h"
#include "CtrlBuy.h"
#include "UIBuy.h"
#include "ShoppingSystem.h"


void CtrlBuy::buyGoods(ShoppingSystem* shoppingSystem) {
	shoppingSystem->curClothes->setstock(shoppingSystem->curClothes->getstock() - 1);// 수량 삭제
	shoppingSystem->purchaseHistoryList->addPurchase(shoppingSystem->curClothes);// 구매 기록 추가
}