#pragma once
#include <iostream>
using namespace std;

class Clothes;
class ClothesBought;
class ProductList;
class ShoppingSystem;

class PurchaseHistoryList {
public:
	ClothesBought* clothesBought;
	int curidx;
	PurchaseHistoryList();
	void addPurchase(Clothes* clothes);
	ClothesBought* getPurchaseHistory();
	ClothesBought setPoint(int point, string name, ShoppingSystem* shoppingSystem);

};