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
#include "UIinit.h"
#include "CtrlMemberManagement.h"
#include "MemberInfoDatabase.h"
#include "UIProfile.h"

#include "ClothesSale.h"
#include "CtrlAddNewClothes.h"
#include "CtrlGetClothesOnSale.h"
#include "CtrlGetSaleStatics.h"
#include "CtrlGetSoldOutClothes.h"
#include "UIAddNewClothes.h"
#include "UIGetClothesOnSale.h"
#include "UIGetSalesStatics.h"
#include "UIGetSoldOutClothes.h"

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
	uiInit = new UIinit();
	ctrlMemberManagement = new CtrlMemberManagement();
	memberInfoDatabase = new MemberInfoDatabase();
	uiProfile = new UIProfile();


	 clothesSale = new ClothesSale();
	 ctrlAddNewClothes = new CtrlAddNewClothes();
	 uiAddNewClothes = new UIAddNewClothes();
	 uiGetClothesOnSale = new UIGetClothesOnSale();
	 uiGetSaleStatics = new UIGetSalesStatics();
	 uiGetSoldOutClothes = new UIGetSoldOutClothes();


}