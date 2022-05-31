#include <fstream>
#include "UIEvaluateSatisfaction.h"
#include "CtrlEvaluateSatisfaction.h"
#include "ClothesBought.h"
#include "ProductList.h"
#include "ShoppingSystem.h"


void UIEvaluateSatisfaction::startInterface() {}

void UIEvaluateSatisfaction::evaluetePurchaseStf(string prmt1, int point, ShoppingSystem* shoppingSystem) {
	ofstream ofs;
	//���Ͽ��� �� �޾� ���̰�...
	ClothesBought clothesBought = shoppingSystem->ctrlEvaluateSatisfaction->setPoint(prmt1, point, shoppingSystem);
	ofs.open("C:\\Users\\hanse\\OneDrive\\Desktop\\HW3\\output.txt", ios::out | ios::app);
	ofs << "4.4. ��ǰ ���� ������ ��" << endl;
	ofs << "> " << clothesBought.getsellerID() << " " << clothesBought.getname() << " " << clothesBought.getpurchaseSatisfaction() << endl << endl;
	ofs.close();
}