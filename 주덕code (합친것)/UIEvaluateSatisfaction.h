#pragma once
#include <iostream>
using namespace std;

class CtrlEvaluateSatisfaction;
class PurchaseHistoryList;
class ProductList;
class ShoppingSystem;

class UIEvaluateSatisfaction {
public:
	void startInterface();
	void evaluetePurchaseStf(string prmt1, int point, ShoppingSystem* shoppingSystem);
};