#include "PurchaseHistoryList.h"
#include "CtrlEvaluateSatisfaction.h"
#include "UIEvaluateSatisfaction.h"
#include "ClothesBought.h"
#include "ShoppingSystem.h"


ClothesBought CtrlEvaluateSatisfaction::setPoint(string prmt1, int point, ShoppingSystem* shoppingSystem) {
	return shoppingSystem->purchaseHistoryList->setPoint(point, prmt1, shoppingSystem);
}