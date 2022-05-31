#include "ClothesBought.h"
#include "ProductList.h"
#include "PurchaseHistoryList.h"
#include "ShoppingSystem.h"


PurchaseHistoryList::PurchaseHistoryList() {
	clothesBought = new ClothesBought[100];
	curidx = 0;
}

void PurchaseHistoryList::addPurchase(Clothes* clothes) {
	ClothesBought* curclothesBought = new ClothesBought(clothes);
	//curclothesBought.setbuyerID(아이디 가져오기)
	clothesBought[curidx] = curclothesBought;
	curidx++;
}

ClothesBought* PurchaseHistoryList::getPurchaseHistory() {
	return clothesBought;
}

ClothesBought PurchaseHistoryList::setPoint(int point, string name, ShoppingSystem* shoppingSystem) {
	ClothesBought cb;
	for (int i = 0; i < 100; i++) {
		if (clothesBought[i].getname() == name) {
			clothesBought[i].setpurchaseSatisfaction(point);
			cb = clothesBought[i];
			break;
		}
	}
	shoppingSystem->productList->getGoods(name, shoppingSystem);
	int num = shoppingSystem->curClothes->getquantity() - shoppingSystem->curClothes->getstock();
	int avgPoint = ((num - 1) * shoppingSystem->curClothes->getaveragePurchaseSatisfaction() + point) / num;
	shoppingSystem->curClothes->setaveragePurchaseSatisfaction(avgPoint);
	return cb;
}

