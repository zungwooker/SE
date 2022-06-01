#pragma once
#include <iostream>
using namespace std;

class ClothesBought;
class ShoppingSystem;

class CtrlEvaluateSatisfaction {
public:
	ClothesBought setPoint(string prmt1, int point, ShoppingSystem* shoppingSystem);
};