#pragma once
#include <string>

using namespace std;

class Clothes;
class ClothesBought;
class CtrlBuy;
class CtrlEvaluateSatisfaction;
class CtrlInquiryPurchaseHistory;
class CtrlSearchClothes;
class ProductList;
class PurchaseHistoryList;
class UIBuy;
class UIEvaluateSatisfaction;
class UIInquiryPurchaseHistory;
class UISearchClothes;
class UIinit;
class CtrlMemberManagement;
class MemberInfoDatabase;
class UIProfile;

class ClothesSale;
class CtrlAddNewClothes;
class CtrlGetClothesOnSale;
class CtrlGetSaleStatics;
class CtrlGetSoldOutClothes;
class UIAddNewClothes;
class UIGetClothesOnSale;
class UIGetSalesStatics;
class UIGetSoldOutClothes;


class ShoppingSystem {
public:
	Clothes* curClothes;
	ClothesBought* clothesBought;
	CtrlBuy* ctrlBuy;
	CtrlEvaluateSatisfaction* ctrlEvaluateSatisfaction;
	CtrlInquiryPurchaseHistory* ctrlInquiryPurchaseHistory;
	CtrlSearchClothes* ctrlSearchClothes;
	ProductList* productList;
	PurchaseHistoryList* purchaseHistoryList;
	UIBuy* uiBuy;
	UIEvaluateSatisfaction* uiEvaluateSatisfaction;
	UIInquiryPurchaseHistory* uiInquiryPurchaseHistory;
	UISearchClothes* uiSearchClothes;
	UIinit* uiInit;
	CtrlMemberManagement* ctrlMemberManagement;
	MemberInfoDatabase* memberInfoDatabase;
	UIProfile* uiProfile;

	ClothesSale* clothesSale;
	CtrlAddNewClothes* ctrlAddNewClothes;
	CtrlGetClothesOnSale* ctrlGetClothesOnSale;
	CtrlGetSaleStatics* ctrlGetSaleStatics;
	CtrlGetSoldOutClothes* ctrlGetSoldOutClothes;
	UIAddNewClothes* uiAddNewClothes;
	UIGetClothesOnSale* uiGetClothesOnSale;
	UIGetSalesStatics* uiGetSaleStatics;
	UIGetSoldOutClothes* uiGetSoldOutClothes;
	
	ShoppingSystem();

	//юс╫ц
	string curID;
};