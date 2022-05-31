#include <fstream>
#include "UIEvaluateSatisfaction.h"
#include "CtrlEvaluateSatisfaction.h"
#include "ClothesBought.h"
#include "ProductList.h"
#include "ShoppingSystem.h"


void UIEvaluateSatisfaction::startInterface() {}

void UIEvaluateSatisfaction::evaluetePurchaseStf(string prmt1, int point, ShoppingSystem* shoppingSystem) {
	ofstream ofs;
	//파일에서 값 받아 들이고...
	ClothesBought clothesBought = shoppingSystem->ctrlEvaluateSatisfaction->setPoint(prmt1, point, shoppingSystem);
	ofs.open("C:\\Users\\hanse\\OneDrive\\Desktop\\HW3\\output.txt", ios::out | ios::app);
	ofs << "4.4. 상품 구매 만족도 평가" << endl;
	ofs << "> " << clothesBought.getsellerID() << " " << clothesBought.getname() << " " << clothesBought.getpurchaseSatisfaction() << endl << endl;
	ofs.close();
}