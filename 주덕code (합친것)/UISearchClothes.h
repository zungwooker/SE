#pragma once
#include <iostream>
using namespace std;

class Clothes;
class ShoppingSystem;

class UISearchClothes {
public:
	UISearchClothes();
	void startInterface();
	void searchGoods(string content, ShoppingSystem* shoppingSystem);
};