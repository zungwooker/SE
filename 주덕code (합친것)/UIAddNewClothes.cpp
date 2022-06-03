#include <iostream>
#include <fstream>
#include "CtrlAddNewClothes.h"
#include "UIAddNewClothes.h"
#include "ProductList.h"
#include "Clothes.h"
#include "ShoppingSystem.h"


UIAddNewClothes::UIAddNewClothes() {}

void UIAddNewClothes::startInterface() {}

void UIAddNewClothes::creasteNewClothes(string name, string company, string pricestring, string quantitystring, ShoppingSystem* shoppingsystem) {
	prmeter3 >> price;
	prmeter4 >> quantity;
	ofstream ofs;

	ofs.open(shoppingsystem->outputurl, ios::out | ios::app);
	ofs << "3.1. �Ǹ� �Ƿ� ���" << endl;
	if (shoppingsystem->ctrlAddNewClothes->addNewClothes(name, company, price, quantity, shoppingsystem)) {
		ofs << "> " << name << " " << company << " " << price << " " << quantity << endl << endl;
		ofs.close();
	}
	else
	{
		ofs << "> " << "��ǰ���� �ߺ��˴ϴ�." << endl << endl;
		ofs.close();
	}
}
