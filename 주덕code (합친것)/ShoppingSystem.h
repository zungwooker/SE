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

class CtrlAddNewClothes;
class CtrlGetClothesOnSale;
class CtrlGetSaleStatics;
class CtrlGetSoldOutClothes;
class UIAddNewClothes;
class UIGetClothesOnSale;
class UIGetSalesStatics;
class UIGetSoldOutClothes;

class MemberInfoDatabase;
class CtrlMemberManagement;
class UIinit;
class UIProfile;

class ShoppingSystem {
public:
	string outputurl = "C:\\Users\\hanse\\OneDrive\\Desktop\\HW3\\output.txt";
	MemberInfoDatabase* memberInfoDatabase;
	CtrlMemberManagement* ctrlMemberManagement;
	UIinit* uiInit;
	UIProfile* uiProfile;

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

	CtrlAddNewClothes* ctrlAddNewClothes;
	CtrlGetClothesOnSale* ctrlGetClothesOnSale;
	CtrlGetSaleStatics* ctrlGetSaleStatics;
	CtrlGetSoldOutClothes* ctrlGetSoldOutClothes;
	UIAddNewClothes* uiAddNewClothes;
	UIGetClothesOnSale* uiGetClothesOnSale;
	UIGetSalesStatics* uiGetSaleStatics;
	UIGetSoldOutClothes* uiGetSoldOutClothes;
	
	ShoppingSystem();
};