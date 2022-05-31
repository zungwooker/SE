#include "PurchaseHistoryList.h"
#include "UIInquiryPurchaseHistory.h"
#include "CtrlInquiryPurchaseHistory.h"
#include "ClothesBought.h"
#include "ShoppingSystem.h"


CtrlInquiryPurchaseHistory::CtrlInquiryPurchaseHistory(ShoppingSystem* shoppingSystem) {
	ClothesBought* clothesBought = shoppingSystem->purchaseHistoryList->getPurchaseHistory(); //����Ʈ ���� �ּ� ��������
	shoppingSystem->uiInquiryPurchaseHistory->startInterface(clothesBought);
}