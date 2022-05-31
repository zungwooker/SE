#pragma once

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
	ShoppingSystem();
};