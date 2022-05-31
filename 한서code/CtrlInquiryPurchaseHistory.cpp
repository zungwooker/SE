#include "PurchaseHistoryList.h"
#include "UIInquiryPurchaseHistory.h"
#include "CtrlInquiryPurchaseHistory.h"
#include "ClothesBought.h"
#include "ShoppingSystem.h"


CtrlInquiryPurchaseHistory::CtrlInquiryPurchaseHistory(ShoppingSystem* shoppingSystem) {
	ClothesBought* clothesBought = shoppingSystem->purchaseHistoryList->getPurchaseHistory(); //리스트 시작 주소 가져오고
	shoppingSystem->uiInquiryPurchaseHistory->startInterface(clothesBought);
}