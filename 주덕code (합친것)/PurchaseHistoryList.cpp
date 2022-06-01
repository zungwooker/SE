#include "ClothesBought.h"
#include "ProductList.h"
#include "PurchaseHistoryList.h"
#include "ShoppingSystem.h"
#include "MemberInfoDatabase.h"
#include <algorithm>


PurchaseHistoryList::PurchaseHistoryList() {
	clothesBought = new ClothesBought[100];
	curidx = 0;
}

void PurchaseHistoryList::addPurchase(Clothes* clothes, ShoppingSystem* shoppingSystem) {
	ClothesBought* curclothesBought = new ClothesBought(clothes);
	string curID = shoppingSystem->memberInfoDatabase->getCurID();
	curclothesBought->setbuyerID(curID);
	clothesBought[curidx] = curclothesBought;
	curidx++;
}

ClothesBought* PurchaseHistoryList::getPurchaseHistory() {
	sort(clothesBought, clothesBought + curidx);
	return clothesBought;
}

ClothesBought PurchaseHistoryList::setPoint(int point, string name, ShoppingSystem* shoppingSystem) {
	ClothesBought cb;
	for (int i = 0; i < 100; i++) {
		if (clothesBought[i].getname() == name && clothesBought[i].getbuyerID() == shoppingSystem->memberInfoDatabase->getCurID()) {
			clothesBought[i].setpurchaseSatisfaction(point);
			cb = clothesBought[i];
			break;
		}
	}
	shoppingSystem->productList->getGoods(name, shoppingSystem);
	int num = shoppingSystem->curClothes->getquantity() - shoppingSystem->curClothes->getstock();
	float avgPoint = ((num - 1) * shoppingSystem->curClothes->getaveragePurchaseSatisfaction() + point) / num;
	avgPoint = round(avgPoint);
	shoppingSystem->curClothes->setaveragePurchaseSatisfaction(avgPoint);
	return cb;
}
