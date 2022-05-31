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
	//파일 쓰기
	ofs.open("C:\\Users\\hanse\\OneDrive\\Desktop\\HW3\\output.txt", ios::out | ios::app);
	ofs << "4.2. 상품구매 " << endl;
	ofs << "> " << shoppingSystem->curClothes->getsellerID() << " " << shoppingSystem->curClothes->getname() << endl << endl;
	ofs.close();
}