#include <iostream>
#include <fstream>
#include "CtrlBuy.h"
#include "Clothes.h"
#include "UIBuy.h"
#include "PurchaseHistoryList.h"
#include "ShoppingSystem.h"


void UIBuy::startInterface() {}

void UIBuy::buyIt(ShoppingSystem* shoppingSystem) {
	ofstream ofs;

	shoppingSystem->ctrlBuy->buyGoods(shoppingSystem);
	//���� ����
	ofs.open("C:\\Users\\���ִ�\\Desktop\\SE_3_file\\fout.txt", ios::out | ios::app);
	ofs << "4.2. ��ǰ���� " << endl;
	ofs << "> " << shoppingSystem->curClothes->getsellerID() << " " << shoppingSystem->curClothes->getname() << endl << endl;
	ofs.close();
}