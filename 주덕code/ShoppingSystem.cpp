#include "ShoppingSystem.h"
#include "CtrlSearchClothes.h"
#include "ClothesBought.h"
#include "CtrlBuy.h"
#include "CtrlEvaluateSatisfaction.h"
#include "CtrlInquiryPurchaseHistory.h"
#include "ProductList.h"
#include "PurchaseHistoryList.h"
#include "UIBuy.h"
#include "UIEvaluateSatisfaction.h"
#include "UIInquiryPurchaseHistory.h"
#include "UISearchClothes.h"


ShoppingSystem::ShoppingSystem() {
	
	productList = new ProductList();
	purchaseHistoryList = new PurchaseHistoryList();
	uiBuy = new UIBuy();
	uiEvaluateSatisfaction = new UIEvaluateSatisfaction();
	uiInquiryPurchaseHistory = new UIInquiryPurchaseHistory();
	uiSearchClothes = new UISearchClothes();
	ctrlSearchClothes = new CtrlSearchClothes();
	ctrlBuy = new CtrlBuy();
	ctrlEvaluateSatisfaction = new CtrlEvaluateSatisfaction();
	ctrlSearchClothes = new CtrlSearchClothes();
	productList->setdata();
}
