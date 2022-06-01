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
#include "ClothesSale.h"
#include "CtrlAddNewClothes.h"
#include "CtrlGetClothesOnSale.h"
#include "CtrlGetSaleStatics.h"
#include "CtrlGetSoldOutClothes.h"
#include "UIAddNewClothes.h"
#include "UIGetClothesOnSale.h"
#include "UIGetSalesStatics.h"
#include "UIGetSoldOutClothes.h"

#include "MemberInfoDatabase.h"
#include "CtrlMemberManagement.h"
#include "UIinit.h"
#include "UIProfile.h"

ShoppingSystem::ShoppingSystem() {

	memberInfoDatabase = new MemberInfoDatabase();
	ctrlMemberManagement = new CtrlMemberManagement();
	uiInit = new UIinit();
	uiProfile = new UIProfile();

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

	clothesSale = new ClothesSale();
	ctrlAddNewClothes = new CtrlAddNewClothes();
	uiAddNewClothes = new UIAddNewClothes();
	uiGetClothesOnSale = new UIGetClothesOnSale();
	uiGetSaleStatics = new UIGetSalesStatics();
	uiGetSoldOutClothes = new UIGetSoldOutClothes();


}